
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int command; } ;
struct TYPE_10__ {TYPE_8__ cmd; } ;
struct TYPE_9__ {scalar_t__ etime; scalar_t__ stime; scalar_t__ interval; int pTimer; int pSql; int param; int (* callback ) (int ) ;int precision; } ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,TYPE_1__*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void FUNC_6(SSqlStream *VAR_4, SSqlObj *VAR_5, int64_t VAR_6) {
  if (FUNC_0(&VAR_5->cmd)) {
    int64_t VAR_7 = FUNC_2(VAR_4->precision);
    int64_t VAR_8 = VAR_7 > VAR_4->etime ? VAR_4->etime : VAR_7;

    if (VAR_4->etime < VAR_7 && VAR_7 - VAR_4->etime > VAR_1) {



      FUNC_5("%p stream:%p, etime:%lld is too old, exceeds the max retention time window:%lld, stop the stream",
               VAR_4->pSql, VAR_4, VAR_4->stime, VAR_4->etime);

      FUNC_4(VAR_4);
      if (VAR_4->callback) {

        VAR_4->callback(VAR_4->param);
      }
      return;
    }

    FUNC_5("%p stream:%p, next query start at %lld, in %lldms. query range %lld-%lld", VAR_4->pSql, VAR_4,
             VAR_7 + VAR_6, VAR_6, VAR_4->stime, VAR_8);
  } else {
    FUNC_5("%p stream:%p, next query start at %lld, in %lldms. query range %lld-%lld", VAR_4->pSql, VAR_4,
             VAR_4->stime, VAR_6, VAR_4->stime - VAR_4->interval, VAR_4->stime - 1);
  }

  VAR_5->cmd.command = VAR_0;


  FUNC_3(VAR_2, VAR_6, VAR_4, VAR_3, &VAR_4->pTimer);
}
