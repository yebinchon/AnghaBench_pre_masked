
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ portalvis; void* status; int leaf; scalar_t__ portalflood; int plane; int winding; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_10__ {scalar_t__ mightsee; scalar_t__ depth; int portalplane; int source; TYPE_1__* portal; } ;
struct TYPE_9__ {int c_chains; TYPE_7__ pstack_head; TYPE_1__* base; } ;
typedef TYPE_2__ threaddata_t ;
typedef int data ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_7__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,int,int,int,int ) ;
 TYPE_1__** VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

void FUNC_5 (int VAR_6)
{
 threaddata_t VAR_7;
 int VAR_8;
 vportal_t *VAR_9;
 int VAR_10, VAR_11;





 VAR_9 = VAR_3[VAR_6];

 if (VAR_9->removed)
 {
  VAR_9->status = VAR_4;
  return;
 }

 VAR_9->status = VAR_5;

 VAR_10 = FUNC_0 (VAR_9->portalflood, VAR_0*2);

 FUNC_3 (&VAR_7, 0, sizeof(VAR_7));
 VAR_7.base = VAR_9;

 VAR_7.pstack_head.portal = VAR_9;
 VAR_7.pstack_head.source = VAR_9->winding;
 VAR_7.pstack_head.portalplane = VAR_9->plane;
 VAR_7.pstack_head.depth = 0;
 for (VAR_8=0 ; VAR_8<VAR_1 ; VAR_8++)
  ((long *)VAR_7.pstack_head.mightsee)[VAR_8] = ((long *)VAR_9->portalflood)[VAR_8];

 FUNC_1 (VAR_9->leaf, &VAR_7, &VAR_7.pstack_head);

 VAR_9->status = VAR_4;

 VAR_11 = FUNC_0 (VAR_9->portalvis, VAR_0*2);

 FUNC_4 ("portal:%4i  mightsee:%4i  cansee:%4i (%i chains)\n",
  (int)(VAR_9 - VAR_2), VAR_10, VAR_11, VAR_7.c_chains);
}
