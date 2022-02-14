
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;
struct TYPE_3__ {int status; scalar_t__ socket; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4( VC_CONTAINER_NET_T *VAR_3, uint32_t VAR_4 )
{
   int VAR_5;
   fd_set VAR_6;
   struct timeval VAR_7;

   if (VAR_4 == VAR_0)
      return 1;

   FUNC_1(&VAR_6);
   FUNC_0(VAR_3->socket, &VAR_6);
   VAR_7.tv_sec = VAR_4 / 1000;
   VAR_7.tv_usec = (VAR_4 - VAR_7.tv_sec * 1000) * 1000;
   VAR_5 = FUNC_2(VAR_3->socket + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_7);

   if (VAR_5 == VAR_1)
      VAR_3->status = FUNC_3();
   else
      VAR_3->status = VAR_2;

   return (VAR_5 == 1);
}
