
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_private {int devlock; int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct lance_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_4 (int *) ;

int FUNC_5 (struct net_device *VAR_3)
{
        struct lance_private *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;


        if (FUNC_3(VAR_4->irq, VAR_2, VAR_1, VAR_4->name, VAR_3))
                return -VAR_0;

        VAR_5 = FUNC_0(VAR_3);
 FUNC_4(&VAR_4->devlock);
 FUNC_2 (VAR_3);

 return VAR_5;
}
