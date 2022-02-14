
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct h_epas {int dummy; } ;
struct ehea_cq_attr {unsigned long act_nr_of_cqes; unsigned long nr_pages; int max_nr_of_cqes; int cq_token; int eq_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,unsigned long*,unsigned long const,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct h_epas*,unsigned long,unsigned long) ;

u64 FUNC_2(const u64 VAR_3,
        struct ehea_cq_attr *VAR_4,
        u64 *VAR_5, struct h_epas *VAR_6)
{
 u64 VAR_7;
 unsigned long VAR_8[VAR_2];

 VAR_7 = FUNC_0(VAR_0,
     VAR_8,
     VAR_3,
     VAR_1,
     VAR_4->eq_handle,
     VAR_4->cq_token,
     VAR_4->max_nr_of_cqes,
     0, 0, 0, 0);

 *VAR_5 = VAR_8[0];
 VAR_4->act_nr_of_cqes = VAR_8[3];
 VAR_4->nr_pages = VAR_8[4];

 if (!VAR_7)
  FUNC_1(VAR_6, VAR_8[5], VAR_8[6]);

 return VAR_7;
}
