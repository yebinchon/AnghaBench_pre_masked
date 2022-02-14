
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hbq_init {int seqlenoff; int maxlen; int seqlenbcnt; } ;
struct TYPE_3__ {int seqlenoff; int maxlen; int seqlenbcnt; } ;
struct TYPE_4__ {TYPE_1__ profile2; } ;
struct config_hbq_var {TYPE_2__ profiles; } ;



__attribute__((used)) static void
FUNC_0(struct config_hbq_var *VAR_0,
   struct lpfc_hbq_init *VAR_1)
{
 VAR_0->profiles.profile2.seqlenbcnt = VAR_1->seqlenbcnt;
 VAR_0->profiles.profile2.maxlen = VAR_1->maxlen;
 VAR_0->profiles.profile2.seqlenoff = VAR_1->seqlenoff;
}
