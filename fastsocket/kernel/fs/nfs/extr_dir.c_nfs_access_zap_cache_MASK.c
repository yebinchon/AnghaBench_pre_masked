
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_3__ {int access_cache_inode_lru; int flags; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct inode *VAR_3)
{
 FUNC_0(VAR_1);

 if (FUNC_8(VAR_0, &FUNC_1(VAR_3)->flags) == 0)
  return;

 FUNC_5(&VAR_2);
 if (FUNC_7(VAR_0, &FUNC_1(VAR_3)->flags))
  FUNC_3(&FUNC_1(VAR_3)->access_cache_inode_lru);

 FUNC_5(&VAR_3->i_lock);
 FUNC_2(FUNC_1(VAR_3), &VAR_1);
 FUNC_6(&VAR_3->i_lock);
 FUNC_6(&VAR_2);
 FUNC_4(&VAR_1);
}
