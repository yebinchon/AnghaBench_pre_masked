
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ acp1; } ;
struct TYPE_11__ {TYPE_1__ function; struct TYPE_11__* next; } ;
typedef TYPE_2__ thinker_t ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ health; } ;
typedef TYPE_3__ mobj_t ;
struct TYPE_13__ {int tag; } ;
typedef TYPE_4__ line_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_14__ {scalar_t__ health; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 TYPE_6__* VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;

void FUNC_3 (mobj_t* VAR_17)
{
    thinker_t* VAR_18;
    mobj_t* VAR_19;
    line_t VAR_20;
    int VAR_21;

    if ( VAR_11 == VAR_8)
    {
 if (VAR_10 != 7)
     return;

 if ((VAR_17->type != VAR_4)
     && (VAR_17->type != VAR_1))
     return;
    }
    else
    {
 switch(VAR_9)
 {
   case 1:
     if (VAR_10 != 8)
  return;

     if (VAR_17->type != VAR_2)
  return;
     break;

   case 2:
     if (VAR_10 != 8)
  return;

     if (VAR_17->type != VAR_3)
  return;
     break;

   case 3:
     if (VAR_10 != 8)
  return;

     if (VAR_17->type != VAR_5)
  return;

     break;

   case 4:
     switch(VAR_10)
     {
       case 6:
  if (VAR_17->type != VAR_3)
      return;
  break;

       case 8:
  if (VAR_17->type != VAR_5)
      return;
  break;

       default:
  return;
  break;
     }
     break;

   default:
     if (VAR_10 != 8)
  return;
     break;
 }

    }



    for (VAR_21=0 ; VAR_21<VAR_0 ; VAR_21++)
 if (VAR_13[VAR_21] && VAR_14[VAR_21].health > 0)
     break;

    if (VAR_21==VAR_0)
 return;



    for (VAR_18 = VAR_16.next ; VAR_18 != &VAR_16 ; VAR_18=VAR_18->next)
    {
 if (VAR_18->function.acp1 != (actionf_p1)VAR_6)
     continue;

 VAR_19 = (mobj_t *)VAR_18;
 if (VAR_19 != VAR_17
     && VAR_19->type == VAR_17->type
     && VAR_19->health > 0)
 {

     return;
 }
    }


    if ( VAR_11 == VAR_8)
    {
 if (VAR_10 == 7)
 {
     if (VAR_17->type == VAR_4)
     {
  VAR_20.tag = 666;
  FUNC_1(&VAR_20,VAR_12);
  return;
     }

     if (VAR_17->type == VAR_1)
     {
  VAR_20.tag = 667;
  FUNC_1(&VAR_20,VAR_15);
  return;
     }
 }
    }
    else
    {
 switch(VAR_9)
 {
   case 1:
     VAR_20.tag = 666;
     FUNC_1 (&VAR_20, VAR_12);
     return;
     break;

   case 4:
     switch(VAR_10)
     {
       case 6:
  VAR_20.tag = 666;
  FUNC_0 (&VAR_20, VAR_7);
  return;
  break;

       case 8:
  VAR_20.tag = 666;
  FUNC_1 (&VAR_20, VAR_12);
  return;
  break;
     }
 }
    }

    FUNC_2 ();
}
