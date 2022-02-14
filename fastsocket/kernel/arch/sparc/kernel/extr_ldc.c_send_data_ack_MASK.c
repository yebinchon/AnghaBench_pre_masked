
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ackid; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct ldc_packet {TYPE_2__ u; scalar_t__ seqid; scalar_t__ ctrl; int stype; int type; } ;
struct ldc_channel {scalar_t__ snd_nxt; int rcv_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,unsigned long*) ;
 scalar_t__ FUNC_1 (struct ldc_packet*) ;
 int FUNC_2 (struct ldc_packet*,int ,int) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ldc_channel *VAR_2)
{
 unsigned long VAR_3;
 struct ldc_packet *VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (FUNC_1(VAR_4)) {
  int VAR_5;

  FUNC_2(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->type = VAR_1;
  VAR_4->stype = VAR_0;
  VAR_4->ctrl = 0;
  VAR_4->seqid = VAR_2->snd_nxt + 1;
  VAR_4->u.r.ackid = VAR_2->rcv_nxt;

  VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_3);
  if (!VAR_5)
   VAR_2->snd_nxt++;
 }
}
