
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int intf; scalar_t__ present; scalar_t__ used; int flags; } ;
struct inode {int dummy; } ;
struct file {struct usblp* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usblp*) ;
 int VAR_1 ;
 int FUNC_4 (struct usblp*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct usblp *VAR_4 = VAR_3->private_data;

 VAR_4->flags &= ~VAR_0;

 FUNC_0 (&VAR_1);
 VAR_4->used = 0;
 if (VAR_4->present) {
  FUNC_4(VAR_4);
  FUNC_2(VAR_4->intf);
 } else
  FUNC_3 (VAR_4);
 FUNC_1 (&VAR_1);
 return 0;
}
