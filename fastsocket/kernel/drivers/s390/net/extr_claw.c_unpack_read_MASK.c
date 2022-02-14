
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int ip_summed; int protocol; struct net_device* dev; } ;
struct net_device {int name; struct claw_privbk* ml_priv; } ;
struct device {int dummy; } ;
struct clawph {int len; scalar_t__ link_num; scalar_t__ flag; } ;
struct clawctl {scalar_t__ command; } ;
struct TYPE_8__ {scalar_t__ rx_bytes; int rx_dropped; int rx_packets; int rx_frame_errors; } ;
struct claw_privbk {int mtc_logical_link; scalar_t__ mtc_offset; scalar_t__ p_mtc_envelope; struct ccwbk* p_read_active_first; TYPE_4__ stats; scalar_t__ mtc_skipping; struct claw_env* p_env; TYPE_2__* channel; } ;
struct claw_env {scalar_t__ packing; int read_size; } ;
struct TYPE_7__ {scalar_t__ flag; int opcode; int length; } ;
struct ccwbk {void* p_buffer; struct ccwbk* next; TYPE_3__ header; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {TYPE_1__* cdev; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int FUNC_2 (struct net_device*,struct ccwbk*,struct ccwbk*) ;
 int FUNC_3 (struct net_device*,struct ccwbk*) ;
 int FUNC_4 (struct net_device*,int ) ;
 struct sk_buff* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,void*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_13(struct net_device *VAR_12 )
{
        struct sk_buff *VAR_13;
        struct claw_privbk *VAR_14;
 struct claw_env *VAR_15;
        struct ccwbk *VAR_16;
        struct ccwbk *VAR_17;
        struct ccwbk *VAR_18;
 struct clawph *VAR_19;
 void *VAR_20;
 struct clawctl *VAR_21=((void*)0);
 struct device *VAR_22;

        __u32 VAR_23;
 __u32 VAR_24;
        __u8 VAR_25;
        __u8 VAR_26=0;
        __u32 VAR_27;
        int VAR_28=0;
 int VAR_29=0;

 FUNC_0(4, VAR_11, "unpkread");
        VAR_17=((void*)0);
        VAR_18=((void*)0);
 VAR_19=((void*)0);
 VAR_20=((void*)0);
 VAR_14 = VAR_12->ml_priv;

 VAR_22 = &VAR_14->channel[VAR_10].cdev->dev;
 VAR_15 = VAR_14->p_env;
        VAR_16=VAR_14->p_read_active_first;
 while (VAR_16!=((void*)0) && VAR_16->header.flag!=VAR_1) {
  VAR_24 = 0;
  VAR_29 = 0;
  VAR_16->header.flag=VAR_1;
  VAR_14->p_read_active_first=VAR_16->next;
                VAR_16->next=((void*)0);
  VAR_19 = (struct clawph *)VAR_16->p_buffer;
  if ((VAR_15->packing == VAR_9) &&
      (VAR_19->len == 32) &&
      (VAR_19->link_num == 0)) {
   VAR_19++;
   VAR_21 = (struct clawctl *)VAR_19;
   VAR_19--;
   if ((VAR_21->command == VAR_3) ||
              (VAR_21->command == VAR_2))
    VAR_15->packing = VAR_4;
  }
  if (VAR_15->packing == VAR_4)
   VAR_25=VAR_19->link_num;
  else
                 VAR_25=VAR_16->header.opcode / 8;
                if ((VAR_16->header.opcode & VAR_8)!=0) {
                        VAR_26=1;
                        if (VAR_16->header.length!=
    VAR_14->p_env->read_size ) {
    FUNC_7(VAR_22,
     "The communication peer of %s"
     " sent a faulty"
     " frame of length %02x\n",
                                        VAR_12->name, VAR_16->header.length);
                        }
                }

                if (VAR_14->mtc_skipping) {
                        if (VAR_26==0) {
                                VAR_14->mtc_skipping=0;
                                VAR_14->mtc_logical_link=-1;
                        }
                        goto NextFrame;
                }

                if (VAR_25==0) {
                        FUNC_3(VAR_12, VAR_16);
   FUNC_0(4, VAR_11, "UnpkCntl");
                        goto NextFrame;
                }
unpack_next:
  if (VAR_15->packing == VAR_4) {
   if (VAR_24 > VAR_15->read_size)
    goto NextFrame;
   VAR_20 = VAR_16->p_buffer+VAR_24;
   VAR_19 = (struct clawph *) VAR_20;
   if ((VAR_19->len == 0) ||
       (VAR_19->flag != 0))
    goto NextFrame;
   VAR_27 = VAR_19->len;
   VAR_24 += VAR_27+sizeof(struct clawph);
   VAR_29++;
  } else {
                 VAR_27=VAR_16->header.length;
  }
                if (VAR_14->mtc_logical_link<0) {







                VAR_14->mtc_offset=0;
                        VAR_14->mtc_logical_link=VAR_25;
                }

                if (VAR_27 > (VAR_7- VAR_14->mtc_offset) ) {

                        VAR_14->stats.rx_frame_errors++;
                        goto NextFrame;
                }
  if (VAR_15->packing == VAR_4) {
   FUNC_9( VAR_14->p_mtc_envelope+ VAR_14->mtc_offset,
    VAR_20+sizeof(struct clawph), VAR_27);

  } else {
                 FUNC_9( VAR_14->p_mtc_envelope+ VAR_14->mtc_offset,
                         VAR_16->p_buffer, VAR_27);
  }
                if (VAR_26==0) {
                        VAR_23=VAR_14->mtc_offset+VAR_27;
                        VAR_13=FUNC_5(VAR_23);
                        if (VAR_13) {
                                FUNC_9(FUNC_11(VAR_13,VAR_23),
     VAR_14->p_mtc_envelope,
     VAR_23);
                                VAR_13->dev=VAR_12;
    FUNC_12(VAR_13);
                                VAR_13->protocol=FUNC_8(VAR_5);
                                VAR_13->ip_summed=VAR_0;
                                VAR_14->stats.rx_packets++;
    VAR_14->stats.rx_bytes+=VAR_23;
                                FUNC_10(VAR_13);
                        }
                        else {
    FUNC_6(VAR_22, "Allocating a buffer for"
     " incoming data failed\n");
                                VAR_14->stats.rx_dropped++;
                        }
                        VAR_14->mtc_offset=0;
                        VAR_14->mtc_logical_link=-1;
                }
                else {
                        VAR_14->mtc_offset+=VAR_27;
                }
  if (VAR_15->packing == VAR_4)
   goto unpack_next;
NextFrame:




                VAR_28++;
                VAR_16->header.length=0xffff;
                VAR_16->header.opcode=0xff;



                if (VAR_17==((void*)0)) {
                        VAR_17 = VAR_16;
                }
                else {
                        VAR_18->next = VAR_16;
                }
                VAR_18 = VAR_16;



                VAR_16 = VAR_14->p_read_active_first;
  FUNC_1(4, VAR_11, "rxpkt %d", VAR_29);
        }



 FUNC_1(4, VAR_11, "rxfrm %d", VAR_28);
        FUNC_2(VAR_12, VAR_17, VAR_18);
        FUNC_4(VAR_12, VAR_6);
        return;
}
