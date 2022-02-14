
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_3__ {int minor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_2);
 VAR_3->private_data = (void *) (unsigned long) VAR_4;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); ++VAR_5)
  if (VAR_1[VAR_5].minor == VAR_4) {
   FUNC_3();
   return 0;
  }
 FUNC_3();
 return -VAR_0;
}
