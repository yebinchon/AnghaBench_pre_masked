
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int** ent12_p; } ;
struct fat_entry {int entry; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fat_entry *VAR_3)
{
 u8 **VAR_4 = VAR_3->u.ent12_p;
 int VAR_5;

 FUNC_0(&VAR_2);
 if (VAR_3->entry & 1)
  VAR_5 = (*VAR_4[0] >> 4) | (*VAR_4[1] << 4);
 else
  VAR_5 = (*VAR_4[1] << 8) | *VAR_4[0];
 FUNC_1(&VAR_2);

 VAR_5 &= 0x0fff;
 if (VAR_5 >= VAR_0)
  VAR_5 = VAR_1;
 return VAR_5;
}
