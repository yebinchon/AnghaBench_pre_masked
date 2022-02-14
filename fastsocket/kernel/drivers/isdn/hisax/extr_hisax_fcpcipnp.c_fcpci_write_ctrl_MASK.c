
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fritz_bcs {struct fritz_adapter* adapter; } ;
struct fritz_adapter {int hw_lock; } ;


 int FUNC_0 (struct fritz_bcs*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fritz_bcs *VAR_0, int VAR_1)
{
 struct fritz_adapter *VAR_2 = VAR_0->adapter;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->hw_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->hw_lock, VAR_3);
}
