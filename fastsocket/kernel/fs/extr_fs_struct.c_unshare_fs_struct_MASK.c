
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fs_struct {int lock; int users; } ;
struct TYPE_4__ {struct fs_struct* fs; } ;


 int VAR_0 ;
 struct fs_struct* FUNC_0 (struct fs_struct*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct fs_struct*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
 struct fs_struct *VAR_2 = VAR_1->fs;
 struct fs_struct *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->lock);
 VAR_4 = !--VAR_2->users;
 VAR_1->fs = VAR_3;
 FUNC_5(&VAR_2->lock);
 FUNC_3(VAR_1);

 if (VAR_4)
  FUNC_1(VAR_2);

 return 0;
}
