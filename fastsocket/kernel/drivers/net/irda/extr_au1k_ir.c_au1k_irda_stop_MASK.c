
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct au1k_private {int timer; int * irlap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct au1k_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct au1k_private *VAR_6 = FUNC_4(VAR_5);


 FUNC_7(FUNC_6(VAR_3) & ~(1<<8), VAR_3);
 FUNC_7(0, VAR_2);
 FUNC_7(0, VAR_4);
 FUNC_0();

 if (VAR_6->irlap) {
  FUNC_3(VAR_6->irlap);
  VAR_6->irlap = ((void*)0);
 }

 FUNC_5(VAR_5);
 FUNC_1(&VAR_6->timer);


 FUNC_2(VAR_1, VAR_5);
 FUNC_2(VAR_0, VAR_5);
 return 0;
}
