
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short STS; unsigned short* Parm; } ;
struct net_local {TYPE_1__ ssb; } ;
struct net_device {int dummy; } ;
typedef TYPE_1__ SSB ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct net_local *VAR_3 = FUNC_0(VAR_2);
 SSB *VAR_4 = &VAR_3->ssb;







 VAR_4->STS = (unsigned short) -1;
 VAR_4->Parm[0] = (unsigned short) -1;
 VAR_4->Parm[1] = (unsigned short) -1;
 VAR_4->Parm[2] = (unsigned short) -1;




 FUNC_1(VAR_2, VAR_1 | VAR_0);

 return;
}
