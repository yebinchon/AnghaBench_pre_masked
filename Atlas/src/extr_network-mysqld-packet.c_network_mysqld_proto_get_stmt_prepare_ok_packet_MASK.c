
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {void* warnings; void* num_params; void* num_columns; int stmt_id; } ;
typedef TYPE_1__ network_mysqld_stmt_prepare_ok_packet_t ;
typedef int guint8 ;
typedef int guint32 ;
typedef void* guint16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 scalar_t__ FUNC_1 (int *,void**) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,int) ;

int FUNC_5(network_packet *VAR_1, network_mysqld_stmt_prepare_ok_packet_t *VAR_2) {
 guint8 VAR_3;
 guint16 VAR_4;
 guint16 VAR_5;
 guint16 VAR_6;
 guint32 VAR_7;

 int VAR_8 = 0;

 VAR_8 = VAR_8 || FUNC_3(VAR_1, &VAR_3);
 if (VAR_8) return -1;

 if (0x00 != VAR_3) {
  FUNC_0("%s: expected the first byte to be %02x, got %02x",
    VAR_0,
    0x00,
    VAR_3);
  return -1;
 }
 VAR_8 = VAR_8 || FUNC_2(VAR_1, &VAR_7);
 VAR_8 = VAR_8 || FUNC_1(VAR_1, &VAR_4);
 VAR_8 = VAR_8 || FUNC_1(VAR_1, &VAR_5);
 VAR_8 = VAR_8 || FUNC_4(VAR_1, 1);
 VAR_8 = VAR_8 || FUNC_1(VAR_1, &VAR_6);

 if (!VAR_8) {
  VAR_2->stmt_id = VAR_7;
  VAR_2->num_columns = VAR_4;
  VAR_2->num_params = VAR_5;
  VAR_2->warnings = VAR_6;
 }

 return VAR_8 ? -1 : 0;
}
