
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold_block {int cpu; } ;
struct thresh_restart {int reset; int old_limit; struct threshold_block* b; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,struct thresh_restart*,int) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct threshold_block *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct thresh_restart VAR_4 = { .b = VAR_1, .reset = 1, .old_limit = 0 };

 FUNC_0(VAR_1->cpu, VAR_0, &VAR_4, 1);
 return 1;
}
