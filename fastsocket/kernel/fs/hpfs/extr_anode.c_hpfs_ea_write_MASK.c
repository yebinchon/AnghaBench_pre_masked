
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (struct super_block*,int,unsigned int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct super_block*,int,int,char*) ;
 char* FUNC_3 (struct super_block*,int,struct buffer_head**,unsigned int) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (char*,char*,unsigned int) ;

int FUNC_7(struct super_block *VAR_0, secno VAR_1, int VAR_2, unsigned VAR_3,
      unsigned VAR_4, char *VAR_5)
{
 struct buffer_head *VAR_6;
 char *VAR_7;
 secno VAR_8;
 unsigned VAR_9;
 while (VAR_4) {
  if (VAR_2) {
   if ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_3 >> 9)) == -1)
    return -1;
  } else VAR_8 = VAR_1 + (VAR_3 >> 9);
  if (FUNC_4(VAR_0)->sb_chk) if (FUNC_2(VAR_0, VAR_8, 1, "ea #2")) return -1;
  if (!(VAR_7 = FUNC_3(VAR_0, VAR_8, &VAR_6, (VAR_4 - 1) >> 9)))
   return -1;
  VAR_9 = 0x200 - (VAR_3 & 0x1ff); if (VAR_9 > VAR_4) VAR_9 = VAR_4;
  FUNC_6(VAR_7 + (VAR_3 & 0x1ff), VAR_5, VAR_9);
  FUNC_5(VAR_6);
  FUNC_1(VAR_6);
  VAR_5 += VAR_9; VAR_3 += VAR_9; VAR_4 -= VAR_9;
 }
 return 0;
}
