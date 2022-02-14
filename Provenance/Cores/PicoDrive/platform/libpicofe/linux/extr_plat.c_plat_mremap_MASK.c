
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,size_t,size_t,int ) ;
 int FUNC_1 (char*,void*,void*) ;

void *FUNC_2(void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
 if (VAR_5 == VAR_0)
  return ((void*)0);
 if (VAR_5 != VAR_2)
  FUNC_1("warning: mremap moved: %p -> %p\n", VAR_2, VAR_5);

 return VAR_5;
}
