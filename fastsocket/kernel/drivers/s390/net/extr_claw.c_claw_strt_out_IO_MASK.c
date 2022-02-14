
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; scalar_t__ ml_priv; } ;
struct claw_privbk {struct ccwbk* p_write_active_first; struct chbk* channel; } ;
struct chbk {scalar_t__ claw_state; int cdev; int IO_active; } ;
struct ccwbk {int write; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,unsigned long,int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4( struct net_device *VAR_4 )
{
        int VAR_5 = 0;
        unsigned long VAR_6;
        struct claw_privbk *VAR_7;
        struct chbk *VAR_8;
        struct ccwbk *VAR_9;

 if (!VAR_4) {
  return;
 }
 VAR_7 = (struct claw_privbk *)VAR_4->ml_priv;
        VAR_8=&VAR_7->channel[VAR_1];

 FUNC_0(4, VAR_3, "strt_io");
        VAR_9=VAR_7->p_write_active_first;

        if (VAR_8->claw_state == VAR_0)
                return;
        if (VAR_9 == ((void*)0)) {
                return;
        }
        if (FUNC_3(0, (void *)&VAR_8->IO_active) == 0) {
                VAR_6 = (unsigned long) VAR_8;
  FUNC_0(2, VAR_3, "StWrtIO");
  VAR_5 = FUNC_2(VAR_8->cdev, &VAR_9->write, VAR_6,
          0xff, 0);
                if (VAR_5 != 0) {
                        FUNC_1(VAR_8->cdev, VAR_5);
                }
        }
        VAR_4->trans_start = VAR_2;
        return;
}
