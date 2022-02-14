
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {scalar_t__ slow_intr_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int ) ;

void FUNC_2(struct adapter *VAR_1)
{
 FUNC_1(VAR_1, VAR_0, 0);
 FUNC_0(VAR_1, VAR_0);
 VAR_1->slow_intr_mask = 0;
}
