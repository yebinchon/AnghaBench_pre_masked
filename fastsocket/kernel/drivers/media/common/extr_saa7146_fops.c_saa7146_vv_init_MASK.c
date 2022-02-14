
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cpu_addr; int dma_handle; } ;
struct saa7146_vv {TYPE_1__ d_clipping; } ;
struct saa7146_ext_vv {int capabilities; int * core_ops; int ops; } ;
struct saa7146_dev {int * vv_callback; struct saa7146_vv* vv_data; struct saa7146_ext_vv* ext_vv_data; TYPE_4__* pci; int v4l2_dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int (* init ) (struct saa7146_dev*,struct saa7146_vv*) ;} ;
struct TYPE_6__ {int (* init ) (struct saa7146_dev*,struct saa7146_vv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct saa7146_vv*) ;
 struct saa7146_vv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int * FUNC_5 (TYPE_4__*,int ,int *) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_6 (struct saa7146_dev*,int ,int) ;
 int FUNC_7 (struct saa7146_dev*,struct saa7146_vv*) ;
 int FUNC_8 (struct saa7146_dev*,struct saa7146_vv*) ;
 int FUNC_9 (int *,int *) ;
 int VAR_11 ;

int FUNC_10(struct saa7146_dev* VAR_12, struct saa7146_ext_vv *VAR_13)
{
 struct saa7146_vv *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_9(&VAR_12->pci->dev, &VAR_12->v4l2_dev);
 if (VAR_15)
  return VAR_15;

 VAR_14 = FUNC_3(sizeof(struct saa7146_vv), VAR_2);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(("out of memory. aborting.\n"));
  return -VAR_1;
 }
 VAR_13->ops = VAR_9;
 VAR_13->core_ops = &VAR_9;

 FUNC_0(("dev:%p\n",VAR_12));


 FUNC_6(VAR_12, VAR_0, 0x80400040);


 FUNC_6(VAR_12, VAR_5, (VAR_3 | VAR_4));




 VAR_12->ext_vv_data = VAR_13;

 VAR_14->d_clipping.cpu_addr = FUNC_5(VAR_12->pci, VAR_6, &VAR_14->d_clipping.dma_handle);
 if( ((void*)0) == VAR_14->d_clipping.cpu_addr ) {
  FUNC_1(("out of memory. aborting.\n"));
  FUNC_2(VAR_14);
  return -1;
 }
 FUNC_4(VAR_14->d_clipping.cpu_addr, 0x0, VAR_6);

 VAR_10.init(VAR_12,VAR_14);
 if (VAR_12->ext_vv_data->capabilities & VAR_7)
  VAR_8.init(VAR_12,VAR_14);

 VAR_12->vv_data = VAR_14;
 VAR_12->vv_callback = &VAR_11;

 return 0;
}
