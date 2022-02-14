
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_handle; int cpu_addr; } ;
struct saa7146_vv {TYPE_1__ d_clipping; } ;
struct saa7146_dev {int * vv_callback; struct saa7146_vv* vv_data; int pci; int v4l2_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_vv*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct saa7146_dev* VAR_1)
{
 struct saa7146_vv *VAR_2 = VAR_1->vv_data;

 FUNC_0(("dev:%p\n",VAR_1));

 FUNC_3(&VAR_1->v4l2_dev);
 FUNC_2(VAR_1->pci, VAR_0, VAR_2->d_clipping.cpu_addr, VAR_2->d_clipping.dma_handle);
 FUNC_1(VAR_2);
 VAR_1->vv_data = ((void*)0);
 VAR_1->vv_callback = ((void*)0);

 return 0;
}
