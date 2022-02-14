
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct IDAT* idat; int * chunk; int (* alloc ) (struct file* const,int ) ;TYPE_2__* global; } ;
struct IDAT {TYPE_2__* global; TYPE_1__* idat_list_tail; TYPE_1__* idat_list_head; struct file* file; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ idat_cache; } ;


 int FUNC_0 (struct IDAT) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file* const,int ) ;

__attribute__((used)) static void
FUNC_3(struct IDAT * const VAR_0, struct file * const VAR_1)






{
   FUNC_1(VAR_1->chunk == ((void*)0));
   FUNC_1(VAR_1->idat == ((void*)0));

   FUNC_0(*VAR_0);

   VAR_0->file = VAR_1;
   VAR_0->global = VAR_1->global;




   VAR_0->global->idat_cache.count = 0;
   VAR_0->idat_list_head = VAR_0->idat_list_tail = &VAR_0->global->idat_cache;




   VAR_1->alloc(VAR_1, 0 );
   FUNC_1(VAR_1->chunk != ((void*)0));




   VAR_1->idat = VAR_0;
}
