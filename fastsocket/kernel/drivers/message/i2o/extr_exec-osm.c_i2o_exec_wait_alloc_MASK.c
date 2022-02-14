
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_exec_wait {int lock; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct i2o_exec_wait* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct i2o_exec_wait *FUNC_3(void)
{
 struct i2o_exec_wait *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_1->lock);

 return VAR_1;
}
