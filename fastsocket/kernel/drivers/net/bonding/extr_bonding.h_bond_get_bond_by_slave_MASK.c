
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {TYPE_1__* dev; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {int master; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct bonding *FUNC_1(struct slave *VAR_0)
{
 if (!VAR_0 || !VAR_0->dev->master) {
  return ((void*)0);
 }

 return (struct bonding *)FUNC_0(VAR_0->dev->master);
}
