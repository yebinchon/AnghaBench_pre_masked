
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sa_handler; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef void* __sighandler_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1 (struct k_sigaction *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 if (VAR_1 + 1 <= 2)

  VAR_0->sa.sa_handler = (__sighandler_t) FUNC_0((int) VAR_1);
 else
  VAR_0->sa.sa_handler = (__sighandler_t) (((unsigned long) VAR_2 << 32) | VAR_1);
}
