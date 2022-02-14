
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_2 (unsigned int,unsigned long) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned int FUNC_5(unsigned int VAR_1)
{
 cpumask_t VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_2 = VAR_0->cpus_allowed;
 FUNC_4(VAR_0, FUNC_1(VAR_1));

 VAR_3 = FUNC_3();
 VAR_4 = FUNC_2(VAR_1, VAR_3);

 FUNC_4(VAR_0, VAR_2);

 return VAR_4;
}
