
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_1,
   int64_t VAR_2, uint64_t *VAR_3)
{
   switch(VAR_2)
   {
   case 1: *VAR_3 = FUNC_7(VAR_1, "u8-integer"); break;
   case 2: *VAR_3 = FUNC_0(VAR_1, "u16-integer"); break;
   case 3: *VAR_3 = FUNC_1(VAR_1, "u24-integer"); break;
   case 4: *VAR_3 = FUNC_2(VAR_1, "u32-integer"); break;
   case 5: *VAR_3 = FUNC_3(VAR_1, "u40-integer"); break;
   case 6: *VAR_3 = FUNC_4(VAR_1, "u48-integer"); break;
   case 7: *VAR_3 = FUNC_5(VAR_1, "u56-integer"); break;
   case 8: *VAR_3 = FUNC_6(VAR_1, "u64-integer"); break;
   default: return VAR_0;
   }
   return FUNC_8(VAR_1);
}
