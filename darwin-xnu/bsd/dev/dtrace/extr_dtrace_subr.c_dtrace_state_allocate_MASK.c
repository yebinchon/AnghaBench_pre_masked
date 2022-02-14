
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t minor_t ;
typedef int dtrace_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,int ,int) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * VAR_3 ;

dtrace_state_t*
FUNC_3(minor_t VAR_4)
{
 dtrace_state_t *VAR_5 = FUNC_1(sizeof(dtrace_state_t), VAR_0, VAR_2 | VAR_1);
 if (FUNC_2(&VAR_3[VAR_4], ((void*)0), VAR_5) != ((void*)0)) {

  FUNC_0(VAR_5, VAR_0);
  return ((void*)0);
 }
 return VAR_5;
}
