
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc {int periodic_work; int workqueue; int async_work; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct whc *VAR_0)
{
 FUNC_0(VAR_0->workqueue, &VAR_0->async_work);
 FUNC_0(VAR_0->workqueue, &VAR_0->periodic_work);
}
