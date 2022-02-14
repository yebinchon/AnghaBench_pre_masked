
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* log_filename; int last_msg; int log_ts_str; scalar_t__ event_source_handle; } ;
typedef TYPE_1__ chassis_log ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(chassis_log *VAR_1) {
 if (!VAR_1) return;

 FUNC_2(VAR_1);
 FUNC_5(VAR_1->log_ts_str, VAR_0);
 FUNC_5(VAR_1->last_msg, VAR_0);

 if (VAR_1->log_filename) FUNC_4(VAR_1->log_filename);

 FUNC_4(VAR_1);
}
