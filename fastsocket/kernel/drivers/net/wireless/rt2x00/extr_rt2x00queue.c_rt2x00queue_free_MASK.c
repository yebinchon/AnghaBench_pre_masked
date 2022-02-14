
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int * bcn; int * tx; int * rx; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rt2x00_dev *VAR_0)
{
 FUNC_0(VAR_0->rx);
 VAR_0->rx = ((void*)0);
 VAR_0->tx = ((void*)0);
 VAR_0->bcn = ((void*)0);
}
