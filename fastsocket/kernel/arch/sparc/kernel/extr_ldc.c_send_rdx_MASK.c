
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ackid; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct ldc_packet {TYPE_2__ u; scalar_t__ seqid; scalar_t__ env; } ;
struct ldc_channel {int rcv_nxt; scalar_t__ snd_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,int ,int ,int *,int ,unsigned long*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_4)
{
 struct ldc_packet *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3, ((void*)0), 0,
       &VAR_6);
 if (VAR_5) {
  VAR_5->env = 0;
  VAR_5->seqid = ++VAR_4->snd_nxt;
  VAR_5->u.r.ackid = VAR_4->rcv_nxt;

  FUNC_1(VAR_1, "SEND RDX env[0x%x] seqid[0x%x] ackid[0x%x]\n",
         VAR_5->env, VAR_5->seqid, VAR_5->u.r.ackid);

  return FUNC_2(VAR_4, VAR_5, VAR_6);
 }
 return -VAR_0;
}
