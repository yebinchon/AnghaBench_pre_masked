
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_hdr_s390 {unsigned int cpu_cnt; int * lc_vec; int real_cpu_cnt; } ;
struct dump_hdr_lkcd_asm {int hdr_size; unsigned int cpu_cnt; int * lc_vec; int real_cpu_cnt; scalar_t__ version; int magic_number; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dump_hdr_s390 *VAR_1,
            struct dump_hdr_lkcd_asm *VAR_2)
{
 unsigned int VAR_3;

 VAR_2->magic_number = VAR_0;
 VAR_2->version = 0;
 VAR_2->hdr_size = sizeof(*VAR_2);
 VAR_2->cpu_cnt = VAR_1->cpu_cnt;
 VAR_2->real_cpu_cnt = VAR_1->real_cpu_cnt;
 for (VAR_3 = 0; VAR_3 < VAR_2->cpu_cnt; VAR_3++)
  VAR_2->lc_vec[VAR_3] = VAR_1->lc_vec[VAR_3];
}
