
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nspace_type_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(nspace_type_t VAR_2)
{
 switch(VAR_2) {
  case 129:
   return VAR_0;
  case 128:
   return VAR_1;
  default:
   FUNC_0("nspace_item_flags_for_type: invalid type %u\n", (int)VAR_2);
   return 0;
 }
}
