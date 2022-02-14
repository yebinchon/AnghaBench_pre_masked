
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_6__ {unsigned char const* name; } ;
struct TYPE_10__ {TYPE_1__ d_name; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {TYPE_4__ d_name; TYPE_5__* d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct inode*,struct file*,TYPE_5__*,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_0("%p,%p{%p{%s},%s}",
        VAR_1, VAR_2,
        VAR_2->f_path.dentry->d_parent,
        VAR_2->f_path.dentry->d_parent ?
        VAR_2->f_path.dentry->d_parent->d_name.name :
        (const unsigned char *) "",
        VAR_2->f_path.dentry->d_name.name);

 return -VAR_0;
}
