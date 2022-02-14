
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
 int FUNC_4 (int *,scalar_t__,char*) ;
 int FUNC_5 (int *,scalar_t__,char*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   uint32_t VAR_3, VAR_4;

   VAR_4 = FUNC_0(VAR_1, VAR_2, "Content Encryption Records Count");

   for(VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   {
      uint32_t VAR_5, VAR_6, VAR_7, VAR_8;

      FUNC_3(VAR_1, VAR_2, "System ID");
      FUNC_5(VAR_1, VAR_2, "System Version");
      VAR_6 = FUNC_0(VAR_1, VAR_2, "Encrypted Object Record Count");

      FUNC_6(VAR_1, VAR_2);

      for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
      {
         FUNC_4(VAR_1, VAR_2, "Encrypted Object ID Type");
         VAR_8 = FUNC_0(VAR_1, VAR_2, "Encrypted Object ID Length");
         if(VAR_8 > VAR_2) return VAR_0;
         FUNC_2(VAR_1, VAR_2, VAR_8);
         FUNC_6(VAR_1, VAR_2);
      }

      VAR_7 = FUNC_1(VAR_1, VAR_2, "Data Size");
      if(VAR_7 > VAR_2) return VAR_0;
      FUNC_2(VAR_1, VAR_2, VAR_7);
      FUNC_6(VAR_1, VAR_2);
   }

   return FUNC_7(VAR_1);
}
