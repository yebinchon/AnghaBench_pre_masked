
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {scalar_t__ door_locked; scalar_t__ in_use; int buffer; } ;
struct inode {int dummy; } ;
struct file {struct scsi_tape* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_tape*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_tape*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = 0;
 struct scsi_tape *VAR_5 = VAR_3->private_data;

 if (VAR_5->door_locked == VAR_0)
  FUNC_0(VAR_5, 0);

 FUNC_1(VAR_5->buffer);
 FUNC_3(&VAR_1);
 VAR_5->in_use = 0;
 FUNC_4(&VAR_1);
 FUNC_2(VAR_5);

 return VAR_4;
}
