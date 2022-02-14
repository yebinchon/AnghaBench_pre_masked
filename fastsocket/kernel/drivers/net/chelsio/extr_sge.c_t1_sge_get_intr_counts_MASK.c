
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_intr_counts {int dummy; } ;
struct sge {struct sge_intr_counts const stats; } ;



const struct sge_intr_counts *FUNC_0(const struct sge *VAR_0)
{
 return &VAR_0->stats;
}
