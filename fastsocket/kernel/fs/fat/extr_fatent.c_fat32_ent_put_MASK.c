
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent32_p; } ;
struct fat_entry {int fat_inode; int * bhs; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fat_entry *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_1)
  VAR_3 = VAR_0;

 FUNC_0(VAR_3 & 0xf0000000);
 VAR_3 |= FUNC_2(*VAR_2->u.ent32_p) & ~0x0fffffff;
 *VAR_2->u.ent32_p = FUNC_1(VAR_3);
 FUNC_3(VAR_2->bhs[0], VAR_2->fat_inode);
}
