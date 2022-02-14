
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int seqin_page_addr; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;
 int FUNC_3 (struct sh_flctl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mtd_info*,int,int) ;
 int FUNC_8 (struct sh_flctl*) ;
 int FUNC_9 (struct sh_flctl*) ;
 int FUNC_10 (struct sh_flctl*) ;
 int FUNC_11 (struct sh_flctl*,int,int) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static void FUNC_13(struct mtd_info *VAR_3)
{
 struct sh_flctl *VAR_4 = FUNC_5(VAR_3);
 int VAR_5, VAR_6 = VAR_4->seqin_page_addr;
 int VAR_7, VAR_8;

 if (VAR_4->page_size)
  VAR_8 = 4;
 else
  VAR_8 = 1;

 FUNC_12(FUNC_6(FUNC_2(VAR_4)) | VAR_0, FUNC_2(VAR_4));

 FUNC_7(VAR_3, VAR_1,
   (VAR_1 << 8) | VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_4(VAR_4);
  FUNC_12(FUNC_6(FUNC_1(VAR_4)) | 1, FUNC_1(VAR_4));
  FUNC_12(VAR_6 << 2 | VAR_7, FUNC_0(VAR_4));

  FUNC_8(VAR_4);
  FUNC_11(VAR_4, 512, 512 * VAR_7);

  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   FUNC_10(VAR_4);
   FUNC_12(0xFFFFFFFF, FUNC_3(VAR_4));
  }
  FUNC_9(VAR_4);
 }

 FUNC_12(FUNC_6(FUNC_2(VAR_4)) & ~VAR_0, FUNC_2(VAR_4));
}
