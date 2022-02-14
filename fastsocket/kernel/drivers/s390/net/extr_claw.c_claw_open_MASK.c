
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {unsigned long data; scalar_t__ expires; void* function; } ;
struct net_device {int name; scalar_t__ ml_priv; } ;
struct claw_privbk {scalar_t__ buffs_alloc; int * p_buff_write; int * p_buff_read; int * p_buff_ccw; TYPE_2__* channel; int p_buff_pages_perwrite; struct ccwbk* p_write_active_first; int p_buff_write_num; TYPE_1__* p_env; int p_buff_pages_perread; struct ccwbk* p_read_active_first; int p_buff_read_num; int p_buff_ccw_num; scalar_t__ release_pend; scalar_t__ system_validate_comp; } ;
struct ccwbk {struct ccwbk* next; scalar_t__ p_buffer; } ;
struct ccw_device {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int flag; int last_dstat; TYPE_3__* cdev; int claw_state; int wait; scalar_t__ IO_active; scalar_t__ flag_a; int collect_queue; int tasklet; } ;
struct TYPE_5__ {scalar_t__ read_size; scalar_t__ write_size; scalar_t__ packing; int api_type; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct ccw_device*,unsigned long) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_17 ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct timer_list*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (unsigned long,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct timer_list*) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,unsigned long) ;
 int FUNC_22 (int ,unsigned long) ;
 scalar_t__ FUNC_23 (int ,int ,int) ;
 int FUNC_24 (int *,int ,unsigned long) ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_25(struct net_device *VAR_23)
{

        int VAR_24;
        int VAR_25;
        unsigned long VAR_26=0;
        unsigned long VAR_27;
        struct claw_privbk *VAR_28;
 FUNC_2(VAR_22, VAR_19);
        struct timer_list VAR_29;
        struct ccwbk *VAR_30;

 FUNC_0(4, VAR_21, "open");
 VAR_28 = (struct claw_privbk *)VAR_23->ml_priv;

 if (VAR_28->buffs_alloc == 0) {
         VAR_24=FUNC_13(VAR_23);
         if (VAR_24) {
   FUNC_0(2, VAR_21, "openmem");
                 return -VAR_8;
         }
 }
        VAR_28->system_validate_comp=0;
        VAR_28->release_pend=0;
 if(FUNC_23(VAR_28->p_env->api_type,VAR_16,6) == 0) {
  VAR_28->p_env->read_size=VAR_4;
  VAR_28->p_env->write_size=VAR_4;
  VAR_28->p_env->packing=VAR_10;
 } else {
  VAR_28->p_env->packing=0;
  VAR_28->p_env->read_size=VAR_0;
  VAR_28->p_env->write_size=VAR_0;
 }
        FUNC_8(VAR_23);
 FUNC_24(&VAR_28->channel[VAR_12].tasklet, VAR_17,
         (unsigned long) &VAR_28->channel[VAR_12]);
        for ( VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  FUNC_1(2, VAR_21, "opn_ch%d", VAR_25);
                FUNC_15(&VAR_28->channel[VAR_25].wait);

  if (VAR_25 == VAR_15)
   FUNC_20(
    &VAR_28->channel[VAR_15].collect_queue);
                VAR_28->channel[VAR_25].flag_a = 0;
                VAR_28->channel[VAR_25].IO_active = 0;
                VAR_28->channel[VAR_25].flag &= ~VAR_3;
                FUNC_14(&VAR_29);
                VAR_29.function = (void *)VAR_18;
                VAR_29.data = (unsigned long)(&VAR_28->channel[VAR_25]);
                VAR_29.expires = VAR_20 + 15*VAR_9;
                FUNC_3(&VAR_29);
                FUNC_21(FUNC_12(
   VAR_28->channel[VAR_25].cdev), VAR_26);
                VAR_27 = (unsigned long) &VAR_28->channel[VAR_25];
                VAR_28->channel[VAR_25].claw_state = VAR_1;
  VAR_24 = 0;
  FUNC_4(&VAR_28->channel[VAR_25].wait, &VAR_22);
                VAR_24 = FUNC_6(
   (struct ccw_device *)VAR_28->channel[VAR_25].cdev,VAR_27);
                FUNC_19(VAR_13);
                FUNC_22(
   FUNC_12(VAR_28->channel[VAR_25].cdev), VAR_26);
                FUNC_18();
  FUNC_19(VAR_14);
                FUNC_17(&VAR_28->channel[VAR_25].wait, &VAR_22);
                if(VAR_24 != 0)
                        FUNC_5(VAR_28->channel[VAR_25].cdev, VAR_24);
                if((VAR_28->channel[VAR_25].flag & VAR_3) == 0x00)
                        FUNC_9(&VAR_29);
        }
        if ((((VAR_28->channel[VAR_12].last_dstat |
  VAR_28->channel[VAR_15].last_dstat) &
           ~(VAR_5 | VAR_6)) != 0x00) ||
           (((VAR_28->channel[VAR_12].flag |
     VAR_28->channel[VAR_15].flag) & VAR_3) != 0x00)) {
  FUNC_10(&VAR_28->channel[VAR_12].cdev->dev,
   "%s: remote side is not ready\n", VAR_23->name);
  FUNC_0(2, VAR_21, "notrdy");

                for ( VAR_25 = 0; VAR_25 < 2; VAR_25++) {
                        FUNC_21(
    FUNC_12(VAR_28->channel[VAR_25].cdev),
    VAR_26);
                        VAR_27 = (unsigned long) &VAR_28->channel[VAR_25];
                        VAR_28->channel[VAR_25].claw_state = VAR_2;
                        VAR_24 = FUNC_6(
    (struct ccw_device *)&VAR_28->channel[VAR_25].cdev,
    VAR_27);
                        FUNC_22(
    FUNC_12(VAR_28->channel[VAR_25].cdev),
    VAR_26);
                        if (VAR_24 != 0) {
                                FUNC_5(
     VAR_28->channel[VAR_25].cdev, VAR_24);
                        }
                }
                FUNC_11((unsigned long)VAR_28->p_buff_ccw,
   (int)FUNC_16(VAR_28->p_buff_ccw_num));
                if (VAR_28->p_env->read_size < VAR_11) {
                        FUNC_11((unsigned long)VAR_28->p_buff_read,
          (int)FUNC_16(
            VAR_28->p_buff_read_num));
                }
                else {
                        VAR_30=VAR_28->p_read_active_first;
                        while (VAR_30!=((void*)0)) {
                                FUNC_11((unsigned long)VAR_30->p_buffer,
          (int)FUNC_16(
           VAR_28->p_buff_pages_perread ));
                                VAR_30=VAR_30->next;
                        }
                }
                if (VAR_28->p_env->write_size < VAR_11 ) {
                        FUNC_11((unsigned long)VAR_28->p_buff_write,
        (int)FUNC_16(
         VAR_28->p_buff_write_num));
                }
                else {
                        VAR_30=VAR_28->p_write_active_first;
                        while (VAR_30!=((void*)0)) {
                                FUNC_11((unsigned long)VAR_30->p_buffer,
         (int)FUNC_16(
          VAR_28->p_buff_pages_perwrite ));
                                VAR_30=VAR_30->next;
                        }
                }
  VAR_28->buffs_alloc = 0;
  VAR_28->channel[VAR_12].flag= 0x00;
  VAR_28->channel[VAR_15].flag = 0x00;
                VAR_28->p_buff_ccw=((void*)0);
                VAR_28->p_buff_read=((void*)0);
                VAR_28->p_buff_write=((void*)0);
                FUNC_7(VAR_23);
  FUNC_0(2, VAR_21, "open EIO");
                return -VAR_7;
        }



        FUNC_7(VAR_23);
 FUNC_0(4, VAR_21, "openok");
        return 0;
}
