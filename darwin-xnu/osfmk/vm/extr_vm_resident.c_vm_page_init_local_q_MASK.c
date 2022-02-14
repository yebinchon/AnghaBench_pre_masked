
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpl {scalar_t__ vpl_external_count; scalar_t__ vpl_internal_count; scalar_t__ vpl_count; int vpl_queue; } ;
struct TYPE_2__ {struct vpl vpl; } ;
struct vplq {TYPE_1__ vpl_un; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct vpl*,int *,int *) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct vplq* VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_4 (int *) ;

void
FUNC_5()
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 struct vplq *VAR_7;

 VAR_5 = FUNC_3();




 if (VAR_5 >= 2) {







  VAR_7 = (struct vplq *)FUNC_2(FUNC_0(VAR_5 * sizeof(struct vplq)));


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   struct vpl *VAR_8;

   VAR_8 = &VAR_7[VAR_6].vpl_un.vpl;
   FUNC_1(VAR_8, &VAR_2, &VAR_1);
   FUNC_4(&VAR_8->vpl_queue);
   VAR_8->vpl_count = 0;
   VAR_8->vpl_internal_count = 0;
   VAR_8->vpl_external_count = 0;
  }
  VAR_4 = VAR_5;

  VAR_3 = (struct vplq *)VAR_7;
 }
}
