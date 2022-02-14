
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_file_fd; } ;
typedef TYPE_1__ chassis_log ;


 int FUNC_0 (int) ;

int FUNC_1(chassis_log *VAR_0) {
 if (VAR_0->log_file_fd == -1) return 0;

 FUNC_0(VAR_0->log_file_fd);

 VAR_0->log_file_fd = -1;

 return 0;
}
