
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int r_data; int ackid; } ;
struct TYPE_5__ {TYPE_1__ r; int u_data; } ;
struct ldc_packet {int type; int stype; int env; scalar_t__ seqid; TYPE_2__ u; int ctrl; } ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long rx_head; unsigned long rx_tail; scalar_t__ chan_state; TYPE_3__ cfg; scalar_t__ rcv_nxt; struct ldc_packet* rx_base; int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_2 (struct ldc_channel*) ;
 int FUNC_3 (int ,char*,int,int,int ,int,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (struct ldc_channel*,struct ldc_packet*) ;
 unsigned long FUNC_6 (struct ldc_channel*,unsigned long) ;
 int FUNC_7 (struct ldc_channel*,struct ldc_packet*,struct ldc_packet*) ;
 int FUNC_8 (struct ldc_channel*,unsigned long) ;
 int FUNC_9 (struct ldc_channel*,scalar_t__) ;
 int FUNC_10 (struct ldc_channel*,unsigned long) ;
 int FUNC_11 (struct ldc_channel*) ;
 unsigned long FUNC_12 (int ,unsigned long*,unsigned long*,scalar_t__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct ldc_channel *VAR_15, void *VAR_16, unsigned int VAR_17)
{
 struct ldc_packet *VAR_18;
 unsigned long VAR_19, VAR_20;
 int VAR_21, VAR_22;

 VAR_19 = FUNC_12(VAR_15->id,
     &VAR_15->rx_head,
     &VAR_15->rx_tail,
     &VAR_15->chan_state);
 if (VAR_19)
  return FUNC_2(VAR_15);

 if (VAR_15->chan_state == VAR_3 ||
     VAR_15->chan_state == VAR_4)
  return -VAR_0;

 if (VAR_15->rx_head == VAR_15->rx_tail)
  return 0;

 VAR_18 = ((void*)0);
 VAR_22 = VAR_21 = 0;
 VAR_20 = VAR_15->rx_head;
 while (1) {
  struct ldc_packet *VAR_23;
  int VAR_24;

  FUNC_0(VAR_20 == VAR_15->rx_tail);
  VAR_23 = VAR_15->rx_base + (VAR_20 / VAR_11);

  FUNC_3(VAR_14, "RX read pkt[%02x:%02x:%02x:%02x:%08x:%08x] "
         "rcv_nxt[%08x]\n",
         VAR_23->type,
         VAR_23->stype,
         VAR_23->ctrl,
         VAR_23->env,
         VAR_23->seqid,
         VAR_23->u.r.ackid,
         VAR_15->rcv_nxt);

  if (FUNC_13(!FUNC_9(VAR_15, VAR_23->seqid))) {
   VAR_21 = FUNC_7(VAR_15, VAR_23, VAR_18);
   VAR_22 = 0;
   break;
  }

  if (VAR_23->type & VAR_5) {
   VAR_21 = FUNC_5(VAR_15, VAR_23);
   if (VAR_21 < 0)
    break;
   VAR_21 = 0;
  }

  VAR_15->rcv_nxt = VAR_23->seqid;

  if (!(VAR_23->type & VAR_6)) {
   VAR_20 = FUNC_6(VAR_15, VAR_20);
   goto no_data;
  }
  if (VAR_23->stype & (VAR_2 | VAR_10)) {
   VAR_21 = FUNC_1(VAR_15, VAR_23);
   if (VAR_21)
    break;
  }
  if (!(VAR_23->stype & VAR_7)) {
   VAR_20 = FUNC_6(VAR_15, VAR_20);
   VAR_21 = FUNC_10(VAR_15, VAR_20);
   if (VAR_21)
    break;
   goto no_data;
  }

  VAR_24 = VAR_23->env & VAR_8;
  if ((VAR_18 == ((void*)0) && !(VAR_23->env & VAR_12)) ||
      (VAR_18 != ((void*)0) && (VAR_23->env & VAR_12))) {
   if (!VAR_18)
    VAR_20 = FUNC_6(VAR_15, VAR_20);

   VAR_21 = FUNC_10(VAR_15, VAR_20);
   if (VAR_21)
    break;

   if (!VAR_18)
    goto no_data;
  }
  if (!VAR_18)
   VAR_18 = VAR_23;

  if (VAR_24 > VAR_17 - VAR_22) {
   VAR_21 = -VAR_1;
   break;
  }


  VAR_20 = FUNC_6(VAR_15, VAR_20);

  FUNC_4(VAR_16,
         (VAR_15->cfg.mode == VAR_9 ?
   VAR_23->u.u_data : VAR_23->u.r.r_data), VAR_24);
  VAR_16 += VAR_24;
  VAR_22 += VAR_24;

  if (VAR_23->env & VAR_13)
   break;

no_data:
  if (VAR_20 == VAR_15->rx_tail) {
   VAR_21 = FUNC_8(VAR_15, VAR_20);
   if (VAR_21)
    break;
  }
 }

 if (!VAR_21)
  VAR_21 = FUNC_10(VAR_15, VAR_20);

 if (VAR_21 && VAR_18)
  VAR_15->rcv_nxt = VAR_18->seqid - 1;

 if (!VAR_21) {
  VAR_21 = VAR_22;
  if (VAR_21 > 0 && VAR_15->cfg.mode != VAR_9)
   FUNC_11(VAR_15);
 }

 return VAR_21;
}
