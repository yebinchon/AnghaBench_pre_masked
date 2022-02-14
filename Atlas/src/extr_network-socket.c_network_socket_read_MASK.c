
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int network_socklen_t ;
typedef int network_socket_retval_t ;
struct TYPE_12__ {scalar_t__ to_read; scalar_t__ socket_type; TYPE_3__* recv_queue_raw; TYPE_2__* dst; int fd; } ;
typedef TYPE_4__ network_socket ;
typedef int gssize ;
struct TYPE_13__ {int len; int str; } ;
struct TYPE_11__ {int len; scalar_t__ offset; int chunks; } ;
struct TYPE_9__ {int common; } ;
struct TYPE_10__ {int len; TYPE_1__ addr; } ;
typedef TYPE_5__ GString ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (int) ;
 TYPE_5__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int *,int*) ;

network_socket_retval_t FUNC_7(network_socket *VAR_6) {
 gssize VAR_7;

 if (VAR_6->to_read > 0) {
  GString *VAR_8 = FUNC_4(VAR_6->to_read);

  FUNC_2(VAR_6->recv_queue_raw->chunks, VAR_8);

  if (VAR_6->socket_type == VAR_4) {
   VAR_7 = FUNC_5(VAR_6->fd, VAR_8->str, VAR_6->to_read, 0);
  } else {

   network_socklen_t VAR_9 = sizeof(VAR_6->dst->addr.common);
   VAR_7 = FUNC_6(VAR_6->fd, VAR_8->str, VAR_6->to_read, 0, &(VAR_6->dst->addr.common), &(VAR_9));
   VAR_6->dst->len = VAR_9;
  }
  if (-1 == VAR_7) {



   switch (VAR_5) {
   case 130:
   case 129:
   case 128:
   case 131:
    return VAR_3;
   default:
    FUNC_1("%s: recv() failed: %s (errno=%d)", VAR_0, FUNC_3(VAR_5), VAR_5);
    return VAR_1;
   }
  } else if (VAR_7 == 0) {





   return VAR_3;
  }

  VAR_6->to_read -= VAR_7;
  VAR_6->recv_queue_raw->len += VAR_7;



  VAR_8->len = VAR_7;
 }

 return VAR_2;
}
