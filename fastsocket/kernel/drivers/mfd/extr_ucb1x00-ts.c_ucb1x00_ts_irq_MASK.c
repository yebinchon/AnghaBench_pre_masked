
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int irq_wait; int ucb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(int VAR_2, void *VAR_3)
{
 struct ucb1x00_ts *VAR_4 = VAR_3;

 FUNC_0(VAR_4->ucb, VAR_1, VAR_0);
 FUNC_1(&VAR_4->irq_wait);
}
