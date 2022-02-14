
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_card {TYPE_1__* netdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct spider_net_card*) ;
 scalar_t__ FUNC_2 (struct spider_net_card*,int ) ;

__attribute__((used)) static void
FUNC_3(struct spider_net_card *VAR_1)
{
 if ((FUNC_2(VAR_1, 0) != 0) &&
     (VAR_1->netdev->flags & VAR_0)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->netdev);
 }
}
