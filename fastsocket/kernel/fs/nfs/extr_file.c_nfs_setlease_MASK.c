
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct TYPE_10__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,long) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, long VAR_2, struct file_lock **VAR_3)
{
 FUNC_0("NFS: setlease(%s/%s, arg=%ld)\n",
   VAR_1->f_path.dentry->d_parent->d_name.name,
   VAR_1->f_path.dentry->d_name.name, VAR_2);

 return -VAR_0;
}
