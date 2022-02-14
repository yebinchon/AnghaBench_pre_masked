
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_udc_struct {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct imx_udc_struct *VAR_11)
{
 int VAR_12;


 FUNC_2(0xFFFFFFFF, VAR_11->base + VAR_10);
 FUNC_2(0xFFFFFFFF, VAR_11->base + VAR_9);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_2(0x1FF, VAR_11->base + FUNC_1(VAR_12));
  FUNC_2(0x1FF, VAR_11->base + FUNC_0(VAR_12));
 }


 FUNC_2(VAR_8 | VAR_7, VAR_11->base + VAR_10);


 FUNC_2(0x1FF & ~(VAR_0 | VAR_5 | VAR_2
  | VAR_1 | VAR_3 | VAR_4),
  VAR_11->base + FUNC_1(0));
}
