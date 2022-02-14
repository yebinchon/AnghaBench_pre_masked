
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_ctx {TYPE_2__* ohci; struct dma_iso_ctx* current_ctx; } ;
struct file {struct file_ctx* private_data; } ;
struct dma_iso_ctx {int num_desc; scalar_t__* buffer_status; int lock; int waitq; } ;
typedef int poll_table ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_5, poll_table *VAR_6)
{
 struct file_ctx *VAR_7;
 unsigned int VAR_8 = 0;
 unsigned long VAR_9;
 struct dma_iso_ctx *VAR_10;
 int VAR_11;

 VAR_7 = VAR_5->private_data;
 VAR_10 = VAR_7->current_ctx;
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_0, VAR_7->ohci->host->id,
    "Current iso context not set");
  return VAR_1;
 }

 FUNC_1(VAR_5, &VAR_10->waitq, VAR_6);

 FUNC_2(&VAR_10->lock, VAR_9);
 for (VAR_11 = 0; VAR_11 < VAR_10->num_desc; VAR_11++) {
  if (VAR_10->buffer_status[VAR_11] == VAR_4) {
   VAR_8 |= VAR_2 | VAR_3;
   break;
  }
 }
 FUNC_3(&VAR_10->lock, VAR_9);

 return VAR_8;
}
