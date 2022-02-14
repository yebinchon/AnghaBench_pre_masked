
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fs_struct {int lock; int users; } ;
struct TYPE_4__ {struct fs_struct* fs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct fs_struct*) ;
 struct fs_struct VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 struct fs_struct *VAR_2 = VAR_0->fs;

 if (VAR_2) {
  int VAR_3;

  FUNC_1(VAR_0);

  FUNC_3(&VAR_1.lock);
  VAR_1.users++;
  FUNC_4(&VAR_1.lock);

  FUNC_3(&VAR_2->lock);
  VAR_0->fs = &VAR_1;
  VAR_3 = !--VAR_2->users;
  FUNC_4(&VAR_2->lock);

  FUNC_2(VAR_0);
  if (VAR_3)
   FUNC_0(VAR_2);
 }
}
