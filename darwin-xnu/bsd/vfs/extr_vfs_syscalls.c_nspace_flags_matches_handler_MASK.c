
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nspace_type_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(uint32_t VAR_3, nspace_type_t VAR_4)
{
 switch(VAR_4) {
  case 129:
   return (VAR_3 & VAR_0) == VAR_1;
  case 128:
   return (VAR_3 & VAR_0) == VAR_2;
  default:
   FUNC_0("nspace_flags_matches_handler: invalid type %u\n", (int)VAR_4);
   return 0;
 }
}
