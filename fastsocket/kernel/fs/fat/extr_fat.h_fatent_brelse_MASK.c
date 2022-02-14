
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent32_p; } ;
struct fat_entry {int nr_bhs; int * fat_inode; int ** bhs; TYPE_1__ u; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct fat_entry *VAR_0)
{
 int VAR_1;
 VAR_0->u.ent32_p = ((void*)0);
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_bhs; VAR_1++)
  FUNC_0(VAR_0->bhs[VAR_1]);
 VAR_0->nr_bhs = 0;
 VAR_0->bhs[0] = VAR_0->bhs[1] = ((void*)0);
 VAR_0->fat_inode = ((void*)0);
}
