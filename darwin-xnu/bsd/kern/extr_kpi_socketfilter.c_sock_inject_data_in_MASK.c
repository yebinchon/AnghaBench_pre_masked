
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
typedef TYPE_1__* socket_t ;
typedef int sflt_data_flag_t ;
typedef int * mbuf_t ;
typedef int errno_t ;
struct TYPE_6__ {int so_flags; int so_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,struct sockaddr*,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

errno_t
FUNC_7(socket_t VAR_5, const struct sockaddr *VAR_6, mbuf_t VAR_7,
    mbuf_t VAR_8, sflt_data_flag_t VAR_9)
{
 int VAR_10 = 0;

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0))
  return (VAR_0);

 if (VAR_9 & VAR_3) {
  return (VAR_1);
 }

 FUNC_4(VAR_5, 1);


 if (VAR_5->so_flags & VAR_2) {
  VAR_10 = VAR_1;
  goto done;
 }

 if (VAR_6) {
  if (FUNC_1(&VAR_5->so_rcv,
      (struct sockaddr *)(uintptr_t)VAR_6, VAR_7, VAR_8, ((void*)0)))
   FUNC_6(VAR_5);
  goto done;
 }

 if (VAR_8) {
  if (FUNC_2(&VAR_5->so_rcv, VAR_7, VAR_8, ((void*)0)))
   FUNC_6(VAR_5);
  goto done;
 }

 if (VAR_9 & VAR_4) {
  if (VAR_8 || VAR_6) {
   VAR_10 = VAR_0;
   goto done;
  }
  if (FUNC_3(&VAR_5->so_rcv, (struct mbuf *)VAR_7))
   FUNC_6(VAR_5);
  goto done;
 }

 if (FUNC_0(&VAR_5->so_rcv, VAR_7))
  FUNC_6(VAR_5);
done:
 FUNC_5(VAR_5, 1);
 return (VAR_10);
}
