
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static dtrace_probe_t *
FUNC_1(dtrace_id_t VAR_4)
{
 FUNC_0(&VAR_1, VAR_0);

 if (VAR_4 == 0 || VAR_4 > (dtrace_id_t)VAR_2)
  return (((void*)0));

 return (VAR_3[VAR_4 - 1]);
}
