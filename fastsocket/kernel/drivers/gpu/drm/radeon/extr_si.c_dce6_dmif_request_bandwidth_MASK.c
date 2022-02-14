
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct dce6_wm_params {int disp_clk; int sclk; } ;
struct TYPE_7__ {void* full; } ;
typedef TYPE_1__ fixed20_12 ;


 int FUNC_0 (struct dce6_wm_params*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (TYPE_1__,TYPE_1__) ;
 void* FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static u32 FUNC_6(struct dce6_wm_params *VAR_0)
{

 fixed20_12 VAR_1;
 fixed20_12 VAR_2, VAR_3, VAR_4;
 fixed20_12 VAR_5, VAR_6, VAR_7;
 u32 VAR_8;

 VAR_5.full = FUNC_1(1000);
 VAR_2.full = FUNC_1(VAR_0->disp_clk);
 VAR_2.full = FUNC_2(VAR_2, VAR_5);
 VAR_5.full = FUNC_1(FUNC_0(VAR_0) / 2);
 VAR_6 = FUNC_3(VAR_5, VAR_2);

 VAR_5.full = FUNC_1(1000);
 VAR_3.full = FUNC_1(VAR_0->sclk);
 VAR_3.full = FUNC_2(VAR_3, VAR_5);
 VAR_5.full = FUNC_1(FUNC_0(VAR_0));
 VAR_7 = FUNC_3(VAR_5, VAR_3);

 VAR_5.full = FUNC_1(10);
 VAR_1.full = FUNC_1(8);
 VAR_1.full = FUNC_2(VAR_1, VAR_5);

 VAR_8 = FUNC_5(FUNC_4(VAR_6), FUNC_4(VAR_7));

 VAR_5.full = FUNC_1(VAR_8);
 VAR_4.full = FUNC_3(VAR_5, VAR_1);

 return FUNC_4(VAR_4);
}
