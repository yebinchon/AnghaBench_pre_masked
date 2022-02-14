
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char,char,char,char) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_2, VC_CONTAINER_FOURCC_T VAR_3, uint32_t *VAR_4)
{
   VC_CONTAINER_STATUS_T VAR_5;
   VC_CONTAINER_FOURCC_T VAR_6;
   uint32_t VAR_7;
   uint32_t VAR_8[1];

   do {
      VAR_6 = FUNC_2(VAR_2, "Chunk ID");
      VAR_7 = FUNC_3(VAR_2, "Chunk size");
      if((VAR_5 = FUNC_4(VAR_2)) != VAR_1) return VAR_5;

      if(VAR_6 == FUNC_5('L','I','S','T'))
      {
         if (FUNC_1(VAR_2, (uint8_t*)VAR_8, 4) != 4)
            return VAR_0;
         if (VAR_8[0] == VAR_3)
         {
            *VAR_4 = VAR_7;
            return VAR_1;
         }
      }

      FUNC_0(VAR_2, VAR_7);
   } while((VAR_5 = FUNC_4(VAR_2)) == VAR_1);

   return VAR_5;
}
