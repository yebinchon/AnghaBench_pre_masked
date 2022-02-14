
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* socket_t ;
typedef int errno_t ;
struct TYPE_7__ {int so_type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

errno_t
FUNC_4(socket_t VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
 FUNC_2(VAR_0, 1);
 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_0(VAR_0);
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->so_type;
 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_1(VAR_0);
 FUNC_3(VAR_0, 1);
 return (0);
}
