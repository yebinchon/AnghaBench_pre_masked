
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; scalar_t__ tm_mon; } ;
struct TYPE_30__ {TYPE_7__* server; TYPE_3__* client; } ;
typedef TYPE_9__ network_mysqld_con ;
struct TYPE_25__ {scalar_t__ query_status; } ;
struct TYPE_19__ {double ts_read_query_result_last; double ts_read_query; TYPE_8__* query; TYPE_4__ qstat; } ;
typedef TYPE_10__ injection ;
typedef scalar_t__ gint ;
struct TYPE_29__ {scalar_t__ str; } ;
struct TYPE_28__ {TYPE_6__* dst; } ;
struct TYPE_27__ {TYPE_5__* name; } ;
struct TYPE_26__ {int str; } ;
struct TYPE_24__ {TYPE_2__* src; } ;
struct TYPE_23__ {TYPE_1__* name; } ;
struct TYPE_22__ {int str; } ;
struct TYPE_21__ {scalar_t__ sql_log_slow_ms; int sql_log; } ;
struct TYPE_20__ {int len; int str; } ;
typedef TYPE_11__ GString ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_18__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (TYPE_11__*,char*,int ,float,scalar_t__) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 TYPE_11__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_11__*,char*,scalar_t__,int ,scalar_t__,int ,int ,int ,int ) ;
 struct tm* FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;

void FUNC_8(network_mysqld_con* VAR_6, injection* VAR_7) {
 if (VAR_5 == VAR_1) return;

 float VAR_8 = (VAR_7->ts_read_query_result_last - VAR_7->ts_read_query)/1000.0;
 if ((gint)VAR_8 < VAR_4->sql_log_slow_ms) return;

 GString* VAR_9 = FUNC_4(((void*)0));

 time_t VAR_10 = FUNC_7(((void*)0));
 struct tm* VAR_11 = FUNC_6(&VAR_10);
 FUNC_5(VAR_9, "[%02d/%02d/%d %02d:%02d:%02d] C:%s S:", VAR_11->tm_mon+1, VAR_11->tm_mday, VAR_11->tm_year+1900, VAR_11->tm_hour, VAR_11->tm_min, VAR_11->tm_sec, VAR_6->client->src->name->str);

 if (VAR_7->qstat.query_status == VAR_0) {
  FUNC_2(VAR_9, "%s OK %.3f \"%s\"\n", VAR_6->server->dst->name->str, VAR_8, VAR_7->query->str+1);
 } else {
  FUNC_2(VAR_9, "%s ERR %.3f \"%s\"\n", VAR_6->server->dst->name->str, VAR_8, VAR_7->query->str+1);
 }

 FUNC_1(VAR_9->str, VAR_9->len, 1, VAR_4->sql_log);
 FUNC_3(VAR_9, VAR_3);

 if (VAR_5 == VAR_2) FUNC_0(VAR_4->sql_log);
}
