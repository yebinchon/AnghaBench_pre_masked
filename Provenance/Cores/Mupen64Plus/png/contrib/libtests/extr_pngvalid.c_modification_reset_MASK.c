
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ removed; scalar_t__ added; scalar_t__ modified; } ;
typedef TYPE_1__ png_modification ;



__attribute__((used)) static void
FUNC_0(png_modification *VAR_0)
{
   if (VAR_0 != ((void*)0))
   {
      VAR_0->modified = 0;
      VAR_0->added = 0;
      VAR_0->removed = 0;
      FUNC_0(VAR_0->next);
   }
}
