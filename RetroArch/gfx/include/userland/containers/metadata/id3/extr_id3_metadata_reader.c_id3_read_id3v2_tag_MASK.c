
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int *,int ,scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_12( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_2;
   uint8_t VAR_5, VAR_6;
   uint32_t VAR_7, VAR_8 = 0;
   uint8_t VAR_9[10];

   FUNC_8(VAR_3, 3, "ID3v2 identifier");
   VAR_5 = FUNC_6(VAR_3, "ID3v2 version (major)");
   FUNC_9(VAR_3, "ID3v2 version (minor)");
   VAR_6 = FUNC_6(VAR_3, "ID3v2 flags");
   VAR_7 = FUNC_5(VAR_3, "ID3v2 syncsafe tag size");
   VAR_7 = FUNC_0(VAR_7);
   FUNC_1(VAR_3, "ID3v2 tag size: %d", VAR_7);


   if (!(VAR_5 == 4 || VAR_5 == 3 || VAR_5 == 2))
      return VAR_1;


   if ((VAR_6 >> 7) & 1)
   {
      FUNC_1(VAR_3, "skipping unsynchronised tag, not supported");
      return VAR_1;
   }


   if (VAR_5 == 2) return VAR_1;

   if ((VAR_6 >> 6) & 1)
   {

      uint32_t VAR_10;
      FUNC_1(VAR_3, "skipping ID3v2 extended header, not supported");
      VAR_10 = FUNC_5(VAR_3, "ID3v2 syncsafe extended header size");
      VAR_10 = FUNC_0(VAR_10);
      FUNC_1(VAR_3, "ID3v2 extended header size: %d", VAR_10);
      FUNC_7(VAR_3, FUNC_2(VAR_7, VAR_10));
      VAR_8 += VAR_10;
   }

   while (FUNC_3(VAR_3, VAR_9, 10) == 10 && VAR_8 < VAR_7)
   {
      VC_CONTAINER_FOURCC_T VAR_11;
      uint32_t VAR_12;
      uint8_t VAR_13;

      VAR_11 = FUNC_4(VAR_3, "Frame ID");
      VAR_12 = FUNC_5(VAR_3, "Frame Size");

      if (VAR_5 >= 4)
      {
         VAR_12 = FUNC_0(VAR_12);
         FUNC_1(VAR_3, "ID3v2 actual frame size: %d", VAR_12);
      }

      FUNC_9(VAR_3, "ID3v2 status message flags");
      VAR_13 = FUNC_6(VAR_3, "ID3v2 format description flags");

      VAR_8 += 10;

      if((VAR_4 = FUNC_10(VAR_3)) != VAR_2 || !VAR_11)
         break;


      if (VAR_8 + VAR_12 > VAR_7)
      {
         VAR_4 = VAR_0;
         break;
      }


      if ((VAR_13 >> 1) & 1)
      {
         FUNC_1(VAR_3, "skipping unsynchronised frame, not supported");
         FUNC_7(VAR_3, VAR_12);
         continue;
      }

      if ((VAR_4 = FUNC_11(VAR_3, VAR_11, VAR_12)) != VAR_2)
      {
         FUNC_1(VAR_3, "skipping unsupported frame");
         FUNC_7(VAR_3, VAR_12);
      }

      VAR_8 += VAR_12;
   }


   if (VAR_8 < VAR_7) FUNC_7(VAR_3, VAR_7 - VAR_8);

   return VAR_4;
}
