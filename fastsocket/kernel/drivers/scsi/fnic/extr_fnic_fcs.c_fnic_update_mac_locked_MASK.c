
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * ctl_src_addr; } ;
struct fnic {int vdev; TYPE_2__* lport; int * data_src_addr; TYPE_1__ ctlr; } ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct fnic *VAR_2, u8 *VAR_3)
{
 u8 *VAR_4 = VAR_2->ctlr.ctl_src_addr;
 u8 *VAR_5 = VAR_2->data_src_addr;

 if (FUNC_2(VAR_3))
  VAR_3 = VAR_4;
 if (!FUNC_1(VAR_5, VAR_3))
  return;
 FUNC_0(VAR_1, VAR_2->lport->host, "update_mac %pM\n", VAR_3);
 if (!FUNC_2(VAR_5) && FUNC_1(VAR_5, VAR_4))
  FUNC_5(VAR_2->vdev, VAR_5);
 FUNC_3(VAR_5, VAR_3, VAR_0);
 if (FUNC_1(VAR_3, VAR_4))
  FUNC_4(VAR_2->vdev, VAR_3);
}
