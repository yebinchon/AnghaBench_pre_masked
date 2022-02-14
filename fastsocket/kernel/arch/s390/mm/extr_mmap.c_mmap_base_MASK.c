
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_3__* VAR_5 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(void)
{
 unsigned long VAR_6 = VAR_5->signal->rlim[VAR_3].rlim_cur;

 if (VAR_6 < VAR_1)
  VAR_6 = VAR_1;
 else if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 VAR_6 &= VAR_2;
 return VAR_4 - FUNC_1() - FUNC_0() - VAR_6;
}
