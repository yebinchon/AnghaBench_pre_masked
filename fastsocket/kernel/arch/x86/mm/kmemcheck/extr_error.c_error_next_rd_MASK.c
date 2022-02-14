
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemcheck_error {int dummy; } ;


 size_t FUNC_0 (struct kmemcheck_error*) ;
 scalar_t__ VAR_0 ;
 struct kmemcheck_error* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static struct kmemcheck_error *FUNC_1(void)
{
 struct kmemcheck_error *VAR_3;

 if (VAR_0 == 0)
  return ((void*)0);

 VAR_3 = &VAR_1[VAR_2];
 if (++VAR_2 == FUNC_0(VAR_1))
  VAR_2 = 0;
 --VAR_0;
 return VAR_3;
}
