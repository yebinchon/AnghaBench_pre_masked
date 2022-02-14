
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macvlan_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 scalar_t__ FUNC_1 (struct macvlan_port const*,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(const struct macvlan_port *VAR_0,
    const unsigned char *VAR_1)
{




 if (!FUNC_0(VAR_0->dev->dev_addr, VAR_1))
  return 1;

 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 return 0;
}
