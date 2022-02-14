
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 scalar_t__ FUNC_0 (int *,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,char*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,char*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,char*) ;
 int FUNC_5 (int *,scalar_t__,char*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;
   uint32_t VAR_5, VAR_6, VAR_7;

   FUNC_3(VAR_2, VAR_3, "Reserved");
   VAR_6 = FUNC_1(VAR_2, VAR_3, "Codec Entries Count");

   FUNC_6(VAR_2, VAR_3);


   for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   {
      FUNC_5(VAR_2, VAR_3, "Type");
      VAR_7 = FUNC_0(VAR_2, VAR_3, "Codec Name Length");
      if(VAR_3 < VAR_7) return VAR_0;
      FUNC_4(VAR_2, VAR_3, VAR_7 * 2, "Codec Name");
      VAR_7 = FUNC_0(VAR_2, VAR_3, "Codec Description Length");
      if(VAR_3 < VAR_7) return VAR_0;
      FUNC_4(VAR_2, VAR_3, VAR_7 * 2, "Codec Description");
      VAR_7 = FUNC_0(VAR_2, VAR_3, "Codec Information Length");
      if(VAR_3 < VAR_7) return VAR_0;
      FUNC_2(VAR_2, VAR_3, VAR_7);

      FUNC_6(VAR_2, VAR_3);
   }

   return VAR_4;
}
