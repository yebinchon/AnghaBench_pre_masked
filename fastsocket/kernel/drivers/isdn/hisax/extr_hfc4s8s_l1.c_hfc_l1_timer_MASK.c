
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int (* l1l2 ) (TYPE_2__*,int,int *) ;} ;
struct TYPE_4__ {TYPE_2__ ifc; } ;
struct hfc4s8s_l1 {int l1_state; int st_num; int lock; int hw; TYPE_1__ d_if; scalar_t__ nt_mode; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (TYPE_2__*,int,int *) ;

__attribute__((used)) static void
FUNC_5(struct hfc4s8s_l1 *VAR_4)
{
 u_long VAR_5;

 if (!VAR_4->enabled)
  return;

 FUNC_1(&VAR_4->lock, VAR_5);
 if (VAR_4->nt_mode) {
  VAR_4->l1_state = 1;
  FUNC_0(VAR_4->hw, VAR_3, VAR_4->st_num);
  FUNC_0(VAR_4->hw, VAR_0, 0x11);
  FUNC_2(&VAR_4->lock, VAR_5);
  VAR_4->d_if.ifc.l1l2(&VAR_4->d_if.ifc,
      VAR_2 | VAR_1, ((void*)0));
  FUNC_1(&VAR_4->lock, VAR_5);
  VAR_4->l1_state = 1;
  FUNC_0(VAR_4->hw, VAR_0, 0x1);
  FUNC_2(&VAR_4->lock, VAR_5);
 } else {

  FUNC_0(VAR_4->hw, VAR_3, VAR_4->st_num);
  FUNC_0(VAR_4->hw, VAR_0, 0x13);
  FUNC_2(&VAR_4->lock, VAR_5);
  VAR_4->d_if.ifc.l1l2(&VAR_4->d_if.ifc,
      VAR_2 | VAR_1, ((void*)0));
  FUNC_1(&VAR_4->lock, VAR_5);
  FUNC_0(VAR_4->hw, VAR_3, VAR_4->st_num);
  FUNC_0(VAR_4->hw, VAR_0, 0x3);
  FUNC_2(&VAR_4->lock, VAR_5);
 }
}
