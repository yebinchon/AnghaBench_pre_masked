
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ driver; scalar_t__ arg; } ;
struct call_struc {TYPE_3__* prev; struct call_struc* next; TYPE_2__ ics; int info; int divert_id; int timer; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_9__ {scalar_t__ driver; scalar_t__ arg; int command; TYPE_1__ parm; } ;
typedef TYPE_4__ isdn_ctrl ;
struct TYPE_8__ {struct call_struc* next; } ;





 int FUNC_0 (int *) ;
 struct call_struc* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct call_struc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_6(isdn_ctrl *VAR_2)
{ struct call_struc *VAR_3, *VAR_4;
  unsigned long VAR_5;
  int VAR_6;

  VAR_6 = -1;
  VAR_3 = VAR_0;
     while (VAR_3)
      { if ((VAR_2->driver == VAR_3->ics.driver) && (VAR_2->arg == VAR_3->ics.arg))
         { switch (VAR_2->command)
     { case 129:
                FUNC_5(VAR_3->info,"129 0x%lx\n",VAR_3->divert_id);
                FUNC_0(&VAR_3->timer);
                VAR_3->ics.driver = -1;
                break;

       case 130:
                FUNC_5(VAR_3->info,"130 0x%lx %s\n",VAR_3->divert_id,VAR_2->parm.num);
                break;

       case 128:
                FUNC_5(VAR_3->info,"131 0x%lx\n",VAR_3->divert_id);
                FUNC_0(&VAR_3->timer);
                VAR_3->ics.driver = -1;
                break;

       default:
                FUNC_5(VAR_3->info,"999 0x%lx 0x%x\n",VAR_3->divert_id,(int)(VAR_2->command));
                break;
            }
          FUNC_2(VAR_3->info);
          VAR_6 = 0;
         }
        VAR_4 = VAR_3;
        VAR_3 = VAR_3->next;
        if (VAR_4->ics.driver == -1)
          {
            FUNC_3(&VAR_1, VAR_5);
            if (VAR_4->prev)
              VAR_4->prev->next = VAR_4->next;
            else
              VAR_0 = VAR_4->next;
            if (VAR_4->next)
              VAR_4->next->prev = VAR_4->prev;
            FUNC_4(&VAR_1, VAR_5);
            FUNC_1(VAR_4);
          }
      }
  return(VAR_6);
}
