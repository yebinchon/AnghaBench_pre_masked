
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_request {void (* callback ) (struct device*,struct talitos_desc*,void*,int) ;int dma_desc; struct talitos_desc* desc; void* context; } ;
struct talitos_private {int num_channels; int fifo_len; TYPE_1__* chan; scalar_t__ reg; int last_chan; } ;
struct talitos_desc {int hdr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int head; int head_lock; struct talitos_request* fifo; int submit_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct talitos_private* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,struct talitos_desc*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct device *VAR_4, struct talitos_desc *VAR_5,
     void (*VAR_6)(struct device *VAR_7,
        struct talitos_desc *VAR_8,
        void *VAR_9, int VAR_10),
     void *VAR_11)
{
 struct talitos_private *VAR_12 = FUNC_5(VAR_4);
 struct talitos_request *VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16;


 VAR_5->hdr |= VAR_0;


 VAR_15 = FUNC_3(&VAR_12->last_chan) & (VAR_12->num_channels - 1);

 FUNC_10(&VAR_12->chan[VAR_15].head_lock, VAR_14);

 if (!FUNC_2(&VAR_12->chan[VAR_15].submit_count)) {

  FUNC_11(&VAR_12->chan[VAR_15].head_lock, VAR_14);
  return -VAR_2;
 }

 VAR_16 = VAR_12->chan[VAR_15].head;
 VAR_13 = &VAR_12->chan[VAR_15].fifo[VAR_16];


 VAR_13->dma_desc = FUNC_6(VAR_4, VAR_5, sizeof(*VAR_5),
        VAR_1);
 VAR_13->callback = VAR_6;
 VAR_13->context = VAR_11;


 VAR_12->chan[VAR_15].head = (VAR_12->chan[VAR_15].head + 1) & (VAR_12->fifo_len - 1);

 FUNC_9();
 VAR_13->desc = VAR_5;


 FUNC_13();
 FUNC_8(VAR_12->reg + FUNC_0(VAR_15),
   FUNC_4(FUNC_12(VAR_13->dma_desc)));
 FUNC_8(VAR_12->reg + FUNC_1(VAR_15),
   FUNC_4(FUNC_7(VAR_13->dma_desc)));

 FUNC_11(&VAR_12->chan[VAR_15].head_lock, VAR_14);

 return -VAR_3;
}
