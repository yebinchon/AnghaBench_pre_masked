
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_opencnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 FUNC_3("AFFS: open(%lu,%d)\n",
   VAR_0->i_ino, FUNC_2(&FUNC_0(VAR_0)->i_opencnt));
 FUNC_1(&FUNC_0(VAR_0)->i_opencnt);
 return 0;
}
