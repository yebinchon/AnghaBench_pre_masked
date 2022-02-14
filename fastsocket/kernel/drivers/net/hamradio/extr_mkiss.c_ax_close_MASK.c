
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mkiss {TYPE_1__* tty; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct mkiss* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct mkiss *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->tty)
  FUNC_0(VAR_0, &VAR_2->tty->flags);

 FUNC_2(VAR_1);

 return 0;
}
