
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vector_upl_t ;
typedef TYPE_2__* upl_t ;
struct upl_page_info {int dummy; } ;
struct _vector_upl {int dummy; } ;
struct TYPE_6__ {TYPE_1__* vector_upl; } ;
struct TYPE_5__ {scalar_t__ invalid_upls; scalar_t__ num_upls; int size; scalar_t__ offset; struct TYPE_5__* pagelist; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(upl_t VAR_1)
{
 if(VAR_1) {
  vector_upl_t VAR_2 = VAR_1->vector_upl;
  if(VAR_2) {
   if(VAR_2->invalid_upls != VAR_2->num_upls)
    FUNC_1("Deallocating non-empty Vectored UPL\n");
   FUNC_0(VAR_2->pagelist,(sizeof(struct upl_page_info)*(VAR_2->size/VAR_0)));
   VAR_2->invalid_upls=0;
   VAR_2->num_upls = 0;
   VAR_2->pagelist = ((void*)0);
   VAR_2->size = 0;
   VAR_2->offset = 0;
   FUNC_0(VAR_2, sizeof(struct _vector_upl));
   VAR_2 = (vector_upl_t)0xfeedfeed;
  }
  else
   FUNC_1("vector_upl_deallocate was passed a non-vectored upl\n");
 }
 else
  FUNC_1("vector_upl_deallocate was passed a NULL upl\n");
}
