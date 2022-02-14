
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cardstate {scalar_t__ retry_count; int channels; TYPE_2__* bcs; int dev; } ;
struct TYPE_3__ {scalar_t__ cid; int pending_commands; } ;
struct TYPE_4__ {TYPE_1__ at_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*,int ) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_2, int VAR_3)
{
 int VAR_4;

 if (--VAR_2->retry_count <= 0)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->channels; ++VAR_4)
  if (VAR_2->bcs[VAR_4].at_state.cid > 0)
   return 0;

 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev,
      "Could not enter cid mode. Reinit device and try again.\n");
 else {
  FUNC_0(VAR_2->dev,
      "Could not get a call id. Reinit device and try again.\n");
  VAR_2->bcs[VAR_3].at_state.pending_commands |= VAR_1;
 }
 FUNC_1(VAR_2, VAR_0);
 return 1;
}
