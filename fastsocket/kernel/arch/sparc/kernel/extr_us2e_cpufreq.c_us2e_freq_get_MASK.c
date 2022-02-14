
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_6(unsigned int VAR_2)
{
 cpumask_t VAR_3;
 unsigned long VAR_4, VAR_5;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = VAR_1->cpus_allowed;
 FUNC_4(VAR_1, FUNC_1(VAR_2));

 VAR_4 = FUNC_5(VAR_2) / 1000;
 VAR_5 = FUNC_3(VAR_0);

 FUNC_4(VAR_1, VAR_3);

 return VAR_4 / FUNC_2(VAR_5);
}
