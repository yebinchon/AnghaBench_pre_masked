
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_data_buf {int dma_nents; int size; int buf; } ;
struct iscsi_iser_task {int* dir; TYPE_3__* iser_conn; } ;
struct ib_device {int dummy; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {TYPE_2__* ib_conn; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct ib_device* ib_device; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int ,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct iscsi_iser_task *VAR_1,
       struct iser_data_buf *VAR_2,
       enum iser_data_dir VAR_3,
       enum dma_data_direction VAR_4)
{
 struct ib_device *VAR_5;

 VAR_1->dir[VAR_3] = 1;
 VAR_5 = VAR_1->iser_conn->ib_conn->device->ib_device;

 VAR_2->dma_nents = FUNC_0(VAR_5, VAR_2->buf, VAR_2->size, VAR_4);
 if (VAR_2->dma_nents == 0) {
  FUNC_1("dma_map_sg failed!!!\n");
  return -VAR_0;
 }
 return 0;
}
