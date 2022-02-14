
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct talitos_request {int context; TYPE_2__* desc; int (* callback ) (struct device*,TYPE_2__*,int ,int) ;int dma_desc; } ;
struct talitos_private {int fifo_len; TYPE_1__* chan; } ;
struct talitos_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int hdr; } ;
struct TYPE_3__ {int tail; int tail_lock; int submit_count; struct talitos_request* fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct device*,TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct talitos_private *VAR_6 = FUNC_1(VAR_2);
 struct talitos_request *VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 FUNC_5(&VAR_6->chan[VAR_3].tail_lock, VAR_9);

 VAR_10 = VAR_6->chan[VAR_3].tail;
 while (VAR_6->chan[VAR_3].fifo[VAR_10].desc) {
  VAR_7 = &VAR_6->chan[VAR_3].fifo[VAR_10];


  FUNC_3();
  if ((VAR_7->desc->hdr & VAR_0) == VAR_0)
   VAR_11 = 0;
  else
   if (!VAR_4)
    break;
   else
    VAR_11 = VAR_4;

  FUNC_2(VAR_2, VAR_7->dma_desc,
     sizeof(struct talitos_desc),
     VAR_1);


  VAR_8.desc = VAR_7->desc;
  VAR_8.callback = VAR_7->callback;
  VAR_8.context = VAR_7->context;


  FUNC_4();
  VAR_7->desc = ((void*)0);


  VAR_6->chan[VAR_3].tail = (VAR_10 + 1) & (VAR_6->fifo_len - 1);

  FUNC_6(&VAR_6->chan[VAR_3].tail_lock, VAR_9);

  FUNC_0(&VAR_6->chan[VAR_3].submit_count);

  VAR_8.callback(VAR_2, VAR_8.desc, VAR_8.context,
       VAR_11);

  if (VAR_4 && !VAR_5 && VAR_11 == VAR_4)
   return;
  FUNC_5(&VAR_6->chan[VAR_3].tail_lock, VAR_9);
  VAR_10 = VAR_6->chan[VAR_3].tail;
 }

 FUNC_6(&VAR_6->chan[VAR_3].tail_lock, VAR_9);
}
