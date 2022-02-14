
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ font; } ;
typedef TYPE_1__ d3dfonts_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, bool VAR_1)
{
   d3dfonts_t *VAR_2 = (d3dfonts_t*)VAR_0;

   if (!VAR_2)
      return;

   if (VAR_2->font)
      FUNC_0(VAR_2->font);

   FUNC_1(VAR_2);
}
