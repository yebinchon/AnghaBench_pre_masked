
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
 unsigned long FUNC_0 (unsigned long) ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_3__* VAR_4 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(void)
{
 unsigned long VAR_5 = VAR_4->signal->rlim[VAR_2].rlim_cur;

 if (VAR_5 < VAR_1)
  VAR_5 = VAR_1;
 else if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 return FUNC_0(VAR_3 - VAR_5 - FUNC_1());
}
