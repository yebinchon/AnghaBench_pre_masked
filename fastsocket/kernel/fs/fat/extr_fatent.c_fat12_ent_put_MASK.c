
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int** ent12_p; } ;
struct fat_entry {int entry; int nr_bhs; int fat_inode; int * bhs; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fat_entry *VAR_3, int VAR_4)
{
 u8 **VAR_5 = VAR_3->u.ent12_p;

 if (VAR_4 == VAR_1)
  VAR_4 = VAR_0;

 FUNC_1(&VAR_2);
 if (VAR_3->entry & 1) {
  *VAR_5[0] = (VAR_4 << 4) | (*VAR_5[0] & 0x0f);
  *VAR_5[1] = VAR_4 >> 4;
 } else {
  *VAR_5[0] = VAR_4 & 0xff;
  *VAR_5[1] = (*VAR_5[1] & 0xf0) | (VAR_4 >> 8);
 }
 FUNC_2(&VAR_2);

 FUNC_0(VAR_3->bhs[0], VAR_3->fat_inode);
 if (VAR_3->nr_bhs == 2)
  FUNC_0(VAR_3->bhs[1], VAR_3->fat_inode);
}
