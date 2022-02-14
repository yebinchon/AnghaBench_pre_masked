
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_prod_pvt; int rsp_cons; } ;
struct netfront_info {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct netfront_info *VAR_2)
{
 return ((VAR_2->tx.req_prod_pvt - VAR_2->tx.rsp_cons) <
  (VAR_1 - VAR_0 - 2));
}
