
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {void* warnings; void* server_status; } ;
typedef TYPE_1__ network_mysqld_eof_packet_t ;
typedef scalar_t__ guint8 ;
typedef int guint32 ;
typedef void* guint16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,void**) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;

int FUNC_3(network_packet *VAR_3, network_mysqld_eof_packet_t *VAR_4) {
 guint8 VAR_5;
 guint16 VAR_6, VAR_7;
 guint32 VAR_8 = VAR_0;

 int VAR_9 = 0;

 VAR_9 = VAR_9 || FUNC_2(VAR_3, &VAR_5);
 if (VAR_9) return -1;

 if (VAR_5 != VAR_2) {
  FUNC_0("%s: expected the first byte to be 0xfe, got %d",
    VAR_1,
    VAR_5);
  return -1;
 }

 if (VAR_8 & VAR_0) {
  VAR_9 = VAR_9 || FUNC_1(VAR_3, &VAR_7);
  VAR_9 = VAR_9 || FUNC_1(VAR_3, &VAR_6);
  if (!VAR_9) {
   VAR_4->server_status = VAR_6;
   VAR_4->warnings = VAR_7;
  }
 } else {
  VAR_4->server_status = 0;
  VAR_4->warnings = 0;
 }

 return VAR_9 ? -1 : 0;
}
