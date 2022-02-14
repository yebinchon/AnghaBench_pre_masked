
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void FUNC_4(struct net_device *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 int VAR_8,VAR_9,VAR_10;

 VAR_8 = FUNC_0(240);
 VAR_9 = FUNC_0(60);
 VAR_10 = FUNC_0(240);

 FUNC_2(VAR_5, VAR_4,
   VAR_10<<VAR_2| VAR_9<<VAR_3);

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_7 &= ~VAR_1;

 for(VAR_6=0;VAR_6<=VAR_8;VAR_6++)
  VAR_7 |= (1<<VAR_6);

 FUNC_3(VAR_5, VAR_0, VAR_7);
}
