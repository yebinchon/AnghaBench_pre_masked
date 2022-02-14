
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4(VC_CONTAINER_T *VAR_1, VC_CONTAINER_FOURCC_T VAR_2, uint32_t *VAR_3)
{
   VC_CONTAINER_STATUS_T VAR_4;
   VC_CONTAINER_FOURCC_T VAR_5;
   uint32_t VAR_6;

   do {
      VAR_5 = FUNC_1(VAR_1, "Chunk ID");
      VAR_6 = FUNC_2(VAR_1, "Chunk size");
      if((VAR_4 = FUNC_3(VAR_1)) != VAR_0) return VAR_4;

      if(VAR_5 == VAR_2)
      {
         *VAR_3 = VAR_6;
         return VAR_0;
      }

      FUNC_0(VAR_1, VAR_6);
   } while((VAR_4 = FUNC_3(VAR_1)) == VAR_0);

   return VAR_4;
}
