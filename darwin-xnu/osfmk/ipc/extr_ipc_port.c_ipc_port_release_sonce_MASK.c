
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_9__ {scalar_t__ ip_sorights; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (char*,TYPE_1__*) ;

void
FUNC_7(
 ipc_port_t VAR_2)
{
 if (!FUNC_0(VAR_2))
  return;

 FUNC_5(VAR_2, VAR_1, VAR_0);

 FUNC_2(VAR_2);

 FUNC_1(VAR_2->ip_sorights > 0);
 if (VAR_2->ip_sorights == 0) {
  FUNC_6("Over-release of port %p send-once right!", VAR_2);
 }

 VAR_2->ip_sorights--;

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}
