
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct zsRcCell {scalar_t__ rxRssi; int probingTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(struct zsRcCell* VAR_3, u16_t VAR_4)
{

    if ((VAR_3->rxRssi - VAR_4) > VAR_2)
    {

        VAR_3->probingTime -= VAR_1/VAR_0;
    }


    VAR_3->rxRssi = (((VAR_3->rxRssi*7) + VAR_4)+4) >> 3;
    return;
}
