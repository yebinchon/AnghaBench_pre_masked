
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t) ;
 void* FUNC_1 (size_t,int ,int*,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void *
FUNC_2(size_t VAR_2)
{
 void *VAR_3;
 bool VAR_4, VAR_5;






 VAR_4 = 1;
 VAR_5 = 1;
 VAR_3 = FUNC_1(VAR_2, VAR_0, &VAR_4, &VAR_5);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (VAR_1)
  FUNC_0(VAR_3, VAR_2);

 return (VAR_3);
}
