
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef int memory_object_t ;
typedef TYPE_2__* fourk_pager_t ;
struct TYPE_4__ {scalar_t__ mo_control; } ;
struct TYPE_5__ {scalar_t__ ref_count; TYPE_1__ fourk_pgr_hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

vm_object_t
FUNC_3(
 memory_object_t VAR_2)
{
 fourk_pager_t VAR_3;
 vm_object_t VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0)) {
  return VAR_1;
 }

 FUNC_0(VAR_3->ref_count > 0);
 FUNC_0(VAR_3->fourk_pgr_hdr.mo_control != VAR_0);
 VAR_4 = FUNC_2(VAR_3->fourk_pgr_hdr.mo_control);
 FUNC_0(VAR_4 != VAR_1);
 return VAR_4;
}
