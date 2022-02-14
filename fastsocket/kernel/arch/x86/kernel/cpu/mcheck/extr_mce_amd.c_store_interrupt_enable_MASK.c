
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tr ;
struct threshold_block {int interrupt_enable; int cpu; int interrupt_capable; } ;
struct thresh_restart {struct threshold_block* b; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct thresh_restart*,int ,int) ;
 int FUNC_1 (int ,int ,struct thresh_restart*,int) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_3(struct threshold_block *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct thresh_restart VAR_5;
 unsigned long VAR_6;

 if (!VAR_2->interrupt_capable)
  return -VAR_0;

 if (FUNC_2(VAR_3, 0, &VAR_6) < 0)
  return -VAR_0;

 VAR_2->interrupt_enable = !!VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.b = VAR_2;

 FUNC_1(VAR_2->cpu, VAR_1, &VAR_5, 1);

 return VAR_4;
}
