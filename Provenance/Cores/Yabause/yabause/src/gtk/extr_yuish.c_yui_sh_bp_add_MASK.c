
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
typedef TYPE_2__* gpointer ;
typedef scalar_t__ gchar ;
struct TYPE_9__ {int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkEntry ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (scalar_t__ const*,char*,unsigned int*) ;

__attribute__((used)) static void FUNC_7(GtkEntry * VAR_0, gpointer VAR_1) {
 YuiSh * VAR_2 = VAR_1;
 const gchar * VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_4(VAR_0);

 if (*VAR_3 == 0) return;

 FUNC_6(VAR_3, "%8X", &VAR_4);

 FUNC_0(VAR_2->debugsh, VAR_4);

 FUNC_5(VAR_0, "");

 {
  sh2regs_struct VAR_5;
  FUNC_1(VAR_2->debugsh, &VAR_5);
  FUNC_3(VAR_2,VAR_5.PC);
  FUNC_2(VAR_2);
 }
}
