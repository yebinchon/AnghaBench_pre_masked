
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisax_d_if {int erq; TYPE_1__* cs; } ;
struct TYPE_4__ {scalar_t__ typ; } ;
struct TYPE_3__ {size_t cardnr; } ;


 int FUNC_0 (size_t) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hisax_d_if *VAR_1)
{
 VAR_0[VAR_1->cs->cardnr].typ = 0;
 FUNC_0(VAR_1->cs->cardnr);
 FUNC_1(&VAR_1->erq);
}
