
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
typedef TYPE_2__* gpointer ;
struct TYPE_9__ {int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkWidget ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(GtkWidget * VAR_0, gpointer VAR_1) {
 YuiSh * VAR_2 = VAR_1;

 FUNC_0(VAR_2->debugsh);

 {
  sh2regs_struct VAR_3;
  FUNC_1(VAR_2->debugsh, &VAR_3);
  FUNC_3(VAR_2,VAR_3.PC);
  FUNC_2(VAR_2);
 }
}
