
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_adapter {int netdev; scalar_t__ vlgrp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_1)
{
 FUNC_1(VAR_1->netdev, VAR_1->vlgrp);

 if (VAR_1->vlgrp) {
  u16 VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (!FUNC_2(VAR_1->vlgrp, VAR_2))
    continue;
   FUNC_0(VAR_1->netdev, VAR_2);
  }
 }
}
