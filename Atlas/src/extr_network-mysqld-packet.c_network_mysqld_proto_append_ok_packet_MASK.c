
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int warnings; int server_status; int insert_id; int affected_rows; } ;
typedef TYPE_1__ network_mysqld_ok_packet_t ;
typedef int guint32 ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(GString *VAR_1, network_mysqld_ok_packet_t *VAR_2) {
 guint32 VAR_3 = VAR_0;

 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_1, VAR_2->affected_rows);
 FUNC_2(VAR_1, VAR_2->insert_id);
 FUNC_0(VAR_1, VAR_2->server_status);
 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_1, VAR_2->warnings);
 }

 return 0;
}
