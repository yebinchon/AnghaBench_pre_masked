
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_fd {TYPE_2__* parentdp; } ;
struct request_queue {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ type; struct request_queue* request_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct request_queue*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, unsigned char *VAR_3)
{
 struct sg_fd *VAR_4 = (struct sg_fd *)VAR_2->private_data;
 struct request_queue *VAR_5 = VAR_4->parentdp->device->request_queue;

 if (VAR_4->parentdp->device->type == VAR_1)
  return 0;

 return FUNC_0(VAR_5, VAR_3, VAR_2->f_mode & VAR_0);
}
