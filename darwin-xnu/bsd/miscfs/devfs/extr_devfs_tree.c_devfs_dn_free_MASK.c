
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dn_links; scalar_t__ dn_refcount; int dn_lflags; struct TYPE_4__** dn_prevsiblingp; struct TYPE_4__* dn_nextsibling; } ;
typedef TYPE_1__ devnode_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(devnode_t * VAR_1)
{
 if(--VAR_1->dn_links <= 0 )
 {

  if (VAR_1->dn_nextsibling != VAR_1) {
   devnode_t * * VAR_2 = VAR_1->dn_prevsiblingp;
   *VAR_2 = VAR_1->dn_nextsibling;
   VAR_1->dn_nextsibling->dn_prevsiblingp = VAR_2;

  }


  if (VAR_1->dn_refcount == 0) {
      FUNC_0(VAR_1);
  }
  else {
      VAR_1->dn_lflags |= VAR_0;
  }
 }
}
