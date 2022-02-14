
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_data {int cpu_event; int open; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct salinfo_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct salinfo_data *VAR_1)
{
 unsigned long VAR_2;
 if (!VAR_1->open)
  return;
 if (!FUNC_0(VAR_1->cpu_event)) {
  FUNC_2(&VAR_0, VAR_2);
  FUNC_1(VAR_1);
  FUNC_3(&VAR_0, VAR_2);
 }
}
