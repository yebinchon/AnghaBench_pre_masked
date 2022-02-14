
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int* done_buff; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct sh_flctl*,int,int) ;
 int FUNC_4 (struct mtd_info*,int,int) ;
 int FUNC_5 (struct mtd_info*,int,int) ;
 int FUNC_6 (struct sh_flctl*) ;
 int FUNC_7 (struct sh_flctl*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct mtd_info *VAR_2, int VAR_3)
{
 struct sh_flctl *VAR_4 = FUNC_2(VAR_2);

 FUNC_5(VAR_2, VAR_0,
  (VAR_1 << 8) | VAR_0);

 FUNC_1(VAR_4);
 if (VAR_4->page_size) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < 16 * 3; VAR_5++)
   VAR_4->done_buff[VAR_5] = 0xFF;

  FUNC_4(VAR_2, 3 * 528 + 512, VAR_3);
  FUNC_8(16, FUNC_0(VAR_4));

  FUNC_6(VAR_4);
  FUNC_3(VAR_4, 16, 16 * 3);
  FUNC_7(VAR_4);
 } else {

  FUNC_4(VAR_2, 512, VAR_3);
  FUNC_8(16, FUNC_0(VAR_4));

  FUNC_6(VAR_4);
  FUNC_3(VAR_4, 16, 0);
  FUNC_7(VAR_4);
 }
}
