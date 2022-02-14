
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _reent {int dummy; } ;


 void* FUNC_0 (struct _reent*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

void* FUNC_2(struct _reent *VAR_0, size_t VAR_1, size_t VAR_2)
{
   void *VAR_3 = FUNC_0(VAR_0, VAR_1*VAR_2);

   if(VAR_3)
      FUNC_1(VAR_3, 0, VAR_1*VAR_2);

   return VAR_3;
}
