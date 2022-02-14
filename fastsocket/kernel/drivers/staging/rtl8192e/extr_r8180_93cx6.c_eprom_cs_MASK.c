
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3, short VAR_4)
{
 if(VAR_4)
  FUNC_3(VAR_3, VAR_0,
          (1<<VAR_1) | FUNC_1(VAR_3, VAR_0));

 else
  FUNC_3(VAR_3, VAR_0, FUNC_1(VAR_3, VAR_0) &~(1<<VAR_1));


 FUNC_0(VAR_3);
 FUNC_2(VAR_2);
}
