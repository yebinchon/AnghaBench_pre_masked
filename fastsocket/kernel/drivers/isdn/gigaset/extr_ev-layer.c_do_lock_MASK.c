
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pending_commands; } ;
struct cardstate {int mstate; int channels; int mode; TYPE_2__* bcs; TYPE_3__ at_state; int temp_at_states; int cur_at_seq; } ;
struct TYPE_4__ {int pending_commands; } ;
struct TYPE_5__ {TYPE_1__ at_state; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_2)
{
 int VAR_3;
 int VAR_4;

 switch (VAR_2->mstate) {
 case 128:
 case 129:
  if (VAR_2->cur_at_seq || !FUNC_1(&VAR_2->temp_at_states) ||
      VAR_2->at_state.pending_commands)
   return -VAR_0;

  for (VAR_4 = 0; VAR_4 < VAR_2->channels; ++VAR_4)
   if (VAR_2->bcs[VAR_4].at_state.pending_commands)
    return -VAR_0;

  if (!FUNC_0(VAR_2))
   return -VAR_0;

  break;
 case 130:

  break;
 default:
  return -VAR_0;
 }

 VAR_3 = VAR_2->mode;
 VAR_2->mstate = 130;
 VAR_2->mode = VAR_1;

 return VAR_3;
}
