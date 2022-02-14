
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_packet {scalar_t__ stype; scalar_t__ env; int seqid; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {int hs_state; int snd_nxt; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ldc_channel*) ;
 int FUNC_1 (struct ldc_channel*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (struct ldc_channel*) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_5,
         struct ldc_packet *VAR_6)
{
 FUNC_2(VAR_0, "GOT RTR stype[%x] seqid[%x] env[%x]\n",
        VAR_6->stype, VAR_6->seqid, VAR_6->env);

 if (VAR_6->stype != VAR_3 ||
     VAR_6->env != VAR_5->cfg.mode)
  return FUNC_0(VAR_5);

 VAR_5->snd_nxt = VAR_6->seqid;
 VAR_5->hs_state = VAR_2;
 FUNC_1(VAR_5, VAR_4);
 FUNC_3(VAR_5);

 return VAR_1;
}
