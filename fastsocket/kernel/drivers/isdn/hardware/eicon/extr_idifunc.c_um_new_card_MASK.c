
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int (* request ) (int *) ;} ;
struct TYPE_10__ {int Id; int list; TYPE_5__ d; } ;
typedef TYPE_3__ udiva_card ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_8__ {int logical_adapter_number; } ;
struct TYPE_9__ {TYPE_1__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_11__ {TYPE_2__ xdi_logical_adapter_number; } ;
typedef TYPE_4__ IDI_SYNC_REQ ;
typedef int ENTITY ;
typedef int DESCRIPTOR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int *,char*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_5__*,int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(DESCRIPTOR * VAR_3)
{
 int VAR_4 = 0;
 udiva_card *VAR_5 = ((void*)0);
 IDI_SYNC_REQ VAR_6;
 diva_os_spin_lock_magic_t VAR_7;

 if (!(VAR_5 = FUNC_4(0, sizeof(udiva_card)))) {
  FUNC_0(("cannot get buffer for card"));
  return;
 }
 FUNC_7(&VAR_5->d, VAR_3, sizeof(DESCRIPTOR));
 VAR_6.xdi_logical_adapter_number.Req = 0;
 VAR_6.xdi_logical_adapter_number.Rc =
     VAR_0;
 VAR_5->d.request((ENTITY *) & VAR_6);
 VAR_4 =
     VAR_6.xdi_logical_adapter_number.info.logical_adapter_number;
 VAR_5->Id = VAR_4;
 if (!(FUNC_5(VAR_3, VAR_4))) {
  FUNC_1(&VAR_2, &VAR_7, "add card");
  FUNC_6(&VAR_5->list, &VAR_1);
  FUNC_3(&VAR_2, &VAR_7, "add card");
 } else {
  FUNC_0(("could not create user mode idi card %d",
    VAR_4));
  FUNC_2(0, VAR_5);
 }
}
