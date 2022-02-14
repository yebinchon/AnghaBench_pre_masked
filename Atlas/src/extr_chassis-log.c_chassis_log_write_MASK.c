
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int log_file_fd; scalar_t__ event_source_handle; scalar_t__ use_windows_applog; scalar_t__ use_syslog; } ;
typedef TYPE_1__ chassis_log ;
struct TYPE_9__ {int win_evtype; int syslog_lvl; } ;
struct TYPE_8__ {char* str; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,int *,int,int ,char**,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static int FUNC_5(chassis_log *VAR_4, int VAR_5, GString *VAR_6) {
 if (-1 != VAR_4->log_file_fd) {

  if (-1 == FUNC_4(VAR_4->log_file_fd, FUNC_1(VAR_6))) {


   FUNC_4(VAR_2, FUNC_1(VAR_6));
   FUNC_4(VAR_2, "\n", 1);
  } else {
   FUNC_4(VAR_4->log_file_fd, "\n", 1);
  }
 } else {
  FUNC_4(VAR_2, FUNC_1(VAR_6));
  FUNC_4(VAR_2, "\n", 1);
 }

 return 0;
}
