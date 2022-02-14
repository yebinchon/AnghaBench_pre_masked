
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * timer_call_t ;
typedef int spl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static timer_call_t
FUNC_6()
{
 spl_t VAR_2;
 timer_call_t VAR_3 = ((void*)0);

 VAR_2 = FUNC_4();
 FUNC_2(&VAR_1);
 if (!FUNC_1(&VAR_0)) {
  VAR_3 = (timer_call_t) FUNC_0(&VAR_0);
 }
 FUNC_3(&VAR_1);
 FUNC_5(VAR_2);

 return VAR_3;
}
