
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uarc_size; } ;
struct mthca_dev {TYPE_3__* db_tab; TYPE_1__ uar_table; } ;
struct TYPE_6__ {int npages; int min_group2; TYPE_2__* page; scalar_t__ max_group1; int mutex; } ;
struct TYPE_5__ {int * db_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mthca_dev *VAR_3)
{
 int VAR_4;

 if (!FUNC_2(VAR_3))
  return 0;

 VAR_3->db_tab = FUNC_1(sizeof *VAR_3->db_tab, VAR_1);
 if (!VAR_3->db_tab)
  return -VAR_0;

 FUNC_3(&VAR_3->db_tab->mutex);

 VAR_3->db_tab->npages = VAR_3->uar_table.uarc_size / VAR_2;
 VAR_3->db_tab->max_group1 = 0;
 VAR_3->db_tab->min_group2 = VAR_3->db_tab->npages - 1;

 VAR_3->db_tab->page = FUNC_1(VAR_3->db_tab->npages *
        sizeof *VAR_3->db_tab->page,
        VAR_1);
 if (!VAR_3->db_tab->page) {
  FUNC_0(VAR_3->db_tab);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->db_tab->npages; ++VAR_4)
  VAR_3->db_tab->page[VAR_4].db_rec = ((void*)0);

 return 0;
}
