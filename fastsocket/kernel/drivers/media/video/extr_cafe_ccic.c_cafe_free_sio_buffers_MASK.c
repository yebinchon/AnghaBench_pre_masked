
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cafe_camera {int n_sbufs; int sb_full; int sb_avail; TYPE_1__* sb_bufs; } ;
struct TYPE_2__ {scalar_t__ mapcount; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cafe_camera *VAR_1)
{
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < VAR_1->n_sbufs; VAR_2++)
  if (VAR_1->sb_bufs[VAR_2].mapcount > 0)
   return -VAR_0;



 for (VAR_2 = 0; VAR_2 < VAR_1->n_sbufs; VAR_2++)
  FUNC_2(VAR_1->sb_bufs[VAR_2].buffer);
 VAR_1->n_sbufs = 0;
 FUNC_1(VAR_1->sb_bufs);
 VAR_1->sb_bufs = ((void*)0);
 FUNC_0(&VAR_1->sb_avail);
 FUNC_0(&VAR_1->sb_full);
 return 0;
}
