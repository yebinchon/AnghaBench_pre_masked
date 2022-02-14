
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int Channels; } ;
typedef TYPE_1__ diva_strace_context_t ;
struct TYPE_14__ {int path_length; } ;
typedef TYPE_2__ diva_man_var_header_t ;


 int FUNC_0 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_6 (diva_strace_context_t* VAR_0,
               diva_man_var_header_t* VAR_1) {
 const char* VAR_2 = (char*)&VAR_1->path_length+1;
 char VAR_3[64];
 int VAR_4, VAR_5;




 for (VAR_4 = VAR_0->Channels; VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_4 (VAR_3, "State\\B%d\\Modem", VAR_4);
  if (!FUNC_5(VAR_3, VAR_2, VAR_5)) {
   return (FUNC_3 (VAR_0, VAR_4, VAR_1));
  }
 }




 for (VAR_4 = VAR_0->Channels; VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_4 (VAR_3, "State\\B%d\\FAX", VAR_4);
  if (!FUNC_5(VAR_3, VAR_2, VAR_5)) {
   return (FUNC_0 (VAR_0, VAR_4, VAR_1));
  }
 }




 for (VAR_4 = VAR_0->Channels; VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_4 (VAR_3, "State\\B%d", VAR_4);
  if (!FUNC_5(VAR_3, VAR_2, VAR_5)) {
   return (FUNC_2 (VAR_0, VAR_4, VAR_1));
  }
 }

 if (!FUNC_1 (VAR_0, VAR_1)) {
  return (0);
 }

 return (-1);
}
