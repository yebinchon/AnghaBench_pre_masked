
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_state {int state; } ;
struct TYPE_2__ {int lock; int outstanding_extents; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1,
        struct extent_state *VAR_2, u64 VAR_3)
{

 if (!(VAR_2->state & VAR_0))
  return;

 FUNC_1(&FUNC_0(VAR_1)->lock);
 FUNC_0(VAR_1)->outstanding_extents++;
 FUNC_2(&FUNC_0(VAR_1)->lock);
}
