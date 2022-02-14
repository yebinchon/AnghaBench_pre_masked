
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct c2_port {int dummy; } ;


 int FUNC_0 (struct c2_port*) ;
 struct c2_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct c2_port*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct c2_port *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_1))
  FUNC_3("%s: tx timeout\n", VAR_0->name);

 FUNC_0(VAR_1);
}
