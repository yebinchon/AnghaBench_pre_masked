
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef TYPE_1__* socket_t ;
struct TYPE_4__ {int so_flags1; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(socket_t VAR_4, u_int8_t VAR_5)
{
 u_int32_t VAR_6 = 0;

 if ((VAR_5 & VAR_2))
  VAR_6 |= VAR_0;
 if ((VAR_5 & VAR_3))
  VAR_6 |= VAR_1;

 (void) FUNC_0(~VAR_6, &VAR_4->so_flags1);

 FUNC_1(VAR_4);
}
