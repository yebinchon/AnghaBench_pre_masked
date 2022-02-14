
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_4__ {int cache_validity; } ;
struct TYPE_3__ {void (* clear_acl_cache ) (struct inode*) ;} ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_1)
{
 void (*VAR_2)(struct inode *);

 VAR_2 = FUNC_1(VAR_1)->clear_acl_cache;
 if (VAR_2 != ((void*)0))
  VAR_2(VAR_1);
 FUNC_2(&VAR_1->i_lock);
 FUNC_0(VAR_1)->cache_validity &= ~VAR_0;
 FUNC_3(&VAR_1->i_lock);
}
