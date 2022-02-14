
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int flags; int available; int * bufptr; } ;
struct inode {int dummy; } ;
struct file {struct pt_unit* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pt_unit*) ;
 int FUNC_4 (struct pt_unit*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct pt_unit *VAR_5 = VAR_4->private_data;

 if (FUNC_1(&VAR_5->available) > 1)
  return -VAR_0;

 if (VAR_5->flags & VAR_2)
  FUNC_4(VAR_5);

 if (VAR_5->flags & VAR_1)
  FUNC_3(VAR_5);

 FUNC_2(VAR_5->bufptr);
 VAR_5->bufptr = ((void*)0);

 FUNC_0(&VAR_5->available);

 return 0;

}
