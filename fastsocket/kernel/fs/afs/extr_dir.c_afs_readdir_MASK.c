
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {unsigned int f_pos; int * private_data; TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_6__ {int i_ino; } ;
struct TYPE_4__ {TYPE_3__* d_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*,unsigned int*,void*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1, filldir_t VAR_2)
{
 unsigned VAR_3;
 int VAR_4;

 FUNC_1("{%Ld,{%lu}}",
        VAR_0->f_pos, VAR_0->f_path.dentry->d_inode->i_ino);

 FUNC_0(VAR_0->private_data != ((void*)0));

 VAR_3 = VAR_0->f_pos;
 VAR_4 = FUNC_3(VAR_0->f_path.dentry->d_inode, &VAR_3,
         VAR_1, VAR_2, VAR_0->private_data);
 VAR_0->f_pos = VAR_3;

 FUNC_2(" = %d", VAR_4);
 return VAR_4;
}
