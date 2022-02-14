
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
typedef int vm_object_offset_t ;
struct TYPE_12__ {int vmp_fictitious; void* vmp_busy; int vmp_wanted; void* vmp_free_when_done; void* vmp_private; void* vmp_precious; void* vmp_cleaning; int vmp_offset; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,char*,int ,int ,TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static void
FUNC_11(
 vm_page_t VAR_5,
 vm_page_t VAR_6,
 vm_object_t VAR_7,
 vm_object_offset_t VAR_8)
{
 FUNC_5(!VAR_5->vmp_busy);




 FUNC_4(VAR_3,
     "vm_pageclean_setup, obj 0x%X off 0x%X page 0x%X new 0x%X new_off 0x%X\n",
  FUNC_2(VAR_5), VAR_5->vmp_offset, VAR_5,
  VAR_6, VAR_8);

 FUNC_6(FUNC_1(VAR_5));




 VAR_5->vmp_cleaning = VAR_1;
 FUNC_0(VAR_5, VAR_0);
 VAR_5->vmp_precious = VAR_0;





 FUNC_5(VAR_6->vmp_fictitious);
 FUNC_5(FUNC_1(VAR_6) == VAR_4);
 VAR_6->vmp_fictitious = VAR_0;
 VAR_6->vmp_private = VAR_1;
 VAR_6->vmp_free_when_done = VAR_1;
 FUNC_3(VAR_6, FUNC_1(VAR_5));

 FUNC_8();
 FUNC_10(VAR_6, VAR_2, VAR_1);
 FUNC_9();

 FUNC_7(VAR_6, VAR_7, VAR_8, VAR_2);
 FUNC_5(!VAR_6->vmp_wanted);
 VAR_6->vmp_busy = VAR_0;
}
