
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mkiss {int * tty; } ;


 int VAR_0 ;
 struct mkiss* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct mkiss *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->tty == ((void*)0))
  return -VAR_0;

 return 0;
}
