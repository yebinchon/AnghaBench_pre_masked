
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vino_settings {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_13__ {int name; } ;
struct TYPE_10__ {void* fifo_thres; int next_4_desc; } ;
struct TYPE_9__ {void* fifo_thres; int next_4_desc; } ;
struct TYPE_12__ {TYPE_3__ b; TYPE_2__ a; scalar_t__ intr_status; scalar_t__ control; } ;
struct TYPE_8__ {int dma; int * dma_cpu; } ;
struct TYPE_11__ {TYPE_1__ dummy_desc_table; scalar_t__ dummy_page; TYPE_6__ v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int * FUNC_0 (int *,int,int *,int) ;
 int FUNC_1 (int *,void*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 dma_addr_t VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_3(sizeof(struct vino_settings), VAR_3);
 if (!VAR_9) {
  FUNC_7(VAR_10);
  return -VAR_1;
 }
 VAR_10++;
 FUNC_4(VAR_9->v4l2_dev.name, "vino",
   sizeof(VAR_9->v4l2_dev.name));
 VAR_12 = FUNC_6(((void*)0), &VAR_9->v4l2_dev);
 if (VAR_12)
  return VAR_12;
 VAR_10++;


 VAR_9->dummy_page = FUNC_2(VAR_3 | VAR_2);
 if (!VAR_9->dummy_page) {
  FUNC_7(VAR_10);
  return -VAR_1;
 }
 VAR_10++;



 VAR_9->dummy_desc_table.dma_cpu =
  FUNC_0(((void*)0),
  VAR_6 * sizeof(dma_addr_t),
  &VAR_9->dummy_desc_table.dma,
  VAR_3 | VAR_2);
 if (!VAR_9->dummy_desc_table.dma_cpu) {
  FUNC_7(VAR_10);
  return -VAR_1;
 }
 VAR_10++;

 VAR_11 = FUNC_1(((void*)0),
        (void *)VAR_9->dummy_page,
     VAR_4, VAR_0);
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_9->dummy_desc_table.dma_cpu[VAR_13] = VAR_11;
 }



 VAR_8->control = 0;
 VAR_8->a.next_4_desc = VAR_9->dummy_desc_table.dma;
 VAR_8->b.next_4_desc = VAR_9->dummy_desc_table.dma;
 FUNC_5(VAR_5);

 VAR_8->intr_status = 0;

 VAR_8->a.fifo_thres = VAR_7;
 VAR_8->b.fifo_thres = VAR_7;

 return 0;
}
