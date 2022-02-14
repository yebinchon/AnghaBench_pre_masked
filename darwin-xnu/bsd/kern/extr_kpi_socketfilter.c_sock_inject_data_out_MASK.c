
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef TYPE_1__* socket_t ;
typedef int sflt_data_flag_t ;
typedef int mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int so_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct sockaddr*,int *,int ,int ,int) ;

errno_t
FUNC_1(socket_t VAR_4, const struct sockaddr *VAR_5, mbuf_t VAR_6,
    mbuf_t VAR_7, sflt_data_flag_t VAR_8)
{
 int VAR_9 = 0;


 if (VAR_4->so_flags & VAR_2)
  return (VAR_0);

 if (VAR_8 & VAR_3)
  VAR_9 = VAR_1;
 return (FUNC_0(VAR_4, (struct sockaddr *)(uintptr_t)VAR_5, ((void*)0),
     VAR_6, VAR_7, VAR_9));
}
