
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int begin; size_t patch_func; int skip_instr; int skip_patch; } ;
typedef TYPE_1__ patch_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(patch_t **VAR_1, int VAR_2,
     int *VAR_3, int *VAR_4)
{
 patch_t *VAR_5;

 VAR_5 = *VAR_1;

 while (VAR_5 != ((void*)0) && VAR_2 == VAR_5->begin) {
  if (VAR_4[VAR_5->patch_func] == 0) {
   int VAR_6;


   *VAR_3 = VAR_2 + VAR_5->skip_instr;
   for (VAR_6 = VAR_5->skip_patch;
        VAR_6 > 0 && VAR_5 != ((void*)0);
        VAR_6--)
    VAR_5 = FUNC_0(VAR_5, VAR_0);
  } else {




   VAR_5 = FUNC_0(VAR_5, VAR_0);
  }
 }

 *VAR_1 = VAR_5;
 if (VAR_2 < *VAR_3)

  return (0);

 return (1);
}
