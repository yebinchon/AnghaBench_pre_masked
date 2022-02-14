
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {int txduty; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct loopback_dev *VAR_3 = VAR_1->priv;

 if (VAR_2 < 1 || VAR_2 > 99) {
  FUNC_0("invalid duty cycle: %u\n", VAR_2);
  return -VAR_0;
 }

 FUNC_0("setting duty cycle: %u\n", VAR_2);
 VAR_3->txduty = VAR_2;
 return 0;
}
