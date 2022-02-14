
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; char* name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {int private_data; TYPE_1__ f_path; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct qstr*) ;

int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 static struct qstr VAR_3 = {.len = 1, .name = "."};

 VAR_2->private_data = FUNC_0(VAR_2->f_path.dentry, &VAR_3);

 return VAR_2->private_data ? 0 : -VAR_0;
}
