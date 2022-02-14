
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int status_code; TYPE_1__* global; int out_name; int * out; int * file; int * chunk; int * idat; } ;
struct TYPE_2__ {int status_code; } ;


 int FUNC_0 (struct file) ;
 int FUNC_1 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (struct file*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_2)
{
   int VAR_3;




   if (VAR_2->idat != ((void*)0))
      FUNC_1(&VAR_2->idat);

   if (VAR_2->chunk != ((void*)0))
      FUNC_2(&VAR_2->chunk);

   VAR_3 = VAR_2->status_code;

   if (VAR_2->file != ((void*)0))
      (void)FUNC_4(VAR_2->file);

   if (VAR_2->out != ((void*)0))
   {



      if (FUNC_5(VAR_2->out) | FUNC_6(VAR_2->out) | FUNC_4(VAR_2->out))
      {
         FUNC_7(VAR_2->out_name);
         FUNC_3(VAR_2, VAR_0, "output write error");
         VAR_3 |= VAR_1;
      }
   }


   VAR_2->global->status_code |= VAR_3;

   FUNC_0(*VAR_2);

   return VAR_3;
}
