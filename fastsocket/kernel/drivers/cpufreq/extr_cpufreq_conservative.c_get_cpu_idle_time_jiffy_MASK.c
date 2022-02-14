
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cputime64_t ;
struct TYPE_3__ {int nice; int steal; int softirq; int irq; int system; scalar_t__ user; } ;
struct TYPE_4__ {TYPE_1__ cpustat; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_2__ FUNC_5 (unsigned int) ;

__attribute__((used)) static inline cputime64_t FUNC_6(unsigned int VAR_0,
       cputime64_t *VAR_1)
{
 cputime64_t VAR_2;
 cputime64_t VAR_3;
 cputime64_t VAR_4;

 VAR_3 = FUNC_3(FUNC_2());
 VAR_4 = FUNC_0(FUNC_5(VAR_0).cpustat.user,
   FUNC_5(VAR_0).cpustat.system);

 VAR_4 = FUNC_0(VAR_4, FUNC_5(VAR_0).cpustat.irq);
 VAR_4 = FUNC_0(VAR_4, FUNC_5(VAR_0).cpustat.softirq);
 VAR_4 = FUNC_0(VAR_4, FUNC_5(VAR_0).cpustat.steal);
 VAR_4 = FUNC_0(VAR_4, FUNC_5(VAR_0).cpustat.nice);

 VAR_2 = FUNC_1(VAR_3, VAR_4);
 if (VAR_1)
  *VAR_1 = (cputime64_t)FUNC_4(VAR_3);

 return (cputime64_t)FUNC_4(VAR_2);;
}
