
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {scalar_t__ waitq_isvalid; } ;



int FUNC_0(struct waitq *VAR_0)
{
 return (VAR_0 != ((void*)0)) && VAR_0->waitq_isvalid;
}
