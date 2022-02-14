
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_length; scalar_t__ path_length; } ;
typedef TYPE_1__ diva_man_var_header_t ;
typedef char byte ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (diva_man_var_header_t* VAR_0, int* VAR_1) {
 byte* VAR_2 = (char*)&VAR_0->path_length;
 int VAR_3;

 VAR_2 += (VAR_0->path_length + 1);

 switch (VAR_0->value_length) {
  case 1:
   VAR_3 = *(char*)VAR_2;
   break;

  case 2:
   VAR_3 = (short)FUNC_1(VAR_2);
   break;

  case 4:
   VAR_3 = (int)FUNC_0(VAR_2);
   break;

  default:
   return (-1);
 }

 *VAR_1 = VAR_3;

 return (0);
}
