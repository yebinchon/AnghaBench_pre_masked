
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int lcdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned long FUNC_5(void *VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = VAR_3;

 FUNC_3(VAR_4->lcdc, VAR_1, 0x01000000);
 FUNC_2(VAR_4->lcdc, VAR_2, 2, 0);
 FUNC_3(VAR_4->lcdc, VAR_0, 1 | (FUNC_0(VAR_4) ? 2 : 0));
 FUNC_4(1);
 FUNC_2(VAR_4->lcdc, VAR_2, 2, 0);

 return FUNC_1(VAR_4->lcdc, VAR_1) & 0x3ffff;
}
