
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int binlog_file; int server_id; int flags; int binlog_pos; } ;
typedef TYPE_1__ network_mysqld_binlog_dump ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(GString *VAR_1, network_mysqld_binlog_dump *VAR_2) {
 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_2->binlog_pos);
 FUNC_1(VAR_1, VAR_2->flags);
 FUNC_2(VAR_1, VAR_2->server_id);
 FUNC_0(VAR_1, VAR_2->binlog_file);
 FUNC_3(VAR_1, 0);

 return 0;
}
