
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osst_tape {scalar_t__ door_locked; int device; scalar_t__ in_use; int buffer; scalar_t__ header_ok; scalar_t__ raw; } ;
struct inode {int dummy; } ;
struct file {struct osst_tape* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct osst_tape*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode * VAR_2, struct file * VAR_3)
{
 int VAR_4 = 0;
 struct osst_tape * VAR_5 = VAR_3->private_data;

 if (VAR_5->door_locked == VAR_0)
  FUNC_0(VAR_5, 0);

 if (VAR_5->raw)
  VAR_5->header_ok = 0;

 FUNC_1(VAR_5->buffer);
 FUNC_3(&VAR_1);
 VAR_5->in_use = 0;
 FUNC_4(&VAR_1);

 FUNC_2(VAR_5->device);

 return VAR_4;
}
