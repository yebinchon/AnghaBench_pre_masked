
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {int dummy; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {scalar_t__ agg_select_timer; } ;


 TYPE_1__ FUNC_0 (struct bonding*) ;
 struct bonding* FUNC_1 (struct port*) ;

__attribute__((used)) static inline int FUNC_2(struct port *VAR_0)
{
 struct bonding *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0)) {
  return 0;
 }

 return FUNC_0(VAR_1).agg_select_timer ? 1 : 0;
}
