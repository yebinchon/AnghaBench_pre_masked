
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int sb_cp_table; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned char FUNC_1 (int ,unsigned char) ;

int FUNC_2(struct super_block *VAR_0, unsigned char *VAR_1, unsigned VAR_2,
         unsigned char *VAR_3, unsigned VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_2 < VAR_4 ? VAR_2 : VAR_4;
 unsigned VAR_7;
 if (VAR_5) return -1;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  unsigned char VAR_8 = FUNC_1(FUNC_0(VAR_0)->sb_cp_table,VAR_1[VAR_7]);
  unsigned char VAR_9 = FUNC_1(FUNC_0(VAR_0)->sb_cp_table,VAR_3[VAR_7]);
  if (VAR_8 < VAR_9) return -1;
  if (VAR_8 > VAR_9) return 1;
 }
 if (VAR_2 < VAR_4) return -1;
 if (VAR_2 > VAR_4) return 1;
 return 0;
}
