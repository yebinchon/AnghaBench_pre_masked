
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port {size_t id; TYPE_1__* plat; } ;
struct TYPE_4__ {int tx; int txdone; int rx; int rxfree; } ;
struct TYPE_3__ {int txreadyq; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct port *VAR_1)
{
 FUNC_0(VAR_0[VAR_1->id].rxfree);
 FUNC_0(VAR_0[VAR_1->id].rx);
 FUNC_0(VAR_0[VAR_1->id].txdone);
 FUNC_0(VAR_0[VAR_1->id].tx);
 FUNC_0(VAR_1->plat->txreadyq);
}
