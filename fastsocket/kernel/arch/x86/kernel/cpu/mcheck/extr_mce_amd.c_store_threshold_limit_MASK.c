
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tr ;
struct threshold_block {unsigned long threshold_limit; int cpu; } ;
struct thresh_restart {unsigned long old_limit; struct threshold_block* b; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct thresh_restart*,int ,int) ;
 int FUNC_1 (int ,int ,struct thresh_restart*,int) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t
FUNC_3(struct threshold_block *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct thresh_restart VAR_6;
 unsigned long VAR_7;

 if (FUNC_2(VAR_4, 0, &VAR_7) < 0)
  return -VAR_0;

 if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 if (VAR_7 < 1)
  VAR_7 = 1;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.old_limit = VAR_3->threshold_limit;
 VAR_3->threshold_limit = VAR_7;
 VAR_6.b = VAR_3;

 FUNC_1(VAR_3->cpu, VAR_2, &VAR_6, 1);

 return VAR_5;
}
