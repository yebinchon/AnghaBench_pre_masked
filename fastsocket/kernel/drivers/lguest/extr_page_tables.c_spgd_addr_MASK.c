
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct lg_cpu {TYPE_2__* lg; } ;
typedef int pgd_t ;
struct TYPE_4__ {TYPE_1__* pgdirs; } ;
struct TYPE_3__ {int * pgdir; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct lg_cpu*,char*) ;
 unsigned int FUNC_1 (unsigned long) ;

__attribute__((used)) static pgd_t *FUNC_2(struct lg_cpu *VAR_1, u32 VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_3);



 if (VAR_4 >= VAR_0) {
  FUNC_0(VAR_1, "attempt to access switcher pages");
  VAR_4 = 0;
 }


 return &VAR_1->lg->pgdirs[VAR_2].pgdir[VAR_4];
}
