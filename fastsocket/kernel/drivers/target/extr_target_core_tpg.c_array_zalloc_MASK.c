
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int FUNC_0 (void**,int) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static void *FUNC_2(int VAR_0, size_t VAR_1, gfp_t VAR_2)
{
 void **VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0 * sizeof(void*), VAR_2);
 if (!VAR_3)
  return ((void*)0);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3[VAR_4] = FUNC_1(VAR_1, VAR_2);
  if (!VAR_3[VAR_4]) {
   FUNC_0(VAR_3, VAR_0);
   return ((void*)0);
  }
 }
 return VAR_3;
}
