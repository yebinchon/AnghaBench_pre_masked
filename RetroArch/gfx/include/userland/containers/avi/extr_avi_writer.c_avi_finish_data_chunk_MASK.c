
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,scalar_t__,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_2, uint32_t VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;

   if (VAR_3)
   {

      if (FUNC_5(VAR_2))
      {
         FUNC_2(VAR_2, FUNC_4(VAR_2) - VAR_3 - 4);
         FUNC_7(VAR_2, VAR_3, "Chunk Size");
         FUNC_3(VAR_2, VAR_3);
      }
      else
      {
         FUNC_1(VAR_2, "warning, can't rewrite chunk size, data will be malformed");
         VAR_4 = VAR_0;
      }
   }

   FUNC_0(VAR_2);

   if (VAR_4 != VAR_1) VAR_4 = FUNC_6(VAR_2);

   return VAR_4;
}
