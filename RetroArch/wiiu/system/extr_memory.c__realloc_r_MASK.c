
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _reent {int dummy; } ;


 int FUNC_0 (struct _reent*,void*) ;
 void* FUNC_1 (struct _reent*,size_t) ;
 size_t FUNC_2 (struct _reent*,void*) ;
 int FUNC_3 (void*,void*,size_t) ;

void * FUNC_4(struct _reent *VAR_0, void *VAR_1, size_t VAR_2)
{
   void *VAR_3 = ((void*)0);
   if (!VAR_1)
      return FUNC_1(VAR_0, VAR_2);

   if (FUNC_2(VAR_0, VAR_1) >= VAR_2)
      return VAR_1;

   VAR_3 = FUNC_1(VAR_0, VAR_2);

   if(!VAR_3)
      return ((void*)0);

   FUNC_3(VAR_3, VAR_1, FUNC_2(VAR_0, VAR_1));
   FUNC_0(VAR_0, VAR_1);

   return VAR_3;
}
