
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
struct TYPE_3__ {int value_length; scalar_t__ path_length; } ;
typedef TYPE_1__ diva_man_var_header_t ;
typedef int byte ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2 (diva_man_var_header_t* VAR_0, dword* VAR_1) {
 byte* VAR_2 = (char*)&VAR_0->path_length;
 dword VAR_3;

 VAR_2 += (VAR_0->path_length + 1);

 switch (VAR_0->value_length) {
  case 1:
   VAR_3 = (byte)(*VAR_2);
   break;

  case 2:
   VAR_3 = (word)FUNC_1(VAR_2);
   break;

  case 3:
   VAR_3 = (dword)FUNC_0(VAR_2);
   VAR_3 &= 0x00ffffff;
   break;

  case 4:
   VAR_3 = (dword)FUNC_0(VAR_2);
   break;

  default:
   return (-1);
 }

 *VAR_1 = VAR_3;

 return (0);
}
