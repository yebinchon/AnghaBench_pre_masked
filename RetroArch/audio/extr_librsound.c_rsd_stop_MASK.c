
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ctl_socket; } ;
struct TYPE_7__ {TYPE_1__ conn; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char const*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(rsound_t *VAR_0)
{
   FUNC_0(VAR_0 != ((void*)0));
   FUNC_3(VAR_0);

   const char VAR_1[] = "RSD    5 STOP";



   FUNC_2(VAR_0->conn.ctl_socket, VAR_1, FUNC_4(VAR_1), 0);

   FUNC_1(VAR_0);
   return 0;
}
