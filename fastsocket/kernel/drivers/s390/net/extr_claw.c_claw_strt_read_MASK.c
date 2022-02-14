
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {struct claw_privbk* ml_priv; } ;
struct clawh {int flag; } ;
struct claw_privbk {struct ccwbk* p_read_active_first; TYPE_2__* p_write_active_first; scalar_t__ p_claw_signal_blk; struct chbk* channel; } ;
struct chbk {int cdev; int IO_active; } ;
struct TYPE_6__ {scalar_t__ flag; } ;
struct ccwbk {int read; TYPE_3__ header; } ;
typedef unsigned long __u32 ;
struct TYPE_4__ {scalar_t__ flag; } ;
struct TYPE_5__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,unsigned long,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 scalar_t__ FUNC_6 (int ,void*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7 (struct net_device *VAR_6, int VAR_7 )
{
        int VAR_8 = 0;
        __u32 VAR_9;
        unsigned long VAR_10 = 0;
 struct claw_privbk *VAR_11 = VAR_6->ml_priv;
        struct ccwbk*VAR_12;
        struct chbk *VAR_13;
        struct clawh *VAR_14;
        VAR_13=&VAR_11->channel[VAR_4];

 FUNC_0(4, VAR_5, "StRdNter");
        VAR_14=(struct clawh *)VAR_11->p_claw_signal_blk;
        VAR_14->flag=VAR_1;

        if ((VAR_11->p_write_active_first!=((void*)0) &&
             VAR_11->p_write_active_first->header.flag!=VAR_2) ||
            (VAR_11->p_read_active_first!=((void*)0) &&
             VAR_11->p_read_active_first->header.flag!=VAR_2 )) {
                VAR_14->flag=VAR_0;
        }
        if (VAR_7==VAR_3) {
                FUNC_4(FUNC_3(VAR_13->cdev), VAR_10);
        }
        if (FUNC_6(0, (void *)&VAR_13->IO_active) == 0) {
  FUNC_0(4, VAR_5, "HotRead");
                VAR_12=VAR_11->p_read_active_first;
                VAR_9 = (unsigned long) VAR_13;
                VAR_8 = FUNC_2 (VAR_13->cdev, &VAR_12->read, VAR_9,
           0xff, 0);
                if (VAR_8 != 0) {
                        FUNC_1(VAR_13->cdev, VAR_8);
                }
        }
 else {
  FUNC_0(2, VAR_5, "ReadAct");
 }

        if (VAR_7==VAR_3) {
                FUNC_5(FUNC_3(VAR_13->cdev), VAR_10);
        }
 FUNC_0(4, VAR_5, "StRdExit");
        return;
}
