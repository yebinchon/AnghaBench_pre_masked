
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rotation; } ;
typedef TYPE_1__ gl1_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1,
      unsigned VAR_2)
{
   gl1_t *VAR_3 = (gl1_t*)VAR_1;

   if (!VAR_3)
      return;

   VAR_3->rotation = 90 * VAR_2;
   FUNC_0(VAR_3, &VAR_0, 1);
}
