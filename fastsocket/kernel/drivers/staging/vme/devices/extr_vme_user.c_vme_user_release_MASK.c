
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_rdev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sem; int users; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1->i_rdev);

 FUNC_1(&VAR_0[VAR_3].sem);


 VAR_0[VAR_3].users--;

 FUNC_2(&VAR_0[VAR_3].sem);

 return 0;
}
