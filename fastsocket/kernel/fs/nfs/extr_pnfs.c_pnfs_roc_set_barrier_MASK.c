
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pnfs_layout_hdr {scalar_t__ plh_barrier; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_0, u32 VAR_1)
{
 struct pnfs_layout_hdr *VAR_2;

 FUNC_1(&VAR_0->i_lock);
 VAR_2 = FUNC_0(VAR_0)->layout;
 if ((int)(VAR_1 - VAR_2->plh_barrier) > 0)
  VAR_2->plh_barrier = VAR_1;
 FUNC_2(&VAR_0->i_lock);
}
