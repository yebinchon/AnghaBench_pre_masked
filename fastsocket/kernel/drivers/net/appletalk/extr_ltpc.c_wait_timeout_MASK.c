
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1)
{


 int VAR_2;



 for(VAR_2=0;VAR_2<200000;VAR_2++) {
  if ( VAR_1 != FUNC_0(VAR_0->base_addr+6) ) return 0;
  FUNC_1(100);
 }
 return 1;
}
