
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int dword ;
typedef int diva_trace_ie_t ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ diva_man_var_header_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5 (diva_man_var_header_t* VAR_0,
                   void* VAR_1) {
 switch (VAR_0->type) {
  case 0x03:
   return (FUNC_1 (VAR_0, (char*)VAR_1));
  case 0x04:
   return (FUNC_0 (VAR_0, (char*)VAR_1));
  case 0x05:
   return (FUNC_2 (VAR_0, (diva_trace_ie_t*)VAR_1));
  case 0x81:
   return (FUNC_3 (VAR_0, (int*)VAR_1));
  case 0x82:
   return (FUNC_4 (VAR_0, (dword*)VAR_1));
  case 0x83:
   return (FUNC_4 (VAR_0, (dword*)VAR_1));
  case 0x87:
   return (FUNC_4 (VAR_0, (dword*)VAR_1));
 }






 return (-1);
}
