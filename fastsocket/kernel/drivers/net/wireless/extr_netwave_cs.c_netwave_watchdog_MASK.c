
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1) {

    FUNC_0(1, "%s: netwave_watchdog: watchdog timer expired\n", VAR_1->name);
    FUNC_2(VAR_1);
    VAR_1->trans_start = VAR_0;
    FUNC_1(VAR_1);
}
