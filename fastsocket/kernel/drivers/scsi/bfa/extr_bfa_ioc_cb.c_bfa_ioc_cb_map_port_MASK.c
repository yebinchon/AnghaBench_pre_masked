
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int port_id; } ;


 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_0)
{



 VAR_0->port_id = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_0->port_id);
}
