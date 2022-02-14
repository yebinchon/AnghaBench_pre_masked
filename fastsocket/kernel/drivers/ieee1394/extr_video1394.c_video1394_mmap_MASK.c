
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file_ctx {TYPE_3__* current_ctx; TYPE_2__* ohci; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_6__ {int dma; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct file_ctx *VAR_4 = (struct file_ctx *)VAR_2->private_data;

 if (VAR_4->current_ctx == ((void*)0)) {
  FUNC_0(VAR_1, VAR_4->ohci->host->id,
    "Current iso context not set");
  return -VAR_0;
 }

 return FUNC_1(&VAR_4->current_ctx->dma, VAR_2, VAR_3);
}
