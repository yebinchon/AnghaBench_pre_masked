
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; scalar_t__ invert_led; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sd*,int ,int) ;
 int FUNC_1 (struct sd*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_3, int VAR_4)
{
 if (VAR_3->invert_led)
  VAR_4 = !VAR_4;

 switch (VAR_3->bridge) {

 case 131:
  FUNC_0(VAR_3, VAR_1, VAR_4);
  break;
 case 130:
 case 129:
  FUNC_1(VAR_3, VAR_2, 0x02 * VAR_4, 0x02);
  break;
 case 128:
  FUNC_1(VAR_3, VAR_0, VAR_4, 1);
  break;
 }
}
