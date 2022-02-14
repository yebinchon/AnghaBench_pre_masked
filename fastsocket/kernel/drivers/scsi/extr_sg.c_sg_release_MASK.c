
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_6__ {int o_excl_wait; scalar_t__ exclude; TYPE_1__* disk; } ;
struct TYPE_5__ {int closed; int f_ref; TYPE_3__* parentdp; } ;
struct TYPE_4__ {int disk_name; } ;
typedef TYPE_2__ Sg_fd ;
typedef TYPE_3__ Sg_device ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 Sg_device *VAR_4;
 Sg_fd *VAR_5;

 if ((!(VAR_5 = (Sg_fd *) VAR_3->private_data)) || (!(VAR_4 = VAR_5->parentdp)))
  return -VAR_0;
 FUNC_0(3, FUNC_2("sg_release: %s\n", VAR_4->disk->disk_name));

 VAR_5->closed = 1;

 VAR_4->exclude = 0;
 FUNC_3(&VAR_4->o_excl_wait);

 FUNC_1(&VAR_5->f_ref, VAR_1);
 return 0;
}
