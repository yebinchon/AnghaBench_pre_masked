
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rmon_mib {int dummy; } ;
struct net_device {int dummy; } ;
struct gfar_private {int device_flags; int rx_buffer_size; TYPE_1__* regs; } ;
struct TYPE_4__ {int cam2; int cam1; } ;
struct TYPE_3__ {int minflr; int mrblr; TYPE_2__ rmon; int gaddr7; int gaddr6; int gaddr5; int gaddr4; int gaddr3; int gaddr2; int gaddr1; int gaddr0; int igaddr7; int igaddr6; int igaddr5; int igaddr4; int igaddr3; int igaddr2; int igaddr1; int igaddr0; int imask; int ievent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 struct gfar_private *VAR_5 = FUNC_2(VAR_4);


 FUNC_0(&VAR_5->regs->ievent, VAR_1);


 FUNC_0(&VAR_5->regs->imask, VAR_2);


 FUNC_0(&VAR_5->regs->igaddr0, 0);
 FUNC_0(&VAR_5->regs->igaddr1, 0);
 FUNC_0(&VAR_5->regs->igaddr2, 0);
 FUNC_0(&VAR_5->regs->igaddr3, 0);
 FUNC_0(&VAR_5->regs->igaddr4, 0);
 FUNC_0(&VAR_5->regs->igaddr5, 0);
 FUNC_0(&VAR_5->regs->igaddr6, 0);
 FUNC_0(&VAR_5->regs->igaddr7, 0);

 FUNC_0(&VAR_5->regs->gaddr0, 0);
 FUNC_0(&VAR_5->regs->gaddr1, 0);
 FUNC_0(&VAR_5->regs->gaddr2, 0);
 FUNC_0(&VAR_5->regs->gaddr3, 0);
 FUNC_0(&VAR_5->regs->gaddr4, 0);
 FUNC_0(&VAR_5->regs->gaddr5, 0);
 FUNC_0(&VAR_5->regs->gaddr6, 0);
 FUNC_0(&VAR_5->regs->gaddr7, 0);


 if (VAR_5->device_flags & VAR_0) {
  FUNC_1(&(VAR_5->regs->rmon), 0, sizeof (struct rmon_mib));


  FUNC_0(&VAR_5->regs->rmon.cam1, 0xffffffff);
  FUNC_0(&VAR_5->regs->rmon.cam2, 0xffffffff);
 }


 FUNC_0(&VAR_5->regs->mrblr, VAR_5->rx_buffer_size);


 FUNC_0(&VAR_5->regs->minflr, VAR_3);
}
