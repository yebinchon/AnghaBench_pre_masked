
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {int idle; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0, bool VAR_1)
{
 struct loopback_dev *VAR_2 = VAR_0->priv;

 if (VAR_2->idle != VAR_1) {
  FUNC_0("%sing idle mode\n", VAR_1 ? "enter" : "exit");
  VAR_2->idle = VAR_1;
 }
}
