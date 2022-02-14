
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int capabilities; int max_packet_size; int charset; TYPE_3__* database; TYPE_3__* response; TYPE_3__* username; } ;
typedef TYPE_1__ network_mysqld_auth_response ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(GString *VAR_1, network_mysqld_auth_response *VAR_2) {
 int VAR_3;

 if (!(VAR_2->capabilities & VAR_0)) {
  FUNC_2(VAR_1, VAR_2->capabilities);
  FUNC_3(VAR_1, VAR_2->max_packet_size);

  if (VAR_2->username->len) FUNC_1(VAR_1, FUNC_0(VAR_2->username));
  FUNC_5(VAR_1, 0x00);

  if (VAR_2->response->len) {
   FUNC_1(VAR_1, FUNC_0(VAR_2->response));
   FUNC_5(VAR_1, 0x00);
  }
 } else {
  FUNC_4(VAR_1, VAR_2->capabilities);
  FUNC_4(VAR_1, VAR_2->max_packet_size);

  FUNC_5(VAR_1, VAR_2->charset);

  for (VAR_3 = 0; VAR_3 < 23; VAR_3++) {
   FUNC_5(VAR_1, 0x00);
  }

  if (VAR_2->username->len) FUNC_1(VAR_1, FUNC_0(VAR_2->username));
  FUNC_5(VAR_1, 0x00);


  FUNC_6(VAR_1, FUNC_0(VAR_2->response));
  if (VAR_2->database->len) {
   FUNC_1(VAR_1, FUNC_0(VAR_2->database));
   FUNC_5(VAR_1, 0x00);
  }
 }

 return 0;
}
