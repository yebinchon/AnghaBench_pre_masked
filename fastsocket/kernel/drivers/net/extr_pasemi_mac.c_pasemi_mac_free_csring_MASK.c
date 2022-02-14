
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac_csring {int fun; int chan; int * events; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pasemi_mac_csring *VAR_0)
{
 FUNC_4(&VAR_0->chan);
 FUNC_1(VAR_0->events[0]);
 FUNC_1(VAR_0->events[1]);
 FUNC_3(&VAR_0->chan);
 FUNC_0(&VAR_0->chan);
 FUNC_2(VAR_0->fun);
}
