
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vdesc_flags; int vdesc_offset; } ;
struct TYPE_3__ {int ** opv_desc_vector_p; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_2__** VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

void
FUNC_2(void)
{
 int VAR_4;

 FUNC_0(FUNC_1("Vnode_interface_init.\n"));



 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
  *(VAR_2[VAR_4]->opv_desc_vector_p) = ((void*)0);




 for (VAR_3 = 0, VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {

  if (VAR_1[VAR_4]->vdesc_flags & VAR_0) {
   continue;
  }
  VAR_1[VAR_4]->vdesc_offset = VAR_3;
  VAR_3++;
 }
 FUNC_0(FUNC_1 ("vfs_opv_numops=%d\n", VAR_3));
}
