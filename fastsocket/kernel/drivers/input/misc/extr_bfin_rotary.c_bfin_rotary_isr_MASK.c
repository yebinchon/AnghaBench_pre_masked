
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bfin_rot {int button_key; int input; } ;
typedef int irqreturn_t ;





 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct bfin_rot* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bfin_rot*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3;
 struct bfin_rot *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 switch (FUNC_1()) {

 case 129:
  break;

 case 128:
 case 130:
  VAR_6 = FUNC_0();
  if (VAR_6)
   FUNC_6(VAR_5, VAR_6);
  break;

 case 131:
  FUNC_5(VAR_5->input, VAR_5->button_key);
  break;

 default:
  break;
 }

 FUNC_2(VAR_1);
 FUNC_3(-1);

 return VAR_0;
}
