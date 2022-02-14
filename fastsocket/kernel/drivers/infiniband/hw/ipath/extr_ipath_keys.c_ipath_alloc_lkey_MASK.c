
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ipath_mregion {size_t lkey; } ;
struct ipath_lkey_table {size_t next; int max; int gen; int lock; struct ipath_mregion** table; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ipath_lkey_table *VAR_1, struct ipath_mregion *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1->lock, VAR_3);


 VAR_4 = VAR_5 = VAR_1->next;
 for (;;) {
  if (VAR_1->table[VAR_4] == ((void*)0))
   break;
  VAR_4 = (VAR_4 + 1) & (VAR_1->max - 1);
  if (VAR_4 == VAR_5) {
   FUNC_2(&VAR_1->lock, VAR_3);
   FUNC_0("LKEY table full\n");
   VAR_6 = 0;
   goto bail;
  }
 }
 VAR_1->next = (VAR_4 + 1) & (VAR_1->max - 1);




 VAR_1->gen++;
 VAR_2->lkey = (VAR_4 << (32 - VAR_0)) |
  ((((1 << (24 - VAR_0)) - 1) & VAR_1->gen)
   << 8);
 if (VAR_2->lkey == 0) {
  VAR_2->lkey |= 1 << 8;
  VAR_1->gen++;
 }
 VAR_1->table[VAR_4] = VAR_2;
 FUNC_2(&VAR_1->lock, VAR_3);

 VAR_6 = 1;

bail:
 return VAR_6;
}
