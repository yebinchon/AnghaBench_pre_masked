
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ stime; } ;
struct TYPE_10__ {TYPE_3__ cmd; } ;
struct TYPE_9__ {scalar_t__ interval; int precision; void* slidingTime; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_0 ;
 int FUNC_3 (char*,TYPE_2__*,TYPE_1__*,scalar_t__,...) ;

__attribute__((used)) static int64_t FUNC_4(SSqlObj *VAR_1, SSqlStream *VAR_2, int64_t VAR_3) {
  SSqlCmd *VAR_4 = &VAR_1->cmd;

  if (FUNC_1(VAR_4)) {

    VAR_2->interval = VAR_0;
    VAR_2->slidingTime = VAR_0;

    if (VAR_3 != 0) {
      FUNC_0(VAR_3 >= VAR_4->stime);
      VAR_3 += 1;
    } else {
      VAR_3 = VAR_4->stime;
    }
  } else {
    if (VAR_3 == 0) {
      VAR_3 = ((int64_t)FUNC_2(VAR_2->precision) / VAR_2->interval) * VAR_2->interval;
      FUNC_3("%p stream:%p, last timestamp:0, reset to:%lld", VAR_1, VAR_2, VAR_3);
    } else {
      int64_t VAR_5 = (VAR_3 / VAR_2->interval) * VAR_2->interval;
      if (VAR_5 != VAR_3) {
        FUNC_3("%p stream:%p, last timestamp:%lld, reset to:%lld", VAR_1, VAR_2, VAR_3, VAR_5);
        VAR_3 = VAR_5;
      }
    }
  }

  return VAR_3;
}
