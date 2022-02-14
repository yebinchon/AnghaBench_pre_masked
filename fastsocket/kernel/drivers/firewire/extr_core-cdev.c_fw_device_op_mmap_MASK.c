
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_start; unsigned long vm_end; } ;
struct file {struct client* private_data; } ;
struct TYPE_5__ {int * pages; } ;
struct client {int vm_start; TYPE_4__* device; TYPE_1__ buffer; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct client *VAR_11 = VAR_9->private_data;
 enum dma_data_direction VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_0(VAR_11->device))
  return -VAR_4;


 if (VAR_11->buffer.pages != ((void*)0))
  return -VAR_2;

 if (!(VAR_10->vm_flags & VAR_7))
  return -VAR_3;

 if (VAR_10->vm_start & ~VAR_5)
  return -VAR_3;

 VAR_11->vm_start = VAR_10->vm_start;
 VAR_13 = VAR_10->vm_end - VAR_10->vm_start;
 VAR_14 = VAR_13 >> VAR_6;
 if (VAR_13 & ~VAR_5)
  return -VAR_3;

 if (VAR_10->vm_flags & VAR_8)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 VAR_15 = FUNC_2(&VAR_11->buffer, VAR_11->device->card,
     VAR_14, VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_3(&VAR_11->buffer, VAR_10);
 if (VAR_15 < 0)
  FUNC_1(&VAR_11->buffer, VAR_11->device->card);

 return VAR_15;
}
