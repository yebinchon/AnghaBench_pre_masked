
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cur; int update; } ;
struct TYPE_2__ {unsigned int (* get ) (unsigned int) ;int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 struct cpufreq_policy* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned int FUNC_5(unsigned int VAR_3)
{
 struct cpufreq_policy *VAR_4 = FUNC_1(VAR_1, VAR_3);
 unsigned int VAR_5 = 0;

 if (!VAR_2->get)
  return VAR_5;

 VAR_5 = VAR_2->get(VAR_3);

 if (VAR_5 && VAR_4->cur &&
  !(VAR_2->flags & VAR_0)) {


  if (FUNC_4(VAR_5 != VAR_4->cur)) {
   FUNC_0(VAR_3, VAR_4->cur, VAR_5);
   FUNC_2(&VAR_4->update);
  }
 }

 return VAR_5;
}
