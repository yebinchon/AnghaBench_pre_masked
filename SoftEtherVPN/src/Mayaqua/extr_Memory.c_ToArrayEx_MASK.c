
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LIST ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;

void *FUNC_4(LIST *VAR_0, bool VAR_1)
{
 void *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 if (VAR_1 == 0)
 {
  VAR_2 = FUNC_2(sizeof(void *) * FUNC_1(VAR_0));
 }
 else
 {
  VAR_2 = FUNC_3(sizeof(void *) * FUNC_1(VAR_0));
 }

 FUNC_0(VAR_0, VAR_2);

 return VAR_2;
}
