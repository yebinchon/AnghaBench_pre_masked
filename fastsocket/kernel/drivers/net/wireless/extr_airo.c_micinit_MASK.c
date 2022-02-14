
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int enabled; } ;
struct airo_info {int tfm; TYPE_2__* mod; TYPE_1__ micstats; int sem; int jobs; } ;
typedef int mic_rid ;
struct TYPE_10__ {scalar_t__ valid; } ;
struct TYPE_9__ {int unicast; scalar_t__ unicastValid; int multicast; scalar_t__ multicastValid; int state; } ;
struct TYPE_8__ {TYPE_4__ uCtx; TYPE_4__ mCtx; } ;
typedef TYPE_3__ MICRid ;


 int VAR_0 ;
 int FUNC_0 (struct airo_info*,int ,TYPE_3__*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int ,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct airo_info *VAR_2)
{
 MICRid VAR_3;

 FUNC_2(VAR_0, &VAR_2->jobs);
 FUNC_0(VAR_2, VAR_1, &VAR_3, sizeof(VAR_3), 0);
 FUNC_4(&VAR_2->sem);

 VAR_2->micstats.enabled = (FUNC_3(VAR_3.state) & 0x00FF) ? 1 : 0;
 if (!VAR_2->micstats.enabled) {



  VAR_2->mod[0].uCtx.valid = 0;
  VAR_2->mod[0].mCtx.valid = 0;
  return;
 }

 if (VAR_3.multicastValid) {
  FUNC_1(&VAR_2->mod[0].mCtx, &VAR_2->mod[1].mCtx,
                  VAR_3.multicast, sizeof(VAR_3.multicast),
                  VAR_2->tfm);
 }

 if (VAR_3.unicastValid) {
  FUNC_1(&VAR_2->mod[0].uCtx, &VAR_2->mod[1].uCtx,
    VAR_3.unicast, sizeof(VAR_3.unicast),
    VAR_2->tfm);
 }
}
