
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* socket_t ;
struct TYPE_5__ {int so_usecount; int so_retaincnt; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(socket_t VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0, 1);
 VAR_0->so_retaincnt++;
 VAR_0->so_usecount++;
 FUNC_1(VAR_0, 1);
}
