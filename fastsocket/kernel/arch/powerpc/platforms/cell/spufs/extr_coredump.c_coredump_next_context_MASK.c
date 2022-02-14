
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spu_context {int flags; } ;
struct file {TYPE_1__* f_dentry; int * f_op; } ;
struct fdtable {int max_fds; int open_fds; } ;
struct TYPE_6__ {struct spu_context* i_ctx; } ;
struct TYPE_5__ {int files; } ;
struct TYPE_4__ {int d_inode; } ;


 int FUNC_0 (int,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct file* FUNC_2 (int) ;
 struct fdtable* FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static struct spu_context *FUNC_4(int *VAR_3)
{
 struct fdtable *VAR_4 = FUNC_3(VAR_1->files);
 struct file *VAR_5;
 struct spu_context *VAR_6 = ((void*)0);

 for (; *VAR_3 < VAR_4->max_fds; (*VAR_3)++) {
  if (!FUNC_0(*VAR_3, VAR_4->open_fds))
   continue;

  VAR_5 = FUNC_2(*VAR_3);

  if (!VAR_5 || VAR_5->f_op != &VAR_2)
   continue;

  VAR_6 = FUNC_1(VAR_5->f_dentry->d_inode)->i_ctx;
  if (VAR_6->flags & VAR_0)
   continue;

  break;
 }

 return VAR_6;
}
