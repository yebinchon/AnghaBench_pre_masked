
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int netplay_mitm_server; } ;
struct TYPE_5__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, const char *VAR_2)
{
   settings_t *VAR_3 = FUNC_0();
   FUNC_1(VAR_3->arrays.netplay_mitm_server, VAR_0, sizeof(VAR_3->arrays.netplay_mitm_server));
   return 0;
}
