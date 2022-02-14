
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*,double) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4(VC_CONTAINER_T *VAR_1,
   int64_t VAR_2, double *VAR_3)
{
   union {
      uint32_t u32;
      uint64_t u64;
      float f;
      double d;
   } VAR_4;

   switch(VAR_2)
   {
   case 4: VAR_4.u32 = FUNC_1(VAR_1, "f32-float"); *VAR_3 = VAR_4.f; break;
   case 8: VAR_4.u64 = FUNC_2(VAR_1, "f64-float"); *VAR_3 = VAR_4.d; break;
   default: return VAR_0;
   }
   FUNC_0(VAR_1, "float: %f", *VAR_3);
   return FUNC_3(VAR_1);
}
