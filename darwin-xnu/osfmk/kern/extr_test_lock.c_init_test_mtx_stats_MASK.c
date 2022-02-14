
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lck_mtx_test_stats_elem {int dummy; } ;
struct TYPE_3__ {int lock; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_7;

 FUNC_2(&VAR_6);
 FUNC_3(&VAR_5, "testlck_stats_mtx", &VAR_6);
 FUNC_1(&VAR_4);

 FUNC_0(&VAR_2, VAR_1);
 for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++){
  FUNC_5(&VAR_3[VAR_7], 0 , sizeof(struct lck_mtx_test_stats_elem));
  VAR_3[VAR_7].min = ~0;
  FUNC_4(&VAR_3[VAR_7].lock, &VAR_5, &VAR_4);
 }
}
