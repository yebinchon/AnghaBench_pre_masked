
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int name; scalar_t__ ml_priv; } ;
struct claw_privbk {int release_pend; int system_validate_comp; int buffs_alloc; int mtc_logical_link; int mtc_skipping; TYPE_1__* channel; scalar_t__ mtc_offset; int * p_write_active_last; int write_free_count; struct ccwbk* p_write_free_chain; struct ccwbk* p_write_active_first; struct ccwbk* p_read_active_first; int * p_buff_write; int * p_buff_read; int * p_buff_ccw; int p_buff_pages_perwrite; int p_buff_write_num; TYPE_2__* p_env; int p_buff_pages_perread; int p_buff_read_num; int p_buff_ccw_num; int * pk_skb; } ;
struct TYPE_9__ {int length; int opcode; int flag; } ;
struct ccwbk {struct ccwbk* next; TYPE_3__ header; scalar_t__ p_buffer; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {scalar_t__ read_size; scalar_t__ write_size; } ;
struct TYPE_7__ {int last_dstat; TYPE_4__* cdev; int wait; int collect_queue; scalar_t__ IO_active; int claw_state; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct net_device*) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int,int) ;
 int FUNC_9 (unsigned long,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,unsigned long) ;
 int FUNC_17 (int ,unsigned long) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_18(struct net_device *VAR_13)
{
        int VAR_14;
        int VAR_15;
        unsigned long VAR_16;
        unsigned long VAR_17;
        struct claw_privbk *VAR_18;
        FUNC_1(VAR_12, VAR_10);
        struct ccwbk* VAR_19;
        struct ccwbk* VAR_20;

 if (!VAR_13)
                return 0;
 VAR_18 = (struct claw_privbk *)VAR_13->ml_priv;
        if (!VAR_18)
                return 0;
 FUNC_0(4, VAR_11, "release");
        VAR_18->release_pend=1;
        FUNC_6(VAR_8,VAR_13);
        for ( VAR_15 = 1; VAR_15 >=0 ; VAR_15--) {
                FUNC_16(
   FUNC_10(VAR_18->channel[VAR_15].cdev), VAR_16);

   VAR_18->channel[VAR_15].claw_state = VAR_1;
                VAR_18->channel[VAR_15].IO_active = 0;
                VAR_17 = (unsigned long) &VAR_18->channel[VAR_15];
  if (VAR_15 == VAR_9)
   FUNC_5(
    &VAR_18->channel[VAR_9].collect_queue);
                VAR_14 = FUNC_4 (VAR_18->channel[VAR_15].cdev, VAR_17);
         if (VAR_18->system_validate_comp==0x00)
                   FUNC_11(&VAR_18->channel[VAR_15].wait);
                FUNC_2(&VAR_18->channel[VAR_15].wait, &VAR_12);
                FUNC_15(VAR_6);
         FUNC_17(
   FUNC_10(VAR_18->channel[VAR_15].cdev), VAR_16);
         FUNC_14();
  FUNC_15(VAR_7);
         FUNC_13(&VAR_18->channel[VAR_15].wait, &VAR_12);
         if (VAR_14 != 0) {
                        FUNC_3(VAR_18->channel[VAR_15].cdev, VAR_14);
                }
        }
 if (VAR_18->pk_skb != ((void*)0)) {
  FUNC_7(VAR_18->pk_skb);
  VAR_18->pk_skb = ((void*)0);
 }
 if(VAR_18->buffs_alloc != 1) {
  FUNC_0(4, VAR_11, "none2fre");
  return 0;
 }
 FUNC_0(4, VAR_11, "freebufs");
 if (VAR_18->p_buff_ccw != ((void*)0)) {
         FUNC_9((unsigned long)VAR_18->p_buff_ccw,
          (int)FUNC_12(VAR_18->p_buff_ccw_num));
 }
 FUNC_0(4, VAR_11, "freeread");
        if (VAR_18->p_env->read_size < VAR_4) {
     if (VAR_18->p_buff_read != ((void*)0)) {
                FUNC_9((unsigned long)VAR_18->p_buff_read,
        (int)FUNC_12(VAR_18->p_buff_read_num));
  }
        }
        else {
                VAR_20=VAR_18->p_read_active_first;
                while (VAR_20!=((void*)0)) {
                        FUNC_9((unsigned long)VAR_20->p_buffer,
        (int)FUNC_12(
         VAR_18->p_buff_pages_perread ));
                        VAR_20=VAR_20->next;
                }
        }
  FUNC_0(4, VAR_11, "freewrit");
        if (VAR_18->p_env->write_size < VAR_4 ) {
                FUNC_9((unsigned long)VAR_18->p_buff_write,
        (int)FUNC_12(VAR_18->p_buff_write_num));
        }
        else {
                VAR_20=VAR_18->p_write_active_first;
                while (VAR_20!=((void*)0)) {
                        FUNC_9((unsigned long)VAR_20->p_buffer,
         (int)FUNC_12(
         VAR_18->p_buff_pages_perwrite ));
                        VAR_20=VAR_20->next;
                }
        }
  FUNC_0(4, VAR_11, "clearptr");
 VAR_18->buffs_alloc = 0;
        VAR_18->p_buff_ccw=((void*)0);
        VAR_18->p_buff_read=((void*)0);
        VAR_18->p_buff_write=((void*)0);
        VAR_18->system_validate_comp=0;
        VAR_18->release_pend=0;

        VAR_19=VAR_18->p_read_active_first;
        while (VAR_19!=((void*)0)) {
                VAR_19->header.length=0xffff;
                VAR_19->header.opcode=0xff;
                VAR_19->header.flag=0x00;
                VAR_19=VAR_19->next;
        }

        while (VAR_18->p_write_active_first!=((void*)0)) {
                VAR_19=VAR_18->p_write_active_first;
                VAR_19->header.flag=VAR_0;
                VAR_18->p_write_active_first=VAR_19->next;
                VAR_19->next=VAR_18->p_write_free_chain;
                VAR_18->p_write_free_chain=VAR_19;
                ++VAR_18->write_free_count;
        }
        VAR_18->p_write_active_last=((void*)0);
        VAR_18->mtc_logical_link = -1;
        VAR_18->mtc_skipping = 1;
        VAR_18->mtc_offset=0;

        if (((VAR_18->channel[VAR_5].last_dstat |
  VAR_18->channel[VAR_9].last_dstat) &
  ~(VAR_2 | VAR_3)) != 0x00) {
  FUNC_8(&VAR_18->channel[VAR_5].cdev->dev,
   "Deactivating %s completed with incorrect"
   " subchannel status "
   "(read %02x, write %02x)\n",
                VAR_13->name,
  VAR_18->channel[VAR_5].last_dstat,
  VAR_18->channel[VAR_9].last_dstat);
   FUNC_0(2, VAR_11, "badclose");
        }
 FUNC_0(4, VAR_11, "rlsexit");
        return 0;
}
