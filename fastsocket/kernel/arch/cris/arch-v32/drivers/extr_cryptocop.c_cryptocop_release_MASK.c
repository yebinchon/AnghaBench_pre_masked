
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct cryptocop_private* private_data; } ;
struct cryptocop_private {scalar_t__ sid; struct cryptocop_private* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cryptocop_private*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct cryptocop_private *VAR_3 = VAR_2->private_data;
 struct cryptocop_private *VAR_4;

 while (VAR_3){
  VAR_4 = VAR_3->next;
  if (VAR_3->sid != VAR_0) {
   (void)FUNC_0(VAR_3->sid);
  }
  FUNC_1(VAR_3);
  VAR_3 = VAR_4;
 }

 return 0;
}
