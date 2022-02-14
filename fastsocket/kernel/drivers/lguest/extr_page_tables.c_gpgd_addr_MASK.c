
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_cpu {size_t cpu_pgd; TYPE_2__* lg; } ;
typedef int pgd_t ;
struct TYPE_4__ {TYPE_1__* pgdirs; } ;
struct TYPE_3__ {unsigned long gpgdir; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct lg_cpu *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = VAR_2 >> (VAR_0);
 return VAR_1->lg->pgdirs[VAR_1->cpu_pgd].gpgdir + VAR_3 * sizeof(pgd_t);
}
