
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int * name; } ;


 struct spu_context* FUNC_0 (int*) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*,int,struct file*,int,int *) ;
 TYPE_1__* VAR_0 ;

int FUNC_4(struct file *VAR_1, loff_t *VAR_2)
{
 struct spu_context *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 while ((VAR_3 = FUNC_0(&VAR_4)) != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6)
   return VAR_6;

  for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
   VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_1, VAR_4, VAR_2);
   if (VAR_6) {
    FUNC_2(VAR_3);
    return VAR_6;
   }
  }

  FUNC_2(VAR_3);


  VAR_4++;
 }

 return 0;
}
