
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int server_status; int warnings; } ;
typedef TYPE_1__ network_mysqld_eof_packet_t ;
typedef int guint32 ;
typedef int GString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(GString *VAR_2, network_mysqld_eof_packet_t *VAR_3) {
 guint32 VAR_4 = VAR_0;

 FUNC_1(VAR_2, VAR_1);
 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_2, VAR_3->warnings);
  FUNC_0(VAR_2, VAR_3->server_status);
 }

 return 0;
}
