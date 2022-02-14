
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aic7xxx_scb {int flags; int tag_action; TYPE_2__* hscb; int cmd; } ;
struct aic7xxx_host {unsigned char qinfifonext; size_t* qinfifo; int features; int activescbs; int volatile waiting_scbs; TYPE_1__* scb_data; } ;
typedef int scb_queue_type ;
struct TYPE_6__ {int active_cmds; int volatile delayed_scbs; } ;
struct TYPE_5__ {size_t tag; int target_channel_lun; } ;
struct TYPE_4__ {struct aic7xxx_scb** scb_array; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_1 (struct aic7xxx_host*,int ,int ) ;
 scalar_t__ FUNC_2 (struct aic7xxx_host*,struct aic7xxx_scb*,int,int,int,unsigned char) ;
 unsigned char FUNC_3 (struct aic7xxx_host*,int ) ;
 int FUNC_4 (struct aic7xxx_host*,unsigned char,int ) ;
 int FUNC_5 (int volatile*,struct aic7xxx_scb*) ;
 int FUNC_6 (int volatile*,struct aic7xxx_scb*) ;

__attribute__((used)) static int
FUNC_7(struct aic7xxx_host *VAR_10, int VAR_11, int VAR_12,
    int VAR_13, unsigned char VAR_14, int VAR_15, int VAR_16,
    volatile scb_queue_type *VAR_17)
{
  int VAR_18;
  unsigned char VAR_19, VAR_20;
  struct aic7xxx_scb *VAR_21;

  VAR_18 = 0;
  VAR_19 = FUNC_3(VAR_10, VAR_4);
  VAR_20 = VAR_10->qinfifonext;

  VAR_10->qinfifonext = VAR_19;

  while (VAR_19 != VAR_20)
  {
    VAR_21 = VAR_10->scb_data->scb_array[VAR_10->qinfifo[VAR_19++]];
    if (FUNC_2(VAR_10, VAR_21, VAR_11, VAR_12, VAR_13, VAR_14))
    {



       if (VAR_16 && (VAR_17 != ((void*)0)))
       {
         if (VAR_21->flags & VAR_7)
         {
           FUNC_6(VAR_17, VAR_21);
           FUNC_6(&VAR_10->waiting_scbs, VAR_21);
           FUNC_6(&FUNC_0(VAR_21->cmd)->delayed_scbs, VAR_21);
           FUNC_0(VAR_21->cmd)->active_cmds++;
           VAR_10->activescbs++;
         }
         FUNC_5(VAR_17, VAR_21);
         FUNC_0(VAR_21->cmd)->active_cmds--;
         VAR_10->activescbs--;
         VAR_21->flags |= VAR_7;
         if ( !(VAR_21->tag_action & VAR_8) )
         {
           FUNC_1(VAR_10, VAR_21->hscb->target_channel_lun,
             VAR_9);
         }
       }
       else if (VAR_16)
       {
         VAR_10->qinfifo[VAR_10->qinfifonext++] = VAR_21->hscb->tag;
       }
       else
       {





         VAR_21->flags = VAR_15 | (VAR_21->flags & VAR_6);
         if (FUNC_1(VAR_10, VAR_21->hscb->target_channel_lun,
                                       VAR_1) == VAR_21->hscb->tag)
         {
           FUNC_1(VAR_10, VAR_21->hscb->target_channel_lun,
             VAR_9);
         }
       }
       VAR_18++;
    }
    else
    {
      VAR_10->qinfifo[VAR_10->qinfifonext++] = VAR_21->hscb->tag;
    }
  }







  VAR_19 = VAR_10->qinfifonext;
  while(VAR_19 != VAR_20)
  {
    VAR_10->qinfifo[VAR_19++] = VAR_5;
  }
  if (VAR_10->features & VAR_0)
    FUNC_4(VAR_10, VAR_10->qinfifonext, VAR_2);
  else
    FUNC_4(VAR_10, VAR_10->qinfifonext, VAR_3);

  return (VAR_18);
}
