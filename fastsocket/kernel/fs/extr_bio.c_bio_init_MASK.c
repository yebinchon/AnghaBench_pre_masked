
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_flags; int bi_comp_cpu; int bi_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bio*,int ,int) ;

void FUNC_2(struct bio *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->bi_flags = 1 << VAR_0;
 VAR_1->bi_comp_cpu = -1;
 FUNC_0(&VAR_1->bi_cnt, 1);
}
