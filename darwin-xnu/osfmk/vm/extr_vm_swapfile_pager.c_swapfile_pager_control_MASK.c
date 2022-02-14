
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* swapfile_pager_t ;
typedef TYPE_3__* memory_object_t ;
typedef int memory_object_control_t ;
struct TYPE_10__ {int * mo_pager_ops; } ;
struct TYPE_8__ {int mo_control; } ;
struct TYPE_9__ {TYPE_1__ swp_pgr_hdr; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;

memory_object_control_t
FUNC_1(
 memory_object_t VAR_3)
{
 swapfile_pager_t VAR_4;

 if (VAR_3 == VAR_1 ||
     VAR_3->mo_pager_ops != &VAR_2) {
  return VAR_0;
 }
 VAR_4 = FUNC_0(VAR_3);
 return VAR_4->swp_pgr_hdr.mo_control;
}
