
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * args; } ;
struct cx18_in_work_order {char* str; TYPE_1__ mb; } ;
struct cx18 {int i_flags; } ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct cx18 *VAR_1, struct cx18_in_work_order *VAR_2)
{
 char *VAR_3;
 char *VAR_4 = VAR_2->str;

 FUNC_0("%x %s\n", VAR_2->mb.args[0], VAR_4);
 VAR_3 = FUNC_2(VAR_4, '.');
 if (!FUNC_3(VAR_0, &VAR_1->i_flags) && VAR_3 && VAR_3 > VAR_4)
  FUNC_1("FW version: %s\n", VAR_3 - 1);
}
