
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int * dir_dev; } ;
struct net_device {int name; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = (struct r8192_priv *)FUNC_0(VAR_1);

 FUNC_1("dev name=======> %s\n",VAR_1->name);

 if (VAR_2->dir_dev) {

  FUNC_2("stats-tx", VAR_2->dir_dev);
  FUNC_2("stats-rx", VAR_2->dir_dev);

  FUNC_2("stats-ap", VAR_2->dir_dev);
  FUNC_2("registers", VAR_2->dir_dev);



  FUNC_2("wlan0", VAR_0);
  VAR_2->dir_dev = ((void*)0);
 }
}
