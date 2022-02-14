
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct TYPE_2__ {int sb_fs_size; int sb_c_bitmap; } ;


 int FUNC_0 (struct quad_buffer_head*) ;
 unsigned int* FUNC_1 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 unsigned int* FUNC_2 (struct super_block*,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;

int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2 = (FUNC_3(VAR_0)->sb_fs_size + 0x4000 - 1) >> 14;
 int VAR_3 = FUNC_3(VAR_0)->sb_c_bitmap & 0x0fffffff;
 int VAR_4, VAR_5;
 unsigned *VAR_6;
 struct quad_buffer_head VAR_7;
 if ((VAR_6 = FUNC_2(VAR_0, &VAR_7))) {
  for (VAR_5 = 0; VAR_5 < 512; VAR_5++) {
   unsigned VAR_8;
   if (!VAR_6[VAR_5]) continue;
   for (VAR_8 = VAR_6[VAR_5]; VAR_8; VAR_8 >>= 1) if (VAR_8 & 1) if (!--VAR_1) {
    FUNC_0(&VAR_7);
    return 0;
   }
  }
 }
 FUNC_0(&VAR_7);
 VAR_4 = 0;
 if (FUNC_3(VAR_0)->sb_c_bitmap != -1) {
  VAR_6 = FUNC_1(VAR_0, VAR_3, &VAR_7, "chkdn1");
  goto chk_bmp;
 }
 chk_next:
 if (VAR_4 == VAR_3) VAR_4++;
 if (VAR_4 >= VAR_2) return 1;
 VAR_6 = FUNC_1(VAR_0, VAR_4, &VAR_7, "chkdn2");
 chk_bmp:
 if (VAR_6) {
  for (VAR_5 = 0; VAR_5 < 512; VAR_5++) {
   unsigned VAR_9;
   if (!VAR_6[VAR_5]) continue;
   for (VAR_9 = 0xf; VAR_9; VAR_9 <<= 4)
    if ((VAR_6[VAR_5] & VAR_9) == VAR_9) {
     if (!--VAR_1) {
      FUNC_0(&VAR_7);
      return 0;
     }
    }
  }
  FUNC_0(&VAR_7);
 }
 VAR_4++;
 goto chk_next;
}
