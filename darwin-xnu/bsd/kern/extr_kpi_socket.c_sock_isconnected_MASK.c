
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* socket_t ;
struct TYPE_5__ {int so_state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2(socket_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, 1);
 VAR_2 = ((VAR_1->so_state & VAR_0) ? 1 : 0);
 FUNC_1(VAR_1, 1);
 return (VAR_2);
}
