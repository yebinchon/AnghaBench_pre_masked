
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ib_xrcd {int usecnt; struct inode* inode; } ;
struct ib_uverbs_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_xrcd*) ;
 int FUNC_2 (struct ib_uverbs_device*,struct inode*) ;

void FUNC_3(struct ib_uverbs_device *VAR_0,
       struct ib_xrcd *VAR_1)
{
 struct inode *VAR_2;

 VAR_2 = VAR_1->inode;
 if (VAR_2 && !FUNC_0(&VAR_1->usecnt))
  return;

 FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_0, VAR_2);
}
