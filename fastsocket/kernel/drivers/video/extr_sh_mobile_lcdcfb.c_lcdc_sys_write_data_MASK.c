
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int lcdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, unsigned long VAR_4)
{
 struct sh_mobile_lcdc_chan *VAR_5 = VAR_3;

 FUNC_2(VAR_5->lcdc, VAR_1, VAR_4 | 0x11000000);
 FUNC_1(VAR_5->lcdc, VAR_2, 2, 0);
 FUNC_2(VAR_5->lcdc, VAR_0, 1 | (FUNC_0(VAR_5) ? 2 : 0));
 FUNC_1(VAR_5->lcdc, VAR_2, 2, 0);
}
