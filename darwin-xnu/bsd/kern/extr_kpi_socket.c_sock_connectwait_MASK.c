
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {long tv_sec; int tv_usec; } ;
struct timespec {long tv_sec; int tv_nsec; } ;
typedef TYPE_3__* socket_t ;
typedef int lck_mtx_t ;
typedef int integer_t ;
typedef scalar_t__ errno_t ;
typedef int caddr_t ;
struct TYPE_10__ {int so_state; scalar_t__ so_error; int so_timeo; TYPE_2__* so_proto; } ;
struct TYPE_9__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (TYPE_3__*,int ) ;} ;
struct TYPE_8__ {int * dom_mtx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 int FUNC_0 (int ,int *,int ,char*,struct timespec*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int * FUNC_3 (TYPE_3__*,int ) ;

errno_t
FUNC_4(socket_t VAR_11, const struct timeval *VAR_12)
{
 lck_mtx_t *VAR_13;
 errno_t VAR_14 = 0;
 struct timespec VAR_15;

 FUNC_1(VAR_11, 1);


 if ((VAR_11->so_state & VAR_9) == 0 || VAR_11->so_error != 0) {
  if (VAR_11->so_error != 0) {
   VAR_14 = VAR_11->so_error;
   VAR_11->so_error = 0;
  } else {
   if ((VAR_11->so_state & VAR_8) != 0)
    VAR_14 = 0;
   else
    VAR_14 = VAR_2;
  }
  goto done;
 }


 if (VAR_12->tv_sec < 0 || VAR_12->tv_sec > VAR_7 / VAR_10 ||
     VAR_12->tv_usec < 0 || VAR_12->tv_usec >= 1000000) {
  VAR_14 = VAR_0;
  goto done;
 }

 VAR_15.tv_sec = VAR_12->tv_sec;
 VAR_15.tv_nsec = (VAR_12->tv_usec * (integer_t)VAR_4);
 if ((VAR_15.tv_sec + (VAR_15.tv_nsec/(long)VAR_3))/100 > VAR_7) {
  VAR_14 = VAR_0;
  goto done;
 }

 if (VAR_11->so_proto->pr_getlock != ((void*)0))
  VAR_13 = (*VAR_11->so_proto->pr_getlock)(VAR_11, VAR_5);
 else
  VAR_13 = VAR_11->so_proto->pr_domain->dom_mtx;

 FUNC_0((caddr_t)&VAR_11->so_timeo, VAR_13,
     VAR_6, "sock_connectwait", &VAR_15);


 if ((VAR_11->so_state & VAR_9) && VAR_11->so_error == 0) {
  VAR_14 = VAR_1;
  goto done;
 }

 if (VAR_11->so_error != 0) {
  VAR_14 = VAR_11->so_error;
  VAR_11->so_error = 0;
 }

done:
 FUNC_2(VAR_11, 1);
 return (VAR_14);
}
