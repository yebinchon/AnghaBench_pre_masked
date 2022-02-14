
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_1,
           unsigned long (*VAR_2)(unsigned long),
    unsigned long VAR_3)
{
 cpumask_t VAR_4 = VAR_0->cpus_allowed;
 unsigned long VAR_5;


 if (FUNC_1(VAR_0, FUNC_0(VAR_1)))
  return 0;

 VAR_5 = VAR_2(VAR_3);

 FUNC_1(VAR_0, VAR_4);

 return VAR_5;
}
