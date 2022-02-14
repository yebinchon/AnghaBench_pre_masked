
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nexttic; int type; int ctr; int nanims; scalar_t__ period; scalar_t__ data2; scalar_t__ data1; } ;
typedef TYPE_1__ anim_t ;
struct TYPE_5__ {int epsd; scalar_t__ next; } ;





 scalar_t__ FUNC_0 () ;
 int* VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_1(void)
{
    int VAR_8;
    anim_t* VAR_9;

    if (VAR_5 == VAR_4)
 return;

    if (VAR_7->epsd > 2)
 return;

    for (VAR_8=0;VAR_8<VAR_0[VAR_7->epsd];VAR_8++)
    {
 VAR_9 = &VAR_2[VAR_7->epsd][VAR_8];

 if (VAR_3 == VAR_9->nexttic)
 {
     switch (VAR_9->type)
     {
       case 130:
  if (++VAR_9->ctr >= VAR_9->nanims) VAR_9->ctr = 0;
  VAR_9->nexttic = VAR_3 + VAR_9->period;
  break;

       case 128:
  VAR_9->ctr++;
  if (VAR_9->ctr == VAR_9->nanims)
  {
      VAR_9->ctr = -1;
      VAR_9->nexttic = VAR_3+VAR_9->data2+(FUNC_0()%VAR_9->data1);
  }
  else VAR_9->nexttic = VAR_3 + VAR_9->period;
  break;

       case 129:

  if (!(VAR_6 == VAR_1 && VAR_8 == 7)
      && VAR_7->next == VAR_9->data1)
  {
      VAR_9->ctr++;
      if (VAR_9->ctr == VAR_9->nanims) VAR_9->ctr--;
      VAR_9->nexttic = VAR_3 + VAR_9->period;
  }
  break;
     }
 }

    }

}
