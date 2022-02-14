
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int wait_for_tok_int; scalar_t__ Sleeping; } ;
struct net_device {int dummy; } ;


 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct net_device *VAR_1 = (struct net_device*)VAR_0;
 struct net_local *VAR_2 = FUNC_0(VAR_1);

 if(VAR_2->Sleeping)
 {
  VAR_2->Sleeping = 0;
  FUNC_1(&VAR_2->wait_for_tok_int);
 }

 return;
}
