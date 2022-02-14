
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void *
FUNC_3(void)
{
   void *VAR_3;
   FUNC_1(&VAR_2);
   VAR_3 = VAR_1;
   if (VAR_3)
      VAR_1 = *(void **)VAR_3;
   FUNC_2(&VAR_2);
   if (!VAR_3)
      VAR_3 = FUNC_0(VAR_0, "alloc_msgbuf");
   return VAR_3;
}
