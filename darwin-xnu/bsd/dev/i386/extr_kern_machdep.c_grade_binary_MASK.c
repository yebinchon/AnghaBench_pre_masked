
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_type_t ;
typedef int cpu_subtype_t ;







 int FUNC_0 () ;

int
FUNC_1(cpu_type_t VAR_0, cpu_subtype_t VAR_1)
{
 cpu_subtype_t VAR_2 = FUNC_0();

 switch(VAR_0) {
 case 128:
  switch(VAR_2) {
  case 131:
   switch (VAR_1) {
   case 131:
    return 3;
   case 132:
    return 2;
   }
   break;
  case 130:
   switch (VAR_1) {
   case 132:
    return 2;
   }
   break;
  }
  break;
 case 129:
  return 1;
 }

 return 0;
}
