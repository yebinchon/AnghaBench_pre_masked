
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cputime64_t ;
struct TYPE_3__ {int nice; int iowait; int idle; } ;
struct TYPE_4__ {TYPE_1__ cpustat; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline cputime64_t FUNC_2(unsigned int VAR_1)
{
 cputime64_t VAR_2;

 VAR_2 = FUNC_0(FUNC_1(VAR_1).cpustat.idle,
   FUNC_1(VAR_1).cpustat.iowait);

 if (VAR_0)
  VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_1).cpustat.nice);

 return VAR_2;
}
