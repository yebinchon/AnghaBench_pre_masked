
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bchannel {scalar_t__ rcount; int rqueue; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct bchannel*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct bchannel *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->rqueue);
 VAR_0->rcount = 0;
 FUNC_0();
 return 0;
}
