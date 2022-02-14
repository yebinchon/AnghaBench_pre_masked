
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int dummy; } ;


 int FUNC_0 (struct savagefb_par*) ;
 int FUNC_1 (struct savagefb_par*) ;
 unsigned char FUNC_2 (int,struct savagefb_par*) ;
 int FUNC_3 (int,unsigned char,struct savagefb_par*) ;
 int FUNC_4 (struct savagefb_par*,int) ;

__attribute__((used)) static void FUNC_5(struct savagefb_par *VAR_0, int VAR_1)
{
 unsigned char VAR_2;

 if (VAR_1) {



  VAR_2 = FUNC_2(0x01, VAR_0);

  FUNC_4(VAR_0, 1);
  FUNC_3(0x01, VAR_2 | 0x20, VAR_0);

  FUNC_1(VAR_0);
 } else {




  VAR_2 = FUNC_2(0x01, VAR_0);

  FUNC_3(0x01, VAR_2 & ~0x20, VAR_0);
  FUNC_4(VAR_0, 0);

  FUNC_0(VAR_0);
 }
}
