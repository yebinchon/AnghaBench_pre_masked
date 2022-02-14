
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mark; scalar_t__ max_total; scalar_t__ max_limit; scalar_t__ max_max; scalar_t__ total; scalar_t__ limit; scalar_t__ current; scalar_t__ max; int * list; int * store; } ;
typedef TYPE_1__ store_pool ;
typedef int png_store ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(png_store *VAR_0, store_pool *VAR_1)
{
   FUNC_0(VAR_1, 0, sizeof *VAR_1);

   VAR_1->store = VAR_0;
   VAR_1->list = ((void*)0);
   VAR_1->max = VAR_1->current = VAR_1->limit = VAR_1->total = 0;
   VAR_1->max_max = VAR_1->max_limit = VAR_1->max_total = 0;
   FUNC_1(VAR_1->mark);
}
