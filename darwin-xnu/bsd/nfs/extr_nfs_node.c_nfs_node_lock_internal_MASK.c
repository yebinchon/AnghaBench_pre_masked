
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* nfsnode_t ;
struct TYPE_5__ {int n_lock; scalar_t__ n_hflag; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (int,TYPE_1__*,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(nfsnode_t VAR_2, int VAR_3)
{
 FUNC_1(268, VAR_2, VAR_3, 0, 0);
 FUNC_2(&VAR_2->n_lock);
 if (!VAR_3 && !(VAR_2->n_hflag && VAR_1)) {
  FUNC_0(268, VAR_2, 0xdead, 0, 0);
  FUNC_3(&VAR_2->n_lock);
  return (VAR_0);
 }
 FUNC_0(268, VAR_2, VAR_3, 0, 0);
 return (0);
}
