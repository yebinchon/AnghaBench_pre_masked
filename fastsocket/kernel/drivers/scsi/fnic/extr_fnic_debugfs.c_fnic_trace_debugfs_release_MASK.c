
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ fnic_dbgfs_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0,
       struct file *VAR_1)
{
 fnic_dbgfs_t *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->buffer);
 FUNC_0(VAR_2);
 return 0;
}
