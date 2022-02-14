
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_info {unsigned long size; } ;


 int FUNC_0 (void*,void*,unsigned long) ;
 struct alloc_info* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (unsigned long) ;

__attribute__((used)) static void *FUNC_4(void *VAR_0, unsigned long VAR_1)
{
 struct alloc_info *VAR_2;
 void *VAR_3;

 if (VAR_1 == 0) {
  FUNC_2(VAR_0);
  return ((void*)0);
 }

 if (VAR_0 == ((void*)0))
  return FUNC_3(VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 if (VAR_1 <= VAR_2->size)
  return VAR_0;

 VAR_3 = FUNC_3(VAR_1);
 FUNC_0(VAR_3, VAR_0, VAR_2->size);
 FUNC_2(VAR_0);
 return VAR_3;
}
