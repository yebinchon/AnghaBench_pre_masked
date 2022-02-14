
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct intf_event {int intf_event_code; int addr; int ifp; } ;


 int FUNC_0 (int *,int ,int ,struct sockaddr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct intf_event *VAR_3 = (struct intf_event *)VAR_2;


 FUNC_0(&VAR_1, VAR_0, VAR_3->ifp,
     (struct sockaddr *)&(VAR_3->addr), VAR_3->intf_event_code);
}
