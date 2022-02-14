
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {scalar_t__ nAggTimeInterval; scalar_t__ nSlidingTime; } ;
struct TYPE_9__ {TYPE_3__ cmd; } ;
struct TYPE_8__ {scalar_t__ precision; scalar_t__ interval; scalar_t__ slidingTime; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(SSqlObj *VAR_3, SSqlStream *VAR_4) {
  SSqlCmd *VAR_5 = &VAR_3->cmd;

  int64_t VAR_6 =
      (VAR_4->precision == VAR_0) ? VAR_1 * 1000L : VAR_1;
  if (VAR_5->nAggTimeInterval < VAR_6) {
    FUNC_0("%p stream:%p, original sample interval:%ld too small, reset to:%lld", VAR_3, VAR_4,
            VAR_5->nAggTimeInterval, VAR_6);
    VAR_5->nAggTimeInterval = VAR_6;
  }

  VAR_4->interval = VAR_5->nAggTimeInterval;

  if (VAR_5->nSlidingTime == 0) {
    VAR_5->nSlidingTime = VAR_5->nAggTimeInterval;
  }

  int64_t VAR_7 =
      (VAR_4->precision == VAR_0) ? VAR_2 * 1000L : VAR_2;

  if (VAR_5->nSlidingTime < VAR_7) {
    FUNC_0("%p stream:%p, original sliding value:%lld too small, reset to:%lld", VAR_3, VAR_4, VAR_5->nSlidingTime,
            VAR_7);

    VAR_5->nSlidingTime = VAR_7;
  }

  if (VAR_5->nSlidingTime > VAR_5->nAggTimeInterval) {
    FUNC_0("%p stream:%p, sliding value:%lld can not be larger than interval range, reset to:%lld", VAR_3, VAR_4,
            VAR_5->nSlidingTime, VAR_5->nAggTimeInterval);

    VAR_5->nSlidingTime = VAR_5->nAggTimeInterval;
  }

  VAR_4->slidingTime = VAR_5->nSlidingTime;
}
