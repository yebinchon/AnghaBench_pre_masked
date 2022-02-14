
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ waitq_isvalid; } ;
struct waitq_set {TYPE_1__ wqset_q; } ;


 scalar_t__ FUNC_0 (struct waitq_set*) ;

int FUNC_1(struct waitq_set *VAR_0)
{
 return (VAR_0 != ((void*)0)) && VAR_0->wqset_q.waitq_isvalid && FUNC_0(VAR_0);
}
