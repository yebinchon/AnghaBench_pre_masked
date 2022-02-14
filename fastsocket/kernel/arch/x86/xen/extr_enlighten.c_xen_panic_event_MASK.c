
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_shutdown {int reason; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct sched_shutdown*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct sched_shutdown VAR_6 = { .reason = VAR_2};

 if (FUNC_1(VAR_1, &VAR_6))
  FUNC_0();
 return VAR_0;
}
