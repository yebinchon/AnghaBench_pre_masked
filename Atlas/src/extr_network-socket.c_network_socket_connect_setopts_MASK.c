
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int val ;
typedef int network_socket_retval_t ;
struct TYPE_7__ {TYPE_4__* src; int fd; } ;
typedef TYPE_2__ network_socket ;
struct TYPE_6__ {int common; } ;
struct TYPE_8__ {int len; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,int*,int) ;

network_socket_retval_t FUNC_6(network_socket *VAR_9) {



 int VAR_10 = 1;
 VAR_10 = 1;
 FUNC_5(VAR_9->fd, VAR_2, VAR_7, &VAR_10, sizeof(VAR_10) );
 VAR_10 = 1;
 FUNC_5(VAR_9->fd, VAR_5, VAR_6, &VAR_10, sizeof(VAR_10) );


 if (-1 == FUNC_2(VAR_9->fd, &VAR_9->src->addr.common, &(VAR_9->src->len))) {
  FUNC_0("%s: getsockname() failed: %s (%d)",
    VAR_0,
    FUNC_1(VAR_8),
    VAR_8);
  FUNC_4(VAR_9->src);
 } else if (FUNC_3(VAR_9->src)) {
  FUNC_0("%s: network_address_refresh_name() failed",
    VAR_0);
  FUNC_4(VAR_9->src);
 }

 return VAR_4;
}
