
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ state; int open; int pic_len; int io_lock; TYPE_1__* dev; TYPE_2__* irq_urb; scalar_t__ camera_request_ready; scalar_t__ camera_busy; scalar_t__ download_left; scalar_t__ pic_index; scalar_t__ out_ptr; scalar_t__ out_count; scalar_t__ in_count; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5 (struct inode* VAR_5, struct file *VAR_6)
{
 int VAR_7=0;
 int VAR_8=0;

 FUNC_2(&VAR_4->io_lock);

 if (VAR_4->state == VAR_3)
 {
  VAR_8=-VAR_0;
  goto error_out;
 }
 if (VAR_4->open)
 {
  VAR_8=-VAR_0;
  goto error_out;
 }

 VAR_4->in_count=0;
 VAR_4->out_count=0;
 VAR_4->out_ptr=0;
 VAR_4->pic_index=0;
 VAR_4->pic_len=-1;
 VAR_4->download_left=0;

 VAR_4->camera_busy=0;
 VAR_4->camera_request_ready=0;

 VAR_7=0;
 VAR_4->irq_urb->dev = VAR_4->dev;
 VAR_7 = FUNC_4 (VAR_4->irq_urb, VAR_2);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev->dev,
   "request USB irq fails (submit_retval=%i).\n", VAR_7);
  VAR_8 = -VAR_1;
  goto error_out;
 }

 VAR_4->open=1;
 FUNC_0 ("Mustek MDC800 device opened.");

error_out:
 FUNC_3(&VAR_4->io_lock);
 return VAR_8;
}
