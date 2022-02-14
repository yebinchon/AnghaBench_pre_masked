
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int stid_lock; int stids_in_use; TYPE_1__* stid_tab; int stid_bmap; scalar_t__ stid_base; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tid_info *VAR_1, unsigned int VAR_2, int VAR_3)
{
 VAR_2 -= VAR_1->stid_base;
 FUNC_2(&VAR_1->stid_lock);
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_2, VAR_1->stid_bmap);
 else
  FUNC_1(VAR_1->stid_bmap, VAR_2, 2);
 VAR_1->stid_tab[VAR_2].data = ((void*)0);
 VAR_1->stids_in_use--;
 FUNC_3(&VAR_1->stid_lock);
}
