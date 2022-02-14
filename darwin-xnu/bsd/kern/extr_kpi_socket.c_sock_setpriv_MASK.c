
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* socket_t ;
typedef int errno_t ;
struct TYPE_5__ {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

errno_t
FUNC_2(socket_t VAR_2, int VAR_3)
{
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_2, 1);
 if (VAR_3)
  VAR_2->so_state |= VAR_1;
 else
  VAR_2->so_state &= ~VAR_1;
 FUNC_1(VAR_2, 1);
 return (0);
}
