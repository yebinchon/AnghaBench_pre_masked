
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int u_int32_t ;
struct TYPE_2__ {int euuid; int epid; } ;
struct kev_netpolicy_ifdenied {TYPE_1__ ev_data; int ev_if_functional_type; } ;
typedef int pid_t ;
typedef int ev_ifdenied ;


 int VAR_0 ;
 int FUNC_0 (struct kev_netpolicy_ifdenied*,int) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(pid_t VAR_1, uuid_t VAR_2, u_int32_t VAR_3)
{
 struct kev_netpolicy_ifdenied VAR_4;

 FUNC_0(&VAR_4, sizeof(VAR_4));

 VAR_4.ev_data.epid = VAR_1;
 FUNC_2(VAR_4.ev_data.euuid, VAR_2);
 VAR_4.ev_if_functional_type = VAR_3;

 FUNC_1(VAR_0, &VAR_4.ev_data, sizeof(VAR_4));
}
