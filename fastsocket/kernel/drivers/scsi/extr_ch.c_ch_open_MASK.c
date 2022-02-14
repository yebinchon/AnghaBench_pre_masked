
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_3__ {int device; } ;
typedef TYPE_1__ scsi_changer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 scsi_changer *VAR_5;
 int VAR_6 = FUNC_1(VAR_3);

 FUNC_2();
 FUNC_4(&VAR_2);
 VAR_5 = FUNC_0(&VAR_1, VAR_6);

 if (((void*)0) == VAR_5 || FUNC_3(VAR_5->device)) {
  FUNC_5(&VAR_2);
  FUNC_6();
  return -VAR_0;
 }
 FUNC_5(&VAR_2);

 VAR_4->private_data = VAR_5;
 FUNC_6();
 return 0;
}
