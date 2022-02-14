
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct chbk {scalar_t__ claw_state; struct net_device* ndev; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 ( struct chbk *VAR_2 )
{

        struct net_device *VAR_3=VAR_2->ndev;

 FUNC_0(4, VAR_1, "w_retry");
        if (VAR_2->claw_state == VAR_0) {
         return;
        }
 FUNC_1( VAR_3 );
 FUNC_0(4, VAR_1, "rtry_xit");
        return;
}
