
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_private {int napi; } ;
struct net_device {int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_1(VAR_1);

 VAR_1->trans_start = VAR_0;
 FUNC_0(&VAR_2->napi);
 FUNC_2(VAR_1);
}
