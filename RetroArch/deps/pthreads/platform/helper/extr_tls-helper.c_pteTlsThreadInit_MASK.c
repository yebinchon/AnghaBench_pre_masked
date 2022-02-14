
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

void * FUNC_1(void)
{
   int VAR_1;
   void **VAR_2 = (void **) FUNC_0(VAR_0 * sizeof(void*));


   for (VAR_1=0; VAR_1<VAR_0;VAR_1++)
      VAR_2[VAR_1] = 0;

   return (void *) VAR_2;
}
