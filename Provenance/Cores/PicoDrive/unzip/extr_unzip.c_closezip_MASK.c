
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* name; } ;
struct TYPE_6__ {struct TYPE_6__* zip; scalar_t__ fp; struct TYPE_6__* ecd; struct TYPE_6__* cd; TYPE_1__ ent; } ;
typedef TYPE_2__ ZIP ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(ZIP* VAR_0) {

 FUNC_1(VAR_0->ent.name);
 FUNC_1(VAR_0->cd);
 FUNC_1(VAR_0->ecd);

 if (VAR_0->fp)
  FUNC_0(VAR_0->fp);
 FUNC_1(VAR_0->zip);
 FUNC_1(VAR_0);
}
