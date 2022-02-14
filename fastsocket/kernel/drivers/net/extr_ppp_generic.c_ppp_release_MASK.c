
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_file {int kind; int refcnt; } ;
struct ppp {struct file* owner; } ;
struct inode {int dummy; } ;
struct file {struct ppp_file* private_data; } ;




 int FUNC_0 (struct ppp_file*) ;
 struct ppp* FUNC_1 (struct ppp_file*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ppp*) ;
 int FUNC_5 (struct ppp*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct ppp_file *VAR_2 = VAR_1->private_data;
 struct ppp *VAR_3;

 if (VAR_2) {
  VAR_1->private_data = ((void*)0);
  if (VAR_2->kind == 128) {
   VAR_3 = FUNC_1(VAR_2);
   if (VAR_1 == VAR_3->owner)
    FUNC_5(VAR_3);
  }
  if (FUNC_2(&VAR_2->refcnt)) {
   switch (VAR_2->kind) {
   case 128:
    FUNC_4(FUNC_1(VAR_2));
    break;
   case 129:
    FUNC_3(FUNC_0(VAR_2));
    break;
   }
  }
 }
 return 0;
}
