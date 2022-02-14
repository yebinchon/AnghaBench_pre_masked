
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (void const*,int ,int ) ;

__attribute__((used)) static void * FUNC_2(const void *VAR_2,
       u8 VAR_3)
{
 void *VAR_4;

 if (!VAR_2 || !VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 return VAR_4;
}
