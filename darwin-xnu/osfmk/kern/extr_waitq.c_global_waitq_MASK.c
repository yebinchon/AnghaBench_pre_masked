
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;


 int VAR_0 ;
 struct waitq* VAR_1 ;

struct waitq *FUNC_0(int VAR_2)
{
 return &VAR_1[VAR_2 % VAR_0];
}
