
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ,unsigned long) ;
 void** VAR_1 ;
 void** VAR_2 ;

void *FUNC_2(int VAR_3, unsigned long VAR_4)
{
 void *VAR_5 = VAR_1[VAR_3];

 VAR_4 = FUNC_0(VAR_4, VAR_0);

 if (!VAR_5 || (VAR_5 + VAR_4) >= VAR_2[VAR_3])
  return ((void*)0);

 VAR_1[VAR_3] += VAR_4;
 FUNC_1(VAR_5, 0, VAR_4);

 return VAR_5;
}
