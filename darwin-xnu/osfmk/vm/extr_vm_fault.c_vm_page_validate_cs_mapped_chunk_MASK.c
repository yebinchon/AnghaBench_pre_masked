
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
struct vnode {int dummy; } ;
typedef int * memory_object_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int code_signed; int pager_ready; int paging_in_progress; scalar_t__ paging_offset; int * pager; int internal; scalar_t__ terminating; int alive; } ;
struct TYPE_7__ {int vmp_busy; scalar_t__ vmp_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vnode*,int *,scalar_t__,void const*,int ,unsigned int*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct vnode* FUNC_4 (int *) ;

void
FUNC_5(
 vm_page_t VAR_3,
 const void *VAR_4,
 vm_offset_t VAR_5,
 vm_size_t VAR_6,
 boolean_t *VAR_7,
 unsigned *VAR_8)
{
 vm_object_t VAR_9;
 vm_object_offset_t VAR_10, VAR_11;
 memory_object_t VAR_12;
 struct vnode *VAR_13;
 boolean_t VAR_14;
 unsigned VAR_15;

 *VAR_7 = VAR_0;
 *VAR_8 = 0;

 FUNC_1(VAR_3->vmp_busy);
 VAR_9 = FUNC_0(VAR_3);
 FUNC_3(VAR_9);

 FUNC_1(VAR_9->code_signed);
 VAR_10 = VAR_3->vmp_offset;

 if (!VAR_9->alive || VAR_9->terminating || VAR_9->pager == ((void*)0)) {




  return;
 }





 FUNC_1(!VAR_9->internal);
 FUNC_1(VAR_9->pager != ((void*)0));
 FUNC_1(VAR_9->pager_ready);

 VAR_12 = VAR_9->pager;
 FUNC_1(VAR_9->paging_in_progress);
 VAR_13 = FUNC_4(VAR_12);


 VAR_11 = VAR_5;
 FUNC_1(VAR_11 < VAR_1);

 VAR_15 = 0;
 VAR_14 = FUNC_2(VAR_13,
          VAR_12,
          (VAR_9->paging_offset +
           VAR_10 +
           VAR_11),
          (const void *)((const char *)VAR_4
          + VAR_11),
          VAR_6,
          &VAR_15);
 if (VAR_14) {
  *VAR_7 = VAR_2;
 }
 if (VAR_15) {
  *VAR_8 = VAR_15;
 }
}
