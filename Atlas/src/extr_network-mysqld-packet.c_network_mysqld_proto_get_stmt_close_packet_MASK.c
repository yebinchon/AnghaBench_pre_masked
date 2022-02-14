
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {int stmt_id; } ;
typedef TYPE_1__ network_mysqld_stmt_close_packet_t ;
typedef scalar_t__ guint8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;

int FUNC_3(network_packet *VAR_2, network_mysqld_stmt_close_packet_t *VAR_3) {
 guint8 VAR_4;
 int VAR_5 = 0;

 VAR_5 = VAR_5 || FUNC_2(VAR_2, &VAR_4);
 if (VAR_5) return -1;

 if (VAR_0 != VAR_4) {
  FUNC_0("%s: expected the first byte to be %02x, got %02x",
    VAR_1,
    VAR_0,
    VAR_4);
  return -1;
 }

 VAR_5 = VAR_5 || FUNC_1(VAR_2, &VAR_3->stmt_id);

 return VAR_5 ? -1 : 0;
}
