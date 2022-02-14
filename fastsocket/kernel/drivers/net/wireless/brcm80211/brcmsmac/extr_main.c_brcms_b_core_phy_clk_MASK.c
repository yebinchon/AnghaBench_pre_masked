
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {int phyclk; int unit; int d11core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcms_hardware*,int,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_4, bool VAR_5)
{
 FUNC_1(VAR_4->d11core, "wl%d: clk %d\n", VAR_4->unit, VAR_5);

 VAR_4->phyclk = VAR_5;

 if (VAR_0 == VAR_5) {

  FUNC_0(VAR_4, (VAR_3 | VAR_1 | VAR_2),
       (VAR_3 | VAR_1));
  FUNC_2(1);
  FUNC_0(VAR_4, (VAR_3 | VAR_1), VAR_3);
  FUNC_2(1);

 } else {

  FUNC_0(VAR_4, (VAR_3 | VAR_1), VAR_1);
  FUNC_2(1);
  FUNC_0(VAR_4, VAR_1, 0);
  FUNC_2(1);

 }
}
