
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Id; int list; } ;
typedef TYPE_1__ udiva_card ;
typedef int diva_os_spin_lock_magic_t ;
typedef int DESCRIPTOR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(DESCRIPTOR * VAR_1)
{
 diva_os_spin_lock_magic_t VAR_2;
 udiva_card *VAR_3 = ((void*)0);

 if (!(VAR_3 = FUNC_6(VAR_1))) {
  FUNC_0(("cannot find card to remove"));
  return;
 }
 FUNC_5(VAR_3->Id);
 FUNC_2(&VAR_0, &VAR_2, "remove card");
 FUNC_7(&VAR_3->list);
 FUNC_4(&VAR_0, &VAR_2, "remove card");
 FUNC_1(("idi proc entry removed for card %d", VAR_3->Id));
 FUNC_3(0, VAR_3);
}
