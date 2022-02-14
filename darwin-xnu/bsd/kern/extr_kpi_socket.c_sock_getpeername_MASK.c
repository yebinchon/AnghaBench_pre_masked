
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int sa_len; } ;
typedef TYPE_1__* socket_t ;
typedef int errno_t ;
struct TYPE_6__ {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,struct sockaddr**,int) ;

errno_t
FUNC_5(socket_t VAR_5, struct sockaddr *VAR_6, int VAR_7)
{
 int VAR_8;
 struct sockaddr *VAR_9 = ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 < 0)
  return (VAR_0);

 FUNC_2(VAR_5, 1);
 if (!(VAR_5->so_state & (VAR_4|VAR_3))) {
  FUNC_3(VAR_5, 1);
  return (VAR_1);
 }
 VAR_8 = FUNC_4(VAR_5, &VAR_9, 1);
 FUNC_3(VAR_5, 1);
 if (VAR_8 == 0) {
  if (VAR_7 > VAR_9->sa_len)
   VAR_7 = VAR_9->sa_len;
  FUNC_1(VAR_6, VAR_9, VAR_7);
  FUNC_0(VAR_9, VAR_2);
 }
 return (VAR_8);
}
