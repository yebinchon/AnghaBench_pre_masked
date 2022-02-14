
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cp_private {TYPE_1__* tx_ring; } ;
struct cp_desc {int dummy; } ;
struct TYPE_2__ {int opts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct cp_private *VAR_2)
{
 FUNC_3(VAR_2->tx_ring, 0, sizeof(struct cp_desc) * VAR_0);
 VAR_2->tx_ring[VAR_0 - 1].opts1 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);

 return FUNC_1 (VAR_2);
}
