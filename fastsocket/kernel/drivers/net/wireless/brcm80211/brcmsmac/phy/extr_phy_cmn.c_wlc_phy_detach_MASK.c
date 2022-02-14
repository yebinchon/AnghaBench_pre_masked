
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct TYPE_4__ {int (* detach ) (struct brcms_phy*) ;} ;
struct brcms_phy {TYPE_2__ pi_fptr; struct brcms_phy* next; TYPE_1__* sh; int * phycal_timer; scalar_t__ refcnt; } ;
struct TYPE_3__ {struct brcms_phy* phy_head; } ;


 int FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct brcms_phy_pub *VAR_0)
{
 struct brcms_phy *VAR_1 = (struct brcms_phy *) VAR_0;

 if (VAR_0) {
  if (--VAR_1->refcnt)
   return;

  if (VAR_1->phycal_timer) {
   FUNC_2(VAR_1->phycal_timer);
   VAR_1->phycal_timer = ((void*)0);
  }

  if (VAR_1->sh->phy_head == VAR_1)
   VAR_1->sh->phy_head = VAR_1->next;
  else if (VAR_1->sh->phy_head->next == VAR_1)
   VAR_1->sh->phy_head->next = ((void*)0);

  if (VAR_1->pi_fptr.detach)
   (VAR_1->pi_fptr.detach)(VAR_1);

  FUNC_0(VAR_1);
 }
}
