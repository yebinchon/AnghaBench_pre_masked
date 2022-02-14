
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_8__ {int dma; int * dma_cpu; } ;
struct TYPE_7__ {int * vdev; } ;
struct TYPE_6__ {int * vdev; } ;
struct TYPE_9__ {int v4l2_dev; int dummy_page; TYPE_3__ dummy_desc_table; TYPE_2__ a; TYPE_1__ b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,void*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_11(int VAR_7)
{
 switch(VAR_7) {
 case 11:
  FUNC_10(VAR_5->b.vdev);
  VAR_5->b.vdev = ((void*)0);
 case 10:
  FUNC_10(VAR_5->a.vdev);
  VAR_5->a.vdev = ((void*)0);
 case 9:
  FUNC_5(&VAR_6);
 case 8:
  FUNC_3(VAR_2, ((void*)0));
 case 7:
  if (VAR_5->b.vdev) {
   FUNC_9(VAR_5->b.vdev);
   VAR_5->b.vdev = ((void*)0);
  }
 case 6:
  if (VAR_5->a.vdev) {
   FUNC_9(VAR_5->a.vdev);
   VAR_5->a.vdev = ((void*)0);
  }
 case 5:

  FUNC_1(((void*)0),
     VAR_5->dummy_desc_table.dma_cpu[0],
     VAR_1, VAR_0);
  FUNC_0(((void*)0), VAR_3
      * sizeof(dma_addr_t),
      (void *)VAR_5->
      dummy_desc_table.dma_cpu,
      VAR_5->dummy_desc_table.dma);
 case 4:
  FUNC_4(VAR_5->dummy_page);
 case 3:
  FUNC_8(&VAR_5->v4l2_dev);
 case 2:
  FUNC_7(VAR_5);
 case 1:
  FUNC_6(VAR_4);
 case 0:
  break;
 default:
  FUNC_2("vino_module_cleanup(): invalid cleanup stage = %d\n",
   VAR_7);
 }
}
