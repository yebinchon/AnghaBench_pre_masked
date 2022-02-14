
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {unsigned long last_arp_rx; TYPE_1__* dev; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {unsigned long last_rx; } ;


 scalar_t__ FUNC_0 (struct bonding*,struct slave*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct bonding *VAR_0,
     struct slave *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return VAR_1->last_arp_rx;

 return VAR_1->dev->last_rx;
}
