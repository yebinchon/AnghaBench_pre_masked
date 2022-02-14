
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef long int64_t ;
struct TYPE_10__ {int cmd; } ;
struct TYPE_9__ {long slidingTime; scalar_t__ stime; scalar_t__ etime; scalar_t__ interval; scalar_t__ precision; int param; int (* callback ) (int ) ;int pSql; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 long FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 long FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 long VAR_1 ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,long) ;
 int FUNC_7 (char*,int ,TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(SSqlStream *VAR_2, SSqlObj *VAR_3) {
  int64_t VAR_4 = 0;

  if (FUNC_0(&VAR_3->cmd)) {




    VAR_4 = VAR_2->slidingTime;
    if (VAR_2->stime > VAR_2->etime) {
      FUNC_7("%p stream:%p, stime:%lld is larger than end time: %lld, stop the stream", VAR_2->pSql, VAR_2,
               VAR_2->stime, VAR_2->etime);

      FUNC_5(VAR_2);
      if (VAR_2->callback) {

        VAR_2->callback(VAR_2->param);
      }
      return;
    }
  } else {
    VAR_2->stime += VAR_2->slidingTime;
    if ((VAR_2->stime - VAR_2->interval) >= VAR_2->etime) {
      FUNC_7("%p stream:%p, stime:%ld is larger than end time: %ld, stop the stream", VAR_2->pSql, VAR_2,
               VAR_2->stime, VAR_2->etime);

      FUNC_5(VAR_2);
      if (VAR_2->callback) {

        VAR_2->callback(VAR_2->param);
      }
      return;
    }

    VAR_4 = VAR_2->stime - FUNC_4(VAR_2->precision);
    if (VAR_4 < 0) {
      VAR_4 = 0;
    }
  }

  int64_t VAR_5 = (int64_t)(VAR_2->slidingTime * 0.1);
  VAR_5 = (FUNC_1() % VAR_5);

  int64_t VAR_6 =
      (VAR_2->precision == VAR_0) ? VAR_1 * 1000L : VAR_1;

  if (VAR_5 > VAR_6) {
    VAR_5 = VAR_6;
  }

  VAR_4 += VAR_5;
  if (VAR_2->precision == VAR_0) {
    VAR_4 = VAR_4 / 1000L;
  }

  FUNC_6(VAR_2, VAR_3, VAR_4);
}
