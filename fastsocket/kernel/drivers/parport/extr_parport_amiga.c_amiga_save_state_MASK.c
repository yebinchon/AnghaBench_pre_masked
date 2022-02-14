
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int statusdir; int datadir; int data; } ;
struct TYPE_6__ {TYPE_1__ amiga; } ;
struct parport_state {TYPE_2__ u; } ;
struct parport {int dummy; } ;
struct TYPE_8__ {int ddrb; int prb; } ;
struct TYPE_7__ {int pra; int ddra; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_2, struct parport_state *VAR_3)
{
 FUNC_0();
 VAR_3->u.amiga.data = VAR_0.prb;
 VAR_3->u.amiga.datadir = VAR_0.ddrb;
 VAR_3->u.amiga.status = VAR_1.pra & 7;
 VAR_3->u.amiga.statusdir = VAR_1.ddra & 7;
 FUNC_0();
}
