
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo_chan {size_t chid; int size; int user; int pushgpu; TYPE_3__* pushdma; } ;
struct nouveau_fifo {size_t min; size_t max; int lock; scalar_t__* channel; } ;
struct nouveau_dmaeng {int (* bind ) (struct nouveau_dmaeng*,struct nouveau_object*,TYPE_3__*,int *) ;} ;
struct nouveau_device {int pdev; } ;
struct TYPE_5__ {TYPE_1__* oclass; scalar_t__ engine; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct nouveau_object*,int) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,int ,int,void**) ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_fifo*,char*) ;
 scalar_t__ FUNC_5 (struct nouveau_fifo_chan*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct nouveau_dmaeng*,struct nouveau_object*,TYPE_3__*,int *) ;

int
FUNC_10(struct nouveau_object *VAR_4,
        struct nouveau_object *VAR_5,
        struct nouveau_oclass *VAR_6,
        int VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10,
        u64 VAR_11, int VAR_12, void **VAR_13)
{
 struct nouveau_device *VAR_14 = FUNC_3(VAR_5);
 struct nouveau_fifo *VAR_15 = (void *)VAR_5;
 struct nouveau_fifo_chan *VAR_16;
 struct nouveau_dmaeng *VAR_17;
 unsigned long VAR_18;
 int VAR_19;


 VAR_19 = FUNC_2(VAR_4, VAR_5, VAR_6, 0, ((void*)0),
         VAR_11, VAR_12, VAR_13);
 VAR_16 = *VAR_13;
 if (VAR_19)
  return VAR_19;


 VAR_16->pushdma = (void *)FUNC_1(VAR_4, VAR_10);
 if (!VAR_16->pushdma)
  return -VAR_2;

 VAR_17 = (void *)VAR_16->pushdma->base.engine;
 switch (VAR_16->pushdma->base.oclass->handle) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_1;
 }

 VAR_19 = VAR_17->bind(VAR_17, VAR_4, VAR_16->pushdma, &VAR_16->pushgpu);
 if (VAR_19)
  return VAR_19;


 FUNC_7(&VAR_15->lock, VAR_18);
 for (VAR_16->chid = VAR_15->min; VAR_16->chid < VAR_15->max; VAR_16->chid++) {
  if (!VAR_15->channel[VAR_16->chid]) {
   VAR_15->channel[VAR_16->chid] = FUNC_5(VAR_16);
   break;
  }
 }
 FUNC_8(&VAR_15->lock, VAR_18);

 if (VAR_16->chid == VAR_15->max) {
  FUNC_4(VAR_15, "no free channels\n");
  return -VAR_3;
 }


 VAR_16->user = FUNC_0(FUNC_6(VAR_14->pdev, VAR_7) + VAR_8 +
        (VAR_16->chid * VAR_9), VAR_9);
 if (!VAR_16->user)
  return -VAR_0;

 VAR_16->size = VAR_9;
 return 0;
}
