
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct namecache {int dummy; } ;
typedef int * kauth_cred_t ;
struct TYPE_5__ {int v_nc_generation; } ;
struct TYPE_4__ {scalar_t__ v_cred; scalar_t__ v_authorized_actions; int v_ncchildren; int v_nclinks; TYPE_3__* v_parent; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct namecache* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 struct namecache* FUNC_4 (int *) ;
 int FUNC_5 (struct namecache*,int) ;
 int FUNC_6 (int **) ;

void
FUNC_7(vnode_t VAR_2)
{
        struct namecache *VAR_3;
 kauth_cred_t VAR_4 = ((void*)0);

 if ((FUNC_1(&VAR_2->v_nclinks) == ((void*)0)) &&
   (FUNC_4(&VAR_2->v_ncchildren) == ((void*)0)) &&
   (VAR_2->v_cred == VAR_0) &&
   (VAR_2->v_parent == VAR_1))
         return;

 FUNC_2();

 if (VAR_2->v_parent)
         VAR_2->v_parent->v_nc_generation++;

 while ( (VAR_3 = FUNC_1(&VAR_2->v_nclinks)) )
         FUNC_5(VAR_3, 1);

 while ( (VAR_3 = FUNC_4(&VAR_2->v_ncchildren)) )
         FUNC_5(VAR_3, 1);




 VAR_4 = VAR_2->v_cred;
 VAR_2->v_cred = VAR_0;
 VAR_2->v_authorized_actions = 0;

 FUNC_3();

 if (FUNC_0(VAR_4))
         FUNC_6(&VAR_4);
}
