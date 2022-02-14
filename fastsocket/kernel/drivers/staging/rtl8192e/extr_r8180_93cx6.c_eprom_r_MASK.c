
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static short FUNC_2(struct net_device *VAR_3)
{
 short VAR_4;

 VAR_4=(FUNC_0(VAR_3, VAR_0) & (1<<VAR_2) );
 FUNC_1(VAR_1);

 if(VAR_4) return 1;
 return 0;
}
