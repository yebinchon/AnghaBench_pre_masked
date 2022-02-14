
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int * fp; int * read_pp; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct display *VAR_0)
{
   if (VAR_0->read_pp != ((void*)0))
      FUNC_1(&VAR_0->read_pp, ((void*)0), ((void*)0));

   if (VAR_0->fp != ((void*)0))
   {
      FILE *VAR_1 = VAR_0->fp;
      VAR_0->fp = ((void*)0);
      (void)FUNC_0(VAR_1);
   }
}
