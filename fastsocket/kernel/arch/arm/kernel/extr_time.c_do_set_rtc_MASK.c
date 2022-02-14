
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 if (!FUNC_0() || &FUNC_1 == ((void*)0))
  return;

 if (VAR_0 &&
     FUNC_2((unsigned long)VAR_2.tv_sec, VAR_0))
  return;

 if (VAR_2.tv_nsec < 500000000 - ((unsigned) VAR_1 >> 1) &&
     VAR_2.tv_nsec >= 500000000 + ((unsigned) VAR_1 >> 1))
  return;

 if (FUNC_1())



  VAR_0 = VAR_2.tv_sec + 60;
 else
  VAR_0 = VAR_2.tv_sec + 660;
}
