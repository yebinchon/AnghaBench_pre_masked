
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {scalar_t__ waitq_isvalid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct waitq*) ;
 int FUNC_2 (struct waitq*) ;

void FUNC_3(struct waitq *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(FUNC_2(VAR_0));
 VAR_0->waitq_isvalid = 0;
}
