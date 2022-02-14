
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int dummy; } ;
struct savage_reg {int* CRTC; int * Attribute; int * Graphics; int * Sequencer; int MiscOutReg; } ;


 int FUNC_0 (struct savagefb_par*) ;
 int FUNC_1 (struct savagefb_par*) ;
 int FUNC_2 (int,int ,struct savagefb_par*) ;
 int FUNC_3 (int,int,struct savagefb_par*) ;
 int FUNC_4 (int,int ,struct savagefb_par*) ;
 int FUNC_5 (int ,struct savagefb_par*) ;
 int FUNC_6 (int,int ,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_7(struct savagefb_par *VAR_0, struct savage_reg *VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_1->MiscOutReg, VAR_0);

 for (VAR_2 = 1; VAR_2 < 5; VAR_2++)
  FUNC_6(VAR_2, VAR_1->Sequencer[VAR_2], VAR_0);



 FUNC_3(17, VAR_1->CRTC[17] & ~0x80, VAR_0);

 for (VAR_2 = 0; VAR_2 < 25; VAR_2++)
  FUNC_3(VAR_2, VAR_1->CRTC[VAR_2], VAR_0);

 for (VAR_2 = 0; VAR_2 < 9; VAR_2++)
  FUNC_4(VAR_2, VAR_1->Graphics[VAR_2], VAR_0);

 FUNC_1(VAR_0);

 for (VAR_2 = 0; VAR_2 < 21; VAR_2++)
  FUNC_2(VAR_2, VAR_1->Attribute[VAR_2], VAR_0);

 FUNC_0(VAR_0);
}
