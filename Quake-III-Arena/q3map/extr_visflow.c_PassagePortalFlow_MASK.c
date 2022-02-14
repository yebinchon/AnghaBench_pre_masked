
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* status; scalar_t__ portalflood; int plane; int winding; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_10__ {scalar_t__ mightsee; scalar_t__ depth; int portalplane; int source; TYPE_1__* portal; } ;
struct TYPE_9__ {TYPE_7__ pstack_head; TYPE_1__* base; } ;
typedef TYPE_2__ threaddata_t ;
typedef int data ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_7__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

void FUNC_3 (int VAR_4)
{
 threaddata_t VAR_5;
 int VAR_6;
 vportal_t *VAR_7;






 VAR_7 = VAR_1[VAR_4];

 if (VAR_7->removed)
 {
  VAR_7->status = VAR_2;
  return;
 }

 VAR_7->status = VAR_3;



 FUNC_2 (&VAR_5, 0, sizeof(VAR_5));
 VAR_5.base = VAR_7;

 VAR_5.pstack_head.portal = VAR_7;
 VAR_5.pstack_head.source = VAR_7->winding;
 VAR_5.pstack_head.portalplane = VAR_7->plane;
 VAR_5.pstack_head.depth = 0;
 for (VAR_6=0 ; VAR_6<VAR_0 ; VAR_6++)
  ((long *)VAR_5.pstack_head.mightsee)[VAR_6] = ((long *)VAR_7->portalflood)[VAR_6];

 FUNC_0 (VAR_7, &VAR_5, &VAR_5.pstack_head);

 VAR_7->status = VAR_2;







}
