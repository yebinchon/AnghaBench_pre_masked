
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_file_fd; int log_filename; } ;
typedef TYPE_1__ chassis_log ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;

int FUNC_1(chassis_log *VAR_4) {
 if (!VAR_4->log_filename) return VAR_3;

 VAR_4->log_file_fd = FUNC_0(VAR_4->log_filename, VAR_2 | VAR_1 | VAR_0, 0660);

 return (VAR_4->log_file_fd != -1);
}
