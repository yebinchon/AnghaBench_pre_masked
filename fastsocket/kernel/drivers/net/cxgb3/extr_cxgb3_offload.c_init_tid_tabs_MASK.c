
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union listen_entry {union listen_entry* next; } ;
union active_open_entry {union active_open_entry* next; } ;
struct tid_info {unsigned int ntids; unsigned int nstids; unsigned int stid_base; unsigned int natids; unsigned int atid_base; union active_open_entry* atid_tab; union active_open_entry* afree; union listen_entry* stid_tab; union listen_entry* sfree; int atid_lock; int stid_lock; int tids_in_use; scalar_t__ atids_in_use; scalar_t__ stids_in_use; int * tid_tab; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tid_info *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7 = VAR_2 * sizeof(*VAR_1->tid_tab) +
     VAR_3 * sizeof(*VAR_1->atid_tab) + VAR_4 * sizeof(*VAR_1->stid_tab);

 VAR_1->tid_tab = FUNC_1(VAR_7);
 if (!VAR_1->tid_tab)
  return -VAR_0;

 VAR_1->stid_tab = (union listen_entry *)&VAR_1->tid_tab[VAR_2];
 VAR_1->atid_tab = (union active_open_entry *)&VAR_1->stid_tab[VAR_4];
 VAR_1->ntids = VAR_2;
 VAR_1->nstids = VAR_4;
 VAR_1->stid_base = VAR_6;
 VAR_1->sfree = ((void*)0);
 VAR_1->natids = VAR_3;
 VAR_1->atid_base = VAR_5;
 VAR_1->afree = ((void*)0);
 VAR_1->stids_in_use = VAR_1->atids_in_use = 0;
 FUNC_0(&VAR_1->tids_in_use, 0);
 FUNC_2(&VAR_1->stid_lock);
 FUNC_2(&VAR_1->atid_lock);




 if (VAR_4) {
  while (--VAR_4)
   VAR_1->stid_tab[VAR_4 - 1].next = &VAR_1->stid_tab[VAR_4];
  VAR_1->sfree = VAR_1->stid_tab;
 }
 if (VAR_3) {
  while (--VAR_3)
   VAR_1->atid_tab[VAR_3 - 1].next = &VAR_1->atid_tab[VAR_3];
  VAR_1->afree = VAR_1->atid_tab;
 }
 return 0;
}
