
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef scalar_t__ memory_object_t ;
struct TYPE_15__ {int internal; scalar_t__ pager; scalar_t__ paging_offset; } ;
struct TYPE_14__ {int vmp_busy; int vmp_dirty; int vmp_precious; scalar_t__ vmp_restart; scalar_t__ vmp_error; scalar_t__ vmp_absent; scalar_t__ vmp_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

void
FUNC_13(
 vm_page_t VAR_5)
{
 vm_object_t VAR_6;
 vm_object_offset_t VAR_7;
 memory_object_t VAR_8;

 FUNC_4(VAR_4,
  "vm_pageout_initialize_page, page 0x%X\n",
  VAR_5, 0, 0, 0, 0);

 FUNC_5(VAR_3);

 VAR_6 = FUNC_3(VAR_5);

 FUNC_5(VAR_5->vmp_busy);
 FUNC_5(VAR_6->internal);




 FUNC_5(!VAR_5->vmp_absent);
 FUNC_5(!VAR_5->vmp_error);
 FUNC_5(VAR_5->vmp_dirty);




 VAR_7 = VAR_5->vmp_offset + VAR_6->paging_offset;

 if (VAR_5->vmp_absent || VAR_5->vmp_error || VAR_5->vmp_restart || (!VAR_5->vmp_dirty && !VAR_5->vmp_precious)) {
  FUNC_7("reservation without pageout?");

  FUNC_1(VAR_5);
  FUNC_12(VAR_6);

  return;
 }







 VAR_8 = VAR_6->pager;

 if (VAR_8 == VAR_1) {
  FUNC_7("missing pager for copy object");

  FUNC_1(VAR_5);
  return;
 }




 FUNC_8(FUNC_2(VAR_5));
 FUNC_0(VAR_5, VAR_0);




 FUNC_10(VAR_6);
 FUNC_12(VAR_6);
 FUNC_6(VAR_8, VAR_7, VAR_2);

 FUNC_9(VAR_6);
 FUNC_11(VAR_6);
}
