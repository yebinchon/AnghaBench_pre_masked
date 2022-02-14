
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 size_t FUNC_4 (int *) ;
 void* FUNC_5 (size_t) ;
 int * FUNC_6 () ;

int FUNC_7(void ** VAR_2, size_t * VAR_3)
{
   FILE * VAR_4;
   int VAR_5;
   size_t VAR_6 = 0;

   if (VAR_2 != ((void*)0)) *VAR_2 = ((void*)0);
   *VAR_3 = 0;

   VAR_4 = FUNC_6();

   VAR_5 = FUNC_0(VAR_4);
   if (VAR_5 != 0)
   {
      FUNC_1(VAR_4);
      return VAR_5;
   }

   FUNC_3(VAR_4, 0, VAR_0);
   *VAR_3 = FUNC_4(VAR_4);
   FUNC_3(VAR_4, 0, VAR_1);

   if (VAR_2 != ((void*)0))
   {
      *VAR_2 = FUNC_5(*VAR_3);
      VAR_6 = FUNC_2(*VAR_2, 1, *VAR_3, VAR_4);
   }

   FUNC_1(VAR_4);
   return 0;
}
