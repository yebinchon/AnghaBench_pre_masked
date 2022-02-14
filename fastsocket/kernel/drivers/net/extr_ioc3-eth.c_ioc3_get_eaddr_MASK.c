
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_private {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct ioc3_private*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 (struct ioc3_private*) ;

__attribute__((used)) static void FUNC_3(struct ioc3_private *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_1("Ethernet address is %pM.\n", FUNC_2(VAR_0)->dev_addr);
}
