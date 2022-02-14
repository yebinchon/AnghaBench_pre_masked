
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aopen_entry {union aopen_entry* next; } ;
struct tid_info {unsigned int natids; int ntids; int nstids; unsigned long* stid_bmap; union aopen_entry* atid_tab; union aopen_entry* afree; int tids_in_use; scalar_t__ atids_in_use; scalar_t__ stids_in_use; int atid_lock; int stid_lock; struct serv_entry* stid_tab; int * tid_tab; } ;
struct serv_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(struct tid_info *VAR_1)
{
 size_t VAR_2;
 unsigned int VAR_3 = VAR_1->natids;

 VAR_2 = VAR_1->ntids * sizeof(*VAR_1->tid_tab) + VAR_3 * sizeof(*VAR_1->atid_tab) +
        VAR_1->nstids * sizeof(*VAR_1->stid_tab) +
        FUNC_0(VAR_1->nstids) * sizeof(long);
 VAR_1->tid_tab = FUNC_4(VAR_2);
 if (!VAR_1->tid_tab)
  return -VAR_0;

 VAR_1->atid_tab = (union aopen_entry *)&VAR_1->tid_tab[VAR_1->ntids];
 VAR_1->stid_tab = (struct serv_entry *)&VAR_1->atid_tab[VAR_3];
 VAR_1->stid_bmap = (unsigned long *)&VAR_1->stid_tab[VAR_1->nstids];
 FUNC_3(&VAR_1->stid_lock);
 FUNC_3(&VAR_1->atid_lock);

 VAR_1->stids_in_use = 0;
 VAR_1->afree = ((void*)0);
 VAR_1->atids_in_use = 0;
 FUNC_1(&VAR_1->tids_in_use, 0);


 if (VAR_3) {
  while (--VAR_3)
   VAR_1->atid_tab[VAR_3 - 1].next = &VAR_1->atid_tab[VAR_3];
  VAR_1->afree = VAR_1->atid_tab;
 }
 FUNC_2(VAR_1->stid_bmap, VAR_1->nstids);
 return 0;
}
