
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neofb_par {int* CRTC; int * Attribute; int * Graphics; int * Sequencer; int MiscOutReg; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ) ;

__attribute__((used)) static void FUNC_7(const struct fb_info *VAR_1,
    const struct neofb_par *VAR_2)
{
 int VAR_3;

 FUNC_3(((void*)0), VAR_0, VAR_2->MiscOutReg);

 for (VAR_3 = 1; VAR_3 < 5; VAR_3++)
  FUNC_6(((void*)0), VAR_3, VAR_2->Sequencer[VAR_3]);


 FUNC_4(((void*)0), 17, VAR_2->CRTC[17] & ~0x80);

 for (VAR_3 = 0; VAR_3 < 25; VAR_3++)
  FUNC_4(((void*)0), VAR_3, VAR_2->CRTC[VAR_3]);

 for (VAR_3 = 0; VAR_3 < 9; VAR_3++)
  FUNC_5(((void*)0), VAR_3, VAR_2->Graphics[VAR_3]);

 FUNC_1();

 for (VAR_3 = 0; VAR_3 < 21; VAR_3++)
  FUNC_2(VAR_3, VAR_2->Attribute[VAR_3]);

 FUNC_0();
}
