
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int seqin_page_addr; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int,int) ;
 int FUNC_4 (struct mtd_info*,int,int) ;
 int FUNC_5 (struct sh_flctl*) ;
 int FUNC_6 (struct sh_flctl*) ;
 int FUNC_7 (struct sh_flctl*,int,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct mtd_info *VAR_2)
{
 struct sh_flctl *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = VAR_3->seqin_page_addr;
 int VAR_5, VAR_6;

 if (VAR_3->page_size) {
  VAR_5 = 3;
  VAR_6 = 4;
 } else {
  VAR_5 = 0;
  VAR_6 = 1;
 }

 FUNC_4(VAR_2, VAR_0,
   (VAR_0 << 8) | VAR_1);

 for (; VAR_5 < VAR_6; VAR_5++) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_2, VAR_5 * 528 + 512, VAR_4);
  FUNC_8(16, FUNC_0(VAR_3));

  FUNC_5(VAR_3);
  FUNC_7(VAR_3, 16, 16 * VAR_5);
  FUNC_6(VAR_3);
 }
}
