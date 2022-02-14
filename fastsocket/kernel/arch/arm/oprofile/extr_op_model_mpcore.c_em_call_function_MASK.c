
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_function_data {int (* fn ) () ;int ret; } ;


 int FUNC_0 (struct em_function_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int (*) (struct em_function_data*),struct em_function_data*,int) ;

__attribute__((used)) static int FUNC_4(int (*VAR_0)(void))
{
 struct em_function_data VAR_1;

 VAR_1.fn = VAR_0;
 VAR_1.ret = 0;

 FUNC_1();
 FUNC_3(FUNC_0, &VAR_1, 1);
 FUNC_0(&VAR_1);
 FUNC_2();

 return VAR_1.ret;
}
