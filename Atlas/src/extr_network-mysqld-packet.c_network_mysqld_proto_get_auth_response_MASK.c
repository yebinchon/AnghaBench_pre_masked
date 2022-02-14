
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_18__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
struct TYPE_19__ {int capabilities; int max_packet_size; int response; int username; TYPE_12__* database; int charset; } ;
typedef TYPE_3__ network_mysqld_auth_response ;
typedef int guint16 ;
struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_16__ {int len; char* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,TYPE_12__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;

int FUNC_9(network_packet *VAR_2, network_mysqld_auth_response *VAR_3) {
 int VAR_4 = 0;
 guint16 VAR_5;
 VAR_4 = VAR_4 || FUNC_7(VAR_2, &VAR_5);
 if (VAR_4) return -1;

 if (VAR_5 & VAR_0) {
  VAR_4 = VAR_4 || FUNC_4(VAR_2, &VAR_3->capabilities);
  VAR_4 = VAR_4 || FUNC_4(VAR_2, &VAR_3->max_packet_size);
  VAR_4 = VAR_4 || FUNC_5(VAR_2, &VAR_3->charset);

  VAR_4 = VAR_4 || FUNC_8(VAR_2, 23);

  VAR_4 = VAR_4 || FUNC_0(VAR_2, VAR_3->username);
  if (VAR_3->capabilities & VAR_1) {
   VAR_4 = VAR_4 || FUNC_6(VAR_2, VAR_3->response);
  } else {
   VAR_4 = VAR_4 || FUNC_0(VAR_2, VAR_3->response);
  }

  if (VAR_2->offset != VAR_2->data->len) {

   VAR_4 = VAR_4 || FUNC_1(VAR_2, VAR_2->data->len - VAR_2->offset, VAR_3->database);

   if (VAR_3->database->len > 0 &&
       (VAR_3->database->str[VAR_3->database->len - 1] == '\0')) {
    VAR_3->database->len--;
   }
  }
 } else {
  VAR_4 = VAR_4 || FUNC_2(VAR_2, &VAR_5);
  VAR_4 = VAR_4 || FUNC_3(VAR_2, &VAR_3->max_packet_size);
  VAR_4 = VAR_4 || FUNC_0(VAR_2, VAR_3->username);

  if (VAR_2->data->len != VAR_2->offset) {
   VAR_4 = VAR_4 || FUNC_0(VAR_2, VAR_3->response);
  }

  if (!VAR_4) {
   VAR_3->capabilities = VAR_5;
  }
 }

 return VAR_4 ? -1 : 0;
}
