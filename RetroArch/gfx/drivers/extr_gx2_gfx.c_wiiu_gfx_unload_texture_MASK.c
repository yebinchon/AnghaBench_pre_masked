
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int image; } ;
struct TYPE_5__ {TYPE_1__ surface; } ;
typedef TYPE_2__ GX2Texture ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uintptr_t VAR_1)
{
   GX2Texture *VAR_2 = (GX2Texture *)VAR_1;

   if (!VAR_2)
      return;

   FUNC_0(VAR_2->surface.image);
   FUNC_1(VAR_2);
}
