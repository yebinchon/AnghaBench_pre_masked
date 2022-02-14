
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_socklen_t ;
typedef int network_socket_retval_t ;
struct TYPE_3__ {scalar_t__ socket_type; int to_read; int fd; } ;
typedef TYPE_1__ network_socket ;
typedef int b ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int ,int,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*,int*) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;

network_socket_retval_t FUNC_4(network_socket *VAR_8) {
 int VAR_9 = -1;
 if (0 != FUNC_3(VAR_8->fd, VAR_0, &VAR_9)) {
  FUNC_0("%s: ioctl(%d, FIONREAD, ...) failed: %s (%d)",
    VAR_1,
    VAR_8->fd,
    FUNC_1(VAR_7), VAR_7);
  return VAR_2;
 } else if (VAR_9 < 0) {
  FUNC_0("%s: ioctl(%d, FIONREAD, ...) succeeded, but is negative: %d",
    VAR_1,
    VAR_8->fd,
    VAR_9);

  return VAR_2;
 } else {
  VAR_8->to_read = VAR_9;
  return VAR_3;
 }

}
