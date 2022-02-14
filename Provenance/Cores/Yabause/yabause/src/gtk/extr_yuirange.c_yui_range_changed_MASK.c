
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int combo; TYPE_1__* items; int key; int group; int keyfile; } ;
typedef TYPE_2__ YuiRange ;
struct TYPE_5__ {int value; } ;
typedef int GtkWidget ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 size_t FUNC_4 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_5(GtkWidget * VAR_2, YuiRange * VAR_3) {
 FUNC_2(VAR_3->keyfile, VAR_3->group, VAR_3->key,
   VAR_3->items[FUNC_4(FUNC_0(VAR_3->combo))].value);
 FUNC_3(FUNC_1(VAR_3), VAR_1[VAR_0], 0);
}
