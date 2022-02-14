
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct aio_timeout {int timed_out; TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct timespec const*) ;

__attribute__((used)) static inline void FUNC_3(long VAR_1, struct aio_timeout *VAR_2,
          const struct timespec *VAR_3)
{
 VAR_2->timer.expires = VAR_1 + FUNC_2(VAR_3);
 if (FUNC_1(VAR_2->timer.expires, VAR_0))
  FUNC_0(&VAR_2->timer);
 else
  VAR_2->timed_out = 1;
}
