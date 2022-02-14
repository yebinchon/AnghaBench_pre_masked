
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* swapfile_pager_t ;
struct TYPE_4__ {int mo_control; } ;
struct TYPE_5__ {int is_ready; TYPE_1__ swp_pgr_hdr; int * swapfile_vnode; int is_mapped; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(
 swapfile_pager_t VAR_0)
{
 FUNC_0(VAR_0->is_ready);
 FUNC_0(!VAR_0->is_mapped);

 if (VAR_0->swapfile_vnode != ((void*)0)) {
  VAR_0->swapfile_vnode = ((void*)0);
 }


 FUNC_1(VAR_0->swp_pgr_hdr.mo_control, 0);
}
