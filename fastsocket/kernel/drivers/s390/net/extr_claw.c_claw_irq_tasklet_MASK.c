
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct claw_privbk {int dummy; } ;
struct chbk {int flag_a; scalar_t__ ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ,void*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3 ( unsigned long VAR_2 )
{
 struct chbk * VAR_3;
        struct net_device *VAR_4;
        struct claw_privbk * VAR_5;

 VAR_3 = (struct chbk *) VAR_2;
        VAR_4 = (struct net_device *)VAR_3->ndev;
 FUNC_0(4, VAR_1, "IRQtask");
 VAR_5 = (struct claw_privbk *)VAR_4->ml_priv;
        FUNC_2(VAR_4);
        FUNC_1(VAR_0, (void *)&VAR_3->flag_a);
 FUNC_0(4, VAR_1, "TskletXt");
        return;
}
