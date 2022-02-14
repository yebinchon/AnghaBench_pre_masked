
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref_count; int * udata; int (* udata_free ) (int *) ;} ;
typedef TYPE_1__ GRef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(GRef *VAR_0) {
 if (VAR_0->ref_count == 0) {

 } else if (--VAR_0->ref_count == 0) {
  if (VAR_0->udata_free) {
   VAR_0->udata_free(VAR_0->udata);
   VAR_0->udata = ((void*)0);
  }
  FUNC_0(VAR_0);
 }
}
