
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int dummy; } ;
struct device {int parent; } ;


 struct srp_rport* FUNC_0 (struct device*) ;
 int FUNC_1 (struct srp_rport*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct srp_rport *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0->parent);
 FUNC_1(VAR_1);
}
