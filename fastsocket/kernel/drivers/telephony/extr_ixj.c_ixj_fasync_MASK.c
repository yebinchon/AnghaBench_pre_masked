
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_7__ {int async_queue; } ;
struct TYPE_5__ {int d_inode; } ;
typedef TYPE_3__ IXJ ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct file*,int,int *) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 IXJ *VAR_3 = FUNC_2(FUNC_0(VAR_1->f_path.dentry->d_inode));

 return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3->async_queue);
}
