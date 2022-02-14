
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* vector_upl_t ;
typedef TYPE_2__* upl_t ;
typedef scalar_t__ upl_page_info_array_t ;
typedef size_t uint32_t ;
struct upl_page_info {int dummy; } ;
struct TYPE_8__ {int size; scalar_t__ highest_page; } ;
struct TYPE_7__ {scalar_t__ highest_page; TYPE_1__* vector_upl; } ;
struct TYPE_6__ {int size; size_t num_upls; TYPE_5__** upl_elems; scalar_t__ pagelist; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

void
FUNC_6(upl_t VAR_1)
{
 if(FUNC_5(VAR_1)) {
  uint32_t VAR_2=0;
  vector_upl_t VAR_3 = VAR_1->vector_upl;

  if(VAR_3) {
   vm_offset_t VAR_4=0, VAR_5=0;

   VAR_3->pagelist = (upl_page_info_array_t)FUNC_3(sizeof(struct upl_page_info)*(VAR_3->size/VAR_0));

   for(VAR_2=0; VAR_2 < VAR_3->num_upls; VAR_2++) {
    VAR_5 = sizeof(struct upl_page_info) * VAR_3->upl_elems[VAR_2]->size/VAR_0;
    FUNC_2(FUNC_0(VAR_3->upl_elems[VAR_2]), (char*)VAR_3->pagelist + VAR_4, VAR_5);
    VAR_4 += VAR_5;
    if(VAR_3->upl_elems[VAR_2]->highest_page > VAR_1->highest_page)
     VAR_1->highest_page = VAR_3->upl_elems[VAR_2]->highest_page;
   }
   FUNC_1( VAR_4 == (sizeof(struct upl_page_info)*(VAR_3->size/VAR_0)) );
  }
  else
   FUNC_4("vector_upl_set_pagelist was passed a non-vectored upl\n");
 }
 else
  FUNC_4("vector_upl_set_pagelist was passed a NULL upl\n");

}
