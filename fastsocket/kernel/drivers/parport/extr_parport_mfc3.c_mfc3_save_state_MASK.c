
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int statusdir; int status; int datadir; int data; } ;
struct TYPE_4__ {TYPE_2__ amiga; } ;
struct parport_state {TYPE_1__ u; } ;
struct parport {int dummy; } ;
struct TYPE_6__ {int cra; int pddrb; int ppra; int crb; int pprb; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct parport*) ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_1, struct parport_state *VAR_2)
{
 VAR_2->u.amiga.data = FUNC_0(VAR_1)->pprb;
 FUNC_0(VAR_1)->crb &= ~VAR_0;
 VAR_2->u.amiga.datadir = FUNC_0(VAR_1)->pddrb;
 FUNC_0(VAR_1)->crb |= VAR_0;
 VAR_2->u.amiga.status = FUNC_0(VAR_1)->ppra;
 FUNC_0(VAR_1)->cra &= ~VAR_0;
 VAR_2->u.amiga.statusdir = FUNC_0(VAR_1)->pddrb;
 FUNC_0(VAR_1)->cra |= VAR_0;
}
