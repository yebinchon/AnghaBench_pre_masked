
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nspace_type_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline nspace_type_t FUNC_1(uint64_t VAR_3)
{
 switch(VAR_3 & VAR_0) {
  case 129:
   return VAR_1;
  case 128:
   return VAR_2;
  default:
   FUNC_0("nspace_type_for_op: invalid op mask %llx\n", VAR_3 & VAR_0);
   return VAR_1;
 }
}
