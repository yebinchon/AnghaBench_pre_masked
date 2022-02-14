
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_size; int i_mutex; int i_ino; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ mmu_private; int i_opencnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 FUNC_7("AFFS: release(%lu, %d)\n",
   VAR_0->i_ino, FUNC_4(&FUNC_0(VAR_0)->i_opencnt));

 if (FUNC_3(&FUNC_0(VAR_0)->i_opencnt)) {
  FUNC_5(&VAR_0->i_mutex);
  if (VAR_0->i_size != FUNC_0(VAR_0)->mmu_private)
   FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  FUNC_6(&VAR_0->i_mutex);
 }

 return 0;
}
