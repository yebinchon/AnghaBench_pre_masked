
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int sb_chk; int sb_cp_table; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 char* FUNC_2 (unsigned int,int ) ;
 char FUNC_3 (int ,unsigned char) ;
 int FUNC_4 (char*,...) ;

char *FUNC_5(struct super_block *VAR_1, unsigned char *VAR_2,
     unsigned VAR_3, int VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7;
 if (FUNC_1(VAR_1)->sb_chk >= 2) if (FUNC_0(VAR_2, VAR_3) != VAR_5) {
  FUNC_4("HPFS: Long name flag mismatch - name ");
  for (VAR_7=0; VAR_7<VAR_3; VAR_7++) FUNC_4("%c", VAR_2[VAR_7]);
  FUNC_4(" misidentified as %s.\n", VAR_5 ? "short" : "long");
  FUNC_4("HPFS: It's nothing serious. It could happen because of bug in OS/2.\nHPFS: Set checks=normal to disable this message.\n");
 }
 if (!VAR_4) return VAR_2;
 if (!(VAR_6 = FUNC_2(VAR_3, VAR_0))) {
  FUNC_4("HPFS: can't allocate memory for name conversion buffer\n");
  return VAR_2;
 }
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) VAR_6[VAR_7] = FUNC_3(FUNC_1(VAR_1)->sb_cp_table,VAR_2[VAR_7]);
 return VAR_6;
}
