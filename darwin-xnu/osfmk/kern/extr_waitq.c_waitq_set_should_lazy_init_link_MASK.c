
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_set {scalar_t__ wqset_id; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct waitq_set*) ;

boolean_t
FUNC_1(struct waitq_set *VAR_2)
{
 if (FUNC_0(VAR_2) || VAR_2->wqset_id == 0) {
  return VAR_0;
 }
 return VAR_1;
}
