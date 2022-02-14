
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adx_wdt {int lock; scalar_t__ base; int timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct adx_wdt *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1->timeout, VAR_1->base + VAR_0);
 FUNC_1(&VAR_1->lock, VAR_2);
}
