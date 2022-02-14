
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_5__ {int buffer_len; scalar_t__ buffer; } ;
typedef TYPE_1__ fnic_dbgfs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4,
      struct file *VAR_5)
{
 fnic_dbgfs_t *VAR_6;
 VAR_6 = FUNC_2(sizeof(fnic_dbgfs_t), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->buffer = FUNC_4((3*(VAR_3 * VAR_2)));
 if (!VAR_6->buffer) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 FUNC_3((void *)VAR_6->buffer, 0,
     (3*(VAR_3 * VAR_2)));
 VAR_6->buffer_len = FUNC_0(VAR_6);
 VAR_5->private_data = VAR_6;
 return 0;
}
