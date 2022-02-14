
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int command; } ;
struct i596_private {TYPE_1__ scb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2, struct i596_private *VAR_3, int VAR_4) {

 if (VAR_3->scb.command && FUNC_4(VAR_2, "i596_reset", 100))
  ;

 FUNC_7(VAR_2);

 VAR_3->scb.command = VAR_0 | VAR_1;
 FUNC_0();
 FUNC_1();


 if (VAR_3->scb.command && FUNC_4(VAR_2, "i596_reset(2)", 400))
  ;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 FUNC_6(VAR_2);

 FUNC_5(VAR_2);
}
