
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
struct dmabounce_device_info {TYPE_2__ small; int attr_res; scalar_t__ bounce_count; scalar_t__ map_op_count; scalar_t__ total_allocs; int lock; int safe_buffers; struct device* dev; TYPE_2__ large; } ;
struct TYPE_3__ {struct dmabounce_device_info* dmabounce; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,struct device*,char*,unsigned long) ;
 int FUNC_6 (struct dmabounce_device_info*) ;
 struct dmabounce_device_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct device *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 struct dmabounce_device_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(sizeof(struct dmabounce_device_info), VAR_1);
 if (!VAR_6) {
  FUNC_1(VAR_3,
   "Could not allocated dmabounce_device_info\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_5(&VAR_6->small, VAR_3,
      "small_dmabounce_pool", VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_3,
   "dmabounce: could not allocate DMA pool for %ld byte objects\n",
   VAR_4);
  goto err_free;
 }

 if (VAR_5) {
  VAR_7 = FUNC_5(&VAR_6->large, VAR_3,
       "large_dmabounce_pool",
       VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_3,
    "dmabounce: could not allocate DMA pool for %ld byte objects\n",
    VAR_5);
   goto err_destroy;
  }
 }

 VAR_6->dev = VAR_3;
 FUNC_0(&VAR_6->safe_buffers);
 FUNC_8(&VAR_6->lock);
 VAR_3->archdata.dmabounce = VAR_6;

 FUNC_2(VAR_3, "dmabounce: registered device\n");

 return 0;

 err_destroy:
 FUNC_4(VAR_6->small.pool);
 err_free:
 FUNC_6(VAR_6);
 return VAR_7;
}
