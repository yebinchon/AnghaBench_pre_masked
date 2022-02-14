
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_packet {scalar_t__ stype; scalar_t__ env; int seqid; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {scalar_t__ hs_state; int rcv_nxt; int snd_nxt; TYPE_1__ cfg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ldc_channel*) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ldc_channel*) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_4,
         struct ldc_packet *VAR_5)
{
 FUNC_1(VAR_0, "GOT RTS stype[%x] seqid[%x] env[%x]\n",
        VAR_5->stype, VAR_5->seqid, VAR_5->env);

 if (VAR_5->stype != VAR_3 ||
     VAR_4->hs_state != VAR_1 ||
     VAR_5->env != VAR_4->cfg.mode)
  return FUNC_0(VAR_4);

 VAR_4->snd_nxt = VAR_5->seqid;
 VAR_4->rcv_nxt = VAR_5->seqid;
 VAR_4->hs_state = VAR_2;
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 return 0;
}
