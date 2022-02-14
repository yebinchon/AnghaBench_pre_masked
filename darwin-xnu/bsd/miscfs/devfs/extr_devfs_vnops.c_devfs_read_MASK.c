
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_read_args {TYPE_3__* a_vp; int a_context; int a_uio; } ;
struct TYPE_5__ {int dn_access; } ;
typedef TYPE_1__ devnode_t ;
struct TYPE_6__ {int v_type; } ;


 int VAR_0 ;

 int FUNC_0 (TYPE_3__*,int ,int ,int *,int *,int ) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct vnop_read_args *VAR_1)






{
     devnode_t * VAR_2 = FUNC_1(VAR_1->a_vp);

 switch (VAR_1->a_vp->v_type) {
   case 128: {
       VAR_2->dn_access = 1;

       return FUNC_0(VAR_1->a_vp, VAR_1->a_uio, 0, ((void*)0), ((void*)0), VAR_1->a_context);
   }
   default: {
       FUNC_2("devfs_read(): bad file type %d", VAR_1->a_vp->v_type);
       return(VAR_0);
   }
 }
}
