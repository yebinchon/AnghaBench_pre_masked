
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int track_num ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char**) ;
 int FUNC_5 (int *,int ,char*) ;
 char** VAR_7 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_8 )
{
   VC_CONTAINER_STATUS_T VAR_9 = VAR_6;
   uint8_t VAR_10, VAR_11;
   char VAR_12[4] = {0};

   FUNC_2(VAR_8, 3, "ID3v1 identifier");

   FUNC_6(VAR_8, VAR_3, 30);

   FUNC_6(VAR_8, VAR_1, 30);

   FUNC_6(VAR_8, VAR_0, 30);

   FUNC_6(VAR_8, VAR_5, 4);
   FUNC_2(VAR_8, 28, "ID3v1 comment");
   if (FUNC_0(VAR_8, "ID3v1 zero-byte") == 0)
   {
      VAR_10 = FUNC_0(VAR_8, "ID3v1 track");
      FUNC_7(VAR_12, sizeof(VAR_12) - 1, "%02d", VAR_10);
      FUNC_5(VAR_8, VAR_4, VAR_12);
   }
   else
   {
      FUNC_1(VAR_8, 1);
   }
   VAR_11 = FUNC_0(VAR_8, "ID3v1 genre");
   if (VAR_11 < FUNC_4(VAR_7))
   {
      FUNC_5(VAR_8, VAR_2, VAR_7[VAR_11]);
   }

   VAR_9 = FUNC_3(VAR_8);

   return VAR_9;
}
