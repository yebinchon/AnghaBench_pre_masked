
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int rxq_cnt; int* rss_ind_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_2)
{
 int VAR_3;

 if (!FUNC_1(VAR_2, VAR_0))
  return;

 if (VAR_2->rxq_cnt == 1) {
  FUNC_0(&VAR_2->rss_ind_tbl[0], 0, sizeof(VAR_2->rss_ind_tbl));
  return;
 }


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->rss_ind_tbl[VAR_3] >= VAR_2->rxq_cnt)
   break;
 }

 if (VAR_3 != VAR_1)
  FUNC_2(VAR_2, VAR_2->rxq_cnt);
}
