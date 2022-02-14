
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct TYPE_7__ {scalar_t__ log_ts_resolution; TYPE_3__* log_ts_str; } ;
typedef TYPE_1__ chassis_log ;
struct TYPE_9__ {int allocated_len; int str; int len; } ;
struct TYPE_8__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_2__ GTimeVal ;
typedef TYPE_3__ GString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int ,char*,struct tm*) ;

__attribute__((used)) static int FUNC_4(chassis_log *VAR_1) {
 struct tm *VAR_2;
 GTimeVal VAR_3;
 time_t VAR_4;
 GString *VAR_5 = VAR_1->log_ts_str;

 FUNC_0(&VAR_3);
 VAR_4 = (time_t) VAR_3.tv_sec;
 VAR_2 = FUNC_2(&VAR_4);

 VAR_5->len = FUNC_3(VAR_5->str, VAR_5->allocated_len, "%Y-%m-%d %H:%M:%S", VAR_2);
 if (VAR_1->log_ts_resolution == VAR_0)
  FUNC_1(VAR_5, ".%.3d", (int) VAR_3.tv_usec/1000);

 return 0;
}
