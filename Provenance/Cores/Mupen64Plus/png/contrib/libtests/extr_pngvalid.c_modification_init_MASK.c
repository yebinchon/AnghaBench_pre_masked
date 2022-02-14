
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ add; int * modify_fn; scalar_t__ chunk; int * next; } ;
typedef TYPE_1__ png_modification ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(png_modification *VAR_0)
{
   FUNC_0(VAR_0, 0, sizeof *VAR_0);
   VAR_0->next = ((void*)0);
   VAR_0->chunk = 0;
   VAR_0->modify_fn = ((void*)0);
   VAR_0->add = 0;
   FUNC_1(VAR_0);
}
