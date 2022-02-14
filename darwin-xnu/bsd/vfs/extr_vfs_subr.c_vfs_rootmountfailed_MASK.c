
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mount {int dummy; } ;
typedef TYPE_2__* mount_t ;
struct TYPE_9__ {TYPE_1__* mnt_vtable; } ;
struct TYPE_8__ {int vfc_refcount; } ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(mount_t VAR_1) {

 FUNC_2();
 VAR_1->mnt_vtable->vfc_refcount--;
 FUNC_3();

 FUNC_5(VAR_1);

 FUNC_4(VAR_1);





 FUNC_0(VAR_1, sizeof(struct mount), VAR_0);
}
