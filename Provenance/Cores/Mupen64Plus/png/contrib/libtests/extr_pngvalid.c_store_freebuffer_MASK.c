
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; } ;
typedef TYPE_1__ png_store_buffer ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(png_store_buffer* VAR_0)
{
   if (VAR_0->prev)
   {
      FUNC_1(VAR_0->prev);
      FUNC_0(VAR_0->prev);
      VAR_0->prev = ((void*)0);
   }
}
