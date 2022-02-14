
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int OpenCommandIssued; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct net_local *VAR_2 = FUNC_0(VAR_1);

 if(VAR_2->OpenCommandIssued)
  return;

 VAR_2->OpenCommandIssued = 1;
 FUNC_1(VAR_1, VAR_0);

 return;
}
