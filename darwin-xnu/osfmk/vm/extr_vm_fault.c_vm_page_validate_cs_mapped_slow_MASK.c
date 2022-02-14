
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vnode {int dummy; } ;
typedef int * memory_object_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int code_signed; int pager_ready; int paging_in_progress; int * pager; scalar_t__ paging_offset; int internal; } ;
struct TYPE_7__ {int vmp_busy; void* vmp_cs_tainted; void* vmp_cs_validated; void* vmp_cs_nx; scalar_t__ vmp_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vnode*,int *,scalar_t__,void const*,int ,unsigned int*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 struct vnode* FUNC_5 (int *) ;

void
FUNC_6(
 vm_page_t VAR_6,
 const void *VAR_7)
{
 vm_object_t VAR_8;
 memory_object_offset_t VAR_9;
 memory_object_t VAR_10;
 struct vnode *VAR_11;
 boolean_t VAR_12;
 unsigned VAR_13;

 FUNC_1(VAR_6->vmp_busy);
 VAR_8 = FUNC_0(VAR_6);
 FUNC_3(VAR_8);

 VAR_5++;






 FUNC_1(VAR_8->code_signed);
 FUNC_1(!VAR_8->internal);
 FUNC_1(VAR_8->pager != ((void*)0));
 FUNC_1(VAR_8->pager_ready);

 VAR_10 = VAR_8->pager;
 FUNC_1(VAR_8->paging_in_progress);
 VAR_11 = FUNC_5(VAR_10);
 VAR_9 = VAR_6->vmp_offset + VAR_8->paging_offset;


 VAR_13 = 0;
 VAR_12 = FUNC_2(VAR_11,
          VAR_10,
          VAR_9,
          (const void *)((const char *)VAR_7),
          VAR_3,
          &VAR_13);

 if (VAR_13 & VAR_2) {
  VAR_6->vmp_cs_tainted = VAR_4;
 }
 if (VAR_13 & VAR_1) {
  VAR_6->vmp_cs_nx = VAR_4;
 }
 if (VAR_12) {
  VAR_6->vmp_cs_validated = VAR_4;
 }
}
