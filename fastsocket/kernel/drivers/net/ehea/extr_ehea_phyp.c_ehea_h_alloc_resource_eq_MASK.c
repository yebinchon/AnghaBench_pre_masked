
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ehea_eq_attr {unsigned long act_nr_of_eqes; unsigned long nr_pages; unsigned long ist1; unsigned long ist2; unsigned long ist3; unsigned long ist4; int max_nr_of_eqes; int eqe_gen; scalar_t__ type; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned long*,int const,int,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_2(const u64 VAR_7,
        struct ehea_eq_attr *VAR_8, u64 *VAR_9)
{
 u64 VAR_10, VAR_11;
 unsigned long VAR_12[VAR_6];


 VAR_11 =
     FUNC_0(VAR_4, VAR_5)
     | FUNC_0(VAR_2, VAR_8->type ? 1 : 0)
     | FUNC_0(VAR_1, !VAR_8->eqe_gen)
     | FUNC_0(VAR_3, 1);

 VAR_10 = FUNC_1(VAR_0,
     VAR_12,
     VAR_7,
     VAR_11,
     VAR_8->max_nr_of_eqes,
     0, 0, 0, 0, 0, 0);

 *VAR_9 = VAR_12[0];
 VAR_8->act_nr_of_eqes = VAR_12[3];
 VAR_8->nr_pages = VAR_12[4];
 VAR_8->ist1 = VAR_12[5];
 VAR_8->ist2 = VAR_12[6];
 VAR_8->ist3 = VAR_12[7];
 VAR_8->ist4 = VAR_12[8];

 return VAR_10;
}
