
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_private {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lance_private*,int ) ;
 int FUNC_1 (struct lance_private*,int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

int FUNC_5 (struct net_device *VAR_2)
{
        struct lance_private *VAR_3 = FUNC_3(VAR_2);

 FUNC_4 (VAR_2);


        FUNC_0(VAR_3, VAR_1);
        FUNC_1(VAR_3, VAR_0);

        FUNC_2(VAR_3->irq, VAR_2);

        return 0;
}
