
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ackid; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct ldc_packet {int ctrl; TYPE_2__ u; scalar_t__ seqid; int type; int stype; } ;
struct ldc_channel {scalar_t__ snd_nxt; int rcv_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,unsigned long*) ;
 int FUNC_1 (int ,char*,int ,int,scalar_t__,int ) ;
 int FUNC_2 (struct ldc_packet*,int ,int) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_4, struct ldc_packet *VAR_5)
{
 struct ldc_packet *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4, &VAR_7);
 if (!VAR_6)
  return -VAR_0;
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = VAR_5->type;
 VAR_6->stype = VAR_3;
 VAR_6->ctrl = VAR_5->ctrl & VAR_2;
 VAR_6->seqid = VAR_4->snd_nxt + 1;
 VAR_6->u.r.ackid = VAR_4->rcv_nxt;

 FUNC_1(VAR_1, "SEND DATA NACK type[0x%x] ctl[0x%x] seq[0x%x] ack[0x%x]\n",
        VAR_6->type, VAR_6->ctrl, VAR_6->seqid, VAR_6->u.r.ackid);

 VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7);
 if (!VAR_8)
  VAR_4->snd_nxt++;

 return VAR_8;
}
