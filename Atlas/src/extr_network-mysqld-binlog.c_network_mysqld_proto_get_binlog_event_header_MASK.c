
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {int event_type; int flags; int log_pos; int event_size; int server_id; int timestamp; } ;
typedef TYPE_1__ network_mysqld_binlog_event ;
typedef int guint8 ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

int FUNC_3(network_packet *VAR_0, network_mysqld_binlog_event *VAR_1) {
 int VAR_2 = 0;
 guint8 VAR_3;

 VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_1->timestamp);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_3);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_1->server_id);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_1->event_size);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_1->log_pos);
 VAR_2 = VAR_2 || FUNC_0(VAR_0, &VAR_1->flags);

 if (!VAR_2) {


  VAR_1->event_type = VAR_3;
 }

 return VAR_2 ? -1 : 0;
}
