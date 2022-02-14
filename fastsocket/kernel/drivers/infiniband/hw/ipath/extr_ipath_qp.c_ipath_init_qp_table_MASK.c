
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last; int max; int nmaps; TYPE_2__* map; int * table; } ;
struct ipath_ibdev {TYPE_1__ qp_table; } ;
struct TYPE_4__ {int * page; int n_free; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ) ;

int FUNC_3(struct ipath_ibdev *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_3->qp_table.last = 1;
 VAR_3->qp_table.max = VAR_4;
 VAR_3->qp_table.nmaps = 1;
 VAR_3->qp_table.table = FUNC_2(VAR_4 * sizeof(*VAR_3->qp_table.table),
           VAR_2);
 if (VAR_3->qp_table.table == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto bail;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->qp_table.map); VAR_5++) {
  FUNC_1(&VAR_3->qp_table.map[VAR_5].n_free, VAR_0);
  VAR_3->qp_table.map[VAR_5].page = ((void*)0);
 }

 VAR_6 = 0;

bail:
 return VAR_6;
}
