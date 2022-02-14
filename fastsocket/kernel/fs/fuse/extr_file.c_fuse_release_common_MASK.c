
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
struct TYPE_4__ {TYPE_1__ release; } ;
struct fuse_req {TYPE_2__ misc; } ;
struct fuse_file {struct fuse_req* reserved_req; } ;
struct file {int f_path; int f_flags; struct fuse_file* private_data; } ;


 int FUNC_0 (struct fuse_file*) ;
 int FUNC_1 (struct fuse_file*,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct file *VAR_0, int VAR_1)
{
 struct fuse_file *VAR_2;
 struct fuse_req *VAR_3;

 VAR_2 = VAR_0->private_data;
 if (FUNC_3(!VAR_2))
  return;

 VAR_3 = VAR_2->reserved_req;
 FUNC_1(VAR_2, VAR_0->f_flags, VAR_1);


 FUNC_2(&VAR_0->f_path);
 VAR_3->misc.release.path = VAR_0->f_path;






 FUNC_0(VAR_2);
}
