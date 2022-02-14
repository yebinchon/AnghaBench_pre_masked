
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* data; } ;
struct irctl {TYPE_1__ d; } ;
struct file {TYPE_2__* f_dentry; } ;
struct TYPE_6__ {scalar_t__ i_rdev; } ;
struct TYPE_5__ {TYPE_3__* d_inode; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 struct irctl** VAR_0 ;

void *FUNC_1(struct file *VAR_1)
{
 void *VAR_2 = ((void*)0);

 if (VAR_1 && VAR_1->f_dentry && VAR_1->f_dentry->d_inode &&
     VAR_1->f_dentry->d_inode->i_rdev) {
  struct irctl *VAR_3;
  VAR_3 = VAR_0[FUNC_0(VAR_1->f_dentry->d_inode)];
  VAR_2 = VAR_3->d.data;
 }

 return VAR_2;
}
