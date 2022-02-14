
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int context; } ;
struct ohci_iso_xmit {int task_active; int last_cycle; scalar_t__ CommandPtr; scalar_t__ ContextControlClear; scalar_t__ ContextControlSet; TYPE_3__ task; TYPE_2__* ohci; int prog; } ;
struct iso_xmit_cmd {int dummy; } ;
struct hpsb_iso {int buf_packets; int skips; TYPE_1__* host; struct ohci_iso_xmit* hostdata; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_2__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 struct ohci_iso_xmit* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (struct hpsb_iso*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct hpsb_iso *VAR_8)
{
 struct ohci_iso_xmit *VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_1;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->hostdata = VAR_9;
 VAR_9->ohci = VAR_8->host->hostdata;
 VAR_9->task_active = 0;
 VAR_9->last_cycle = -1;
 FUNC_0(&VAR_8->skips, 0);

 FUNC_2(&VAR_9->prog);

 VAR_10 = sizeof(struct iso_xmit_cmd) * VAR_8->buf_packets;

 if (FUNC_1(&VAR_9->prog, VAR_10, VAR_9->ohci->dev))
  goto err;

 FUNC_4(&VAR_9->task, VAR_6,
      VAR_7, (unsigned long) VAR_8);

 if (FUNC_5(VAR_9->ohci, &VAR_9->task) < 0) {
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_9->task_active = 1;


 VAR_11 = VAR_9->task.context;
 VAR_9->ContextControlSet = VAR_5 + 16 * VAR_11;
 VAR_9->ContextControlClear = VAR_4 + 16 * VAR_11;
 VAR_9->CommandPtr = VAR_3 + 16 * VAR_11;

 return 0;

err:
 FUNC_6(VAR_8);
 return VAR_12;
}
