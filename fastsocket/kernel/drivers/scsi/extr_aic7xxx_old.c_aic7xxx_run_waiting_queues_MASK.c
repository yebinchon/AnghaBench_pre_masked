
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aic_dev_data {int temp_q_depth; int active_cmds; int delayed_scbs; } ;
struct aic7xxx_scb {TYPE_3__* hscb; int tag_action; int flags; TYPE_2__* cmd; } ;
struct TYPE_8__ {int * head; } ;
struct aic7xxx_host {scalar_t__ activescbs; int features; scalar_t__ max_activescbs; int qinfifonext; int * qinfifo; TYPE_4__ waiting_scbs; } ;
struct TYPE_7__ {int tag; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {struct aic_dev_data* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aic7xxx_host*,struct aic7xxx_scb*) ;
 int FUNC_1 (struct aic7xxx_host*,int ,int ) ;
 int FUNC_2 (struct aic7xxx_host*) ;
 int FUNC_3 (int *,struct aic7xxx_scb*) ;
 struct aic7xxx_scb* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct aic7xxx_host*,int ) ;

__attribute__((used)) static void
FUNC_6(struct aic7xxx_host *VAR_5)
{
  struct aic7xxx_scb *VAR_6;
  struct aic_dev_data *VAR_7;
  int VAR_8;


  if (VAR_5->waiting_scbs.head == ((void*)0))
    return;

  VAR_8 = 0;




  while ((VAR_6 = FUNC_4(&VAR_5->waiting_scbs)) != ((void*)0))
  {
    VAR_7 = VAR_6->cmd->device->hostdata;
    if ( !VAR_6->tag_action )
    {
      VAR_7->temp_q_depth = 1;
    }
    if ( VAR_7->active_cmds >= VAR_7->temp_q_depth)
    {
      FUNC_3(&VAR_7->delayed_scbs, VAR_6);
    }
    else
    {
        VAR_6->flags &= ~VAR_4;
        VAR_7->active_cmds++;
        VAR_5->activescbs++;
        if ( !(VAR_6->tag_action) )
        {
          FUNC_0(VAR_5, VAR_6);
        }
        VAR_5->qinfifo[VAR_5->qinfifonext++] = VAR_6->hscb->tag;
        VAR_8++;
    }
  }
  if (VAR_8)
  {
    if (VAR_5->features & VAR_0)
      FUNC_1(VAR_5, VAR_5->qinfifonext, VAR_2);
    else
    {
      FUNC_2(VAR_5);
      FUNC_1(VAR_5, VAR_5->qinfifonext, VAR_3);
      FUNC_5(VAR_5, VAR_1);
    }
    if (VAR_5->activescbs > VAR_5->max_activescbs)
      VAR_5->max_activescbs = VAR_5->activescbs;
  }
}
