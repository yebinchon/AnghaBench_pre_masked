
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstat {scalar_t__ rdev; int mode; } ;
struct inode {int * i_private; } ;
struct device {scalar_t__ devt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct inode *VAR_2, struct kstat *VAR_3)
{

 if (VAR_2->i_private != &VAR_0)
  return 0;


 if (FUNC_2(VAR_1)) {
  if (!FUNC_0(VAR_3->mode))
   return 0;
 } else {
  if (!FUNC_1(VAR_3->mode))
   return 0;
 }
 if (VAR_3->rdev != VAR_1->devt)
  return 0;


 return 1;
}
