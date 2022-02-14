
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int* hwecc_cant_correct; int * done_buff; scalar_t__ page_size; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;
 int FUNC_3 (struct sh_flctl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct sh_flctl*,int *,int) ;
 int FUNC_7 (struct sh_flctl*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mtd_info*,int,int) ;
 int FUNC_10 (struct sh_flctl*) ;
 int FUNC_11 (struct sh_flctl*) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static void FUNC_13(struct mtd_info *VAR_4, int VAR_5)
{
 struct sh_flctl *VAR_6 = FUNC_5(VAR_4);
 int VAR_7, VAR_8;

 if (VAR_6->page_size)
  VAR_8 = 4;
 else
  VAR_8 = 1;

 FUNC_12(FUNC_8(FUNC_3(VAR_6)) | VAR_0 | VAR_3,
   FUNC_3(VAR_6));

 FUNC_9(VAR_4, VAR_1,
  (VAR_2 << 8) | VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  int VAR_9;

  FUNC_4(VAR_6);
  FUNC_12(FUNC_8(FUNC_2(VAR_6)) | 1, FUNC_2(VAR_6));
  FUNC_12(VAR_5 << 2 | VAR_7, FUNC_1(VAR_6));

  FUNC_10(VAR_6);
  FUNC_7(VAR_6, 512, 512 * VAR_7);

  VAR_9 = FUNC_6(VAR_6,
   &VAR_6->done_buff[VAR_4->writesize + 16 * VAR_7],
   VAR_7);

  if (VAR_9)
   VAR_6->hwecc_cant_correct[VAR_7] = 1;

  FUNC_12(0x0, FUNC_0(VAR_6));
  FUNC_11(VAR_6);
 }
 FUNC_12(FUNC_8(FUNC_3(VAR_6)) & ~(VAR_0 | VAR_3),
   FUNC_3(VAR_6));
}
