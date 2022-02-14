
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {void* warnings; void* server_status; void* insert_id; void* affected_rows; } ;
typedef TYPE_1__ network_mysqld_ok_packet_t ;
typedef scalar_t__ guint8 ;
typedef void* guint64 ;
typedef int guint32 ;
typedef void* guint16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,void**) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,void**) ;

int FUNC_4(network_packet *VAR_2, network_mysqld_ok_packet_t *VAR_3) {
 guint8 VAR_4;
 guint64 VAR_5, VAR_6;
 guint16 VAR_7, VAR_8 = 0;
 guint32 VAR_9 = VAR_0;

 int VAR_10 = 0;

 VAR_10 = VAR_10 || FUNC_2(VAR_2, &VAR_4);
 if (VAR_10) return -1;

 if (VAR_4 != 0) {
  FUNC_0("%s: expected the first byte to be 0, got %d",
    VAR_1,
    VAR_4);
  return -1;
 }

 VAR_10 = VAR_10 || FUNC_3(VAR_2, &VAR_5);
 VAR_10 = VAR_10 || FUNC_3(VAR_2, &VAR_6);
 VAR_10 = VAR_10 || FUNC_1(VAR_2, &VAR_7);
 if (VAR_9 & VAR_0) {
  VAR_10 = VAR_10 || FUNC_1(VAR_2, &VAR_8);
 }

 if (!VAR_10) {
  VAR_3->affected_rows = VAR_5;
  VAR_3->insert_id = VAR_6;
  VAR_3->server_status = VAR_7;
  VAR_3->warnings = VAR_8;
 }

 return VAR_10 ? -1 : 0;
}
