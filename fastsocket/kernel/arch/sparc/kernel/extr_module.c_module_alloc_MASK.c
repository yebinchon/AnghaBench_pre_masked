
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,unsigned long) ;
 void* FUNC_2 (unsigned long) ;

void *FUNC_3(unsigned long VAR_1)
{
 void *VAR_2;


 if (VAR_1 == 0)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_0(-VAR_0);
 else
  FUNC_1(VAR_2, 0, VAR_1);

 return VAR_2;
}
