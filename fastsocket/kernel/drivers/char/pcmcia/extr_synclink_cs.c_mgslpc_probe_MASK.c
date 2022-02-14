
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_7__ {int * Handler; int IRQInfo1; int Attributes; } ;
struct pcmcia_device {TYPE_2__ conf; TYPE_1__ irq; TYPE_3__* priv; } ;
struct TYPE_10__ {int close_delay; int closing_wait; int * ops; } ;
struct TYPE_9__ {int max_frame_size; int imra_value; int imrb_value; int pim_value; struct pcmcia_device* p_dev; int idle_mode; int params; int netlock; int lock; int event_wait_q; int status_event_wait_q; TYPE_4__ port; int task; int magic; } ;
typedef int MGSL_PARAMS ;
typedef TYPE_3__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int VAR_12 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(struct pcmcia_device *VAR_13)
{
    MGSLPC_INFO *VAR_14;
    int VAR_15;

    if (VAR_10 >= VAR_0)
     FUNC_6("mgslpc_attach\n");

    VAR_14 = FUNC_2(sizeof(MGSLPC_INFO), VAR_2);
    if (!VAR_14) {
     FUNC_6("Error can't allocate device instance data\n");
     return -VAR_1;
    }

    VAR_14->magic = VAR_8;
    FUNC_8(&VAR_14->port);
    VAR_14->port.ops = &VAR_12;
    FUNC_0(&VAR_14->task, VAR_9);
    VAR_14->max_frame_size = 4096;
    VAR_14->port.close_delay = 5*VAR_4/10;
    VAR_14->port.closing_wait = 30*VAR_4;
    FUNC_1(&VAR_14->status_event_wait_q);
    FUNC_1(&VAR_14->event_wait_q);
    FUNC_7(&VAR_14->lock);
    FUNC_7(&VAR_14->netlock);
    FUNC_3(&VAR_14->params,&VAR_11,sizeof(MGSL_PARAMS));
    VAR_14->idle_mode = VAR_3;
    VAR_14->imra_value = 0xffff;
    VAR_14->imrb_value = 0xffff;
    VAR_14->pim_value = 0xff;

    VAR_14->p_dev = VAR_13;
    VAR_13->priv = VAR_14;




    VAR_13->irq.Attributes = VAR_7;
    VAR_13->irq.IRQInfo1 = VAR_6;
    VAR_13->irq.Handler = ((void*)0);

    VAR_13->conf.Attributes = 0;
    VAR_13->conf.IntType = VAR_5;

    VAR_15 = FUNC_5(VAR_13);
    if (VAR_15)
     return VAR_15;

    FUNC_4(VAR_14);

    return 0;
}
