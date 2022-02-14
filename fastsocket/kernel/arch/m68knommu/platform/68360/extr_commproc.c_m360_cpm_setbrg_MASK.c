
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {TYPE_1__* brgc; } ;
struct TYPE_3__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void
FUNC_0(uint VAR_3, uint VAR_4)
{
 volatile uint *VAR_5;




 VAR_5 = (volatile uint *)(&VAR_2->brgc[0].l);
 VAR_5 += VAR_3;
 *VAR_5 = ((VAR_0 / VAR_4 - 1) << 1) | VAR_1;
}
