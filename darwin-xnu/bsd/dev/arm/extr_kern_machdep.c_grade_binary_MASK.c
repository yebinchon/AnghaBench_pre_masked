
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_type_t ;
typedef int cpu_subtype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(cpu_type_t VAR_2, cpu_subtype_t VAR_3)
{




 cpu_subtype_t VAR_4 = FUNC_0();


 switch (VAR_2) {
 case 129:
  switch (VAR_4) {



  case 131:
   switch (VAR_3) {
   case 131:
    return 7;
   }
   goto v7s;





v7s:
  case 132:
   switch (VAR_3) {
   case 132:
    return 6;
   }
   goto v7;




  case 133:
   switch (VAR_3) {
   case 133:
    return 6;
   }
   break;





  case 134:
   switch (VAR_3) {
   case 134:
    return 6;
   }
   goto v7;

v7:
  case 135:
   switch (VAR_3) {
   case 135:
    return 5;
   }


  case 136:
   switch (VAR_3) {
   case 136:
    return 4;
   }


  case 137:
   switch (VAR_3) {
   case 137:
    return 3;
   }


  case 138:
   switch (VAR_3) {
   case 138:
    return 2;
   case 139:
    return 1;
   }
   break;

  case 130:
   switch (VAR_3) {
   case 130:
    return 4;
   case 137:
    return 3;
   case 138:
    return 2;
   case 139:
    return 1;
   }
   break;
  }

 }

 return 0;
}
