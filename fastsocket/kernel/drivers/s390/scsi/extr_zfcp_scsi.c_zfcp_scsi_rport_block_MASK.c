
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {struct fc_rport* rport; } ;
struct fc_rport {int dummy; } ;


 int FUNC_0 (struct fc_rport*) ;

__attribute__((used)) static void FUNC_1(struct zfcp_port *VAR_0)
{
 struct fc_rport *VAR_1 = VAR_0->rport;

 if (VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->rport = ((void*)0);
 }
}
