
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int * dir_dev; } ;
struct net_device {char* name; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int *) ;
 int * VAR_0 ;

void FUNC_2(struct net_device *VAR_1)
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_0(VAR_1);
 if (VAR_2->dir_dev) {
  FUNC_1("stats-hw", VAR_2->dir_dev);
  FUNC_1("stats-tx", VAR_2->dir_dev);
  FUNC_1("stats-rx", VAR_2->dir_dev);
  FUNC_1("registers", VAR_2->dir_dev);
  FUNC_1(VAR_1->name, VAR_0);
  VAR_2->dir_dev = ((void*)0);
 }
}
