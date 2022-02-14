
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_1)
{
 FUNC_1(&VAR_1->i_lock);
 FUNC_0(VAR_1)->cache_validity |= VAR_0;
 FUNC_2(&VAR_1->i_lock);
}
