
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm3130 {int* regs; int alarm; int client; } ;
struct device {int dummy; } ;





 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct fm3130* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_4, int VAR_5)
{
 struct fm3130 *VAR_6 = FUNC_1(VAR_4);

 VAR_6->regs[VAR_0] =
  FUNC_2(VAR_6->client, VAR_0);
 switch (VAR_5) {
 case 130:
  VAR_6->regs[VAR_0] &=
   ~(VAR_3 |
   VAR_2);
  break;
 case 128:
  VAR_6->regs[VAR_0] |= VAR_3;
  break;
 case 129:
  VAR_6->regs[VAR_0] |= VAR_2;
  break;
 default:
  FUNC_0(VAR_4, "invalid mode %d\n", VAR_5);
  break;
 }

 if (VAR_6->regs[VAR_0] & VAR_1) {
  VAR_6->alarm = 1;
  VAR_6->regs[VAR_0] &= ~VAR_1;
 }
 FUNC_3(VAR_6->client,
   VAR_0, VAR_6->regs[VAR_0]);
}
