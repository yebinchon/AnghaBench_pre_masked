
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_2__ {scalar_t__ command; int status; } ;
struct i596_private {TYPE_1__ scb; } ;


 int FUNC_0 () ;
 struct i596_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_0, char *VAR_1, int VAR_2) {
 struct i596_private *VAR_3;
 int VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_0);
 while (VAR_3->scb.command) {
  if (--VAR_4 == 0) {
   FUNC_2("%s: %s timed out - stat %4.4x, cmd %4.4x\n",
          VAR_0->name, VAR_1,
          VAR_3->scb.status, VAR_3->scb.command);
   return 1;
  }
  FUNC_3(5);
  FUNC_0();
 }
 return 0;
}
