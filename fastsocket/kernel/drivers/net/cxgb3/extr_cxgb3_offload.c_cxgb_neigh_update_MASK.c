
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {struct net_device* dev; } ;


 int FUNC_0 (int) ;
 struct t3cdev* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct t3cdev*,struct neighbour*) ;

__attribute__((used)) static void FUNC_4(struct neighbour *VAR_0)
{
 struct net_device *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->dev;
 if (VAR_1 && (FUNC_2(VAR_1))) {
  struct t3cdev *VAR_2 = FUNC_1(VAR_1);

  FUNC_0(!VAR_2);
  FUNC_3(VAR_2, VAR_0);
 }
}
