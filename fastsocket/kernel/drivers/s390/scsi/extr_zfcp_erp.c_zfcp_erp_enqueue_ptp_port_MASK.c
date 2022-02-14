
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int dummy; } ;
struct zfcp_adapter {int peer_d_id; int peer_wwpn; } ;


 scalar_t__ FUNC_0 (struct zfcp_port*) ;
 int FUNC_1 (struct zfcp_port*,int ,char*,int *) ;
 struct zfcp_port* FUNC_2 (struct zfcp_adapter*,int ,int ,int ) ;
 int FUNC_3 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_adapter *VAR_0)
{
 struct zfcp_port *VAR_1;
 VAR_1 = FUNC_2(VAR_0, VAR_0->peer_wwpn, 0,
     VAR_0->peer_d_id);
 if (FUNC_0(VAR_1))
  return;
 FUNC_1(VAR_1, 0, "ereptp1", ((void*)0));
 FUNC_3(VAR_1);
}
