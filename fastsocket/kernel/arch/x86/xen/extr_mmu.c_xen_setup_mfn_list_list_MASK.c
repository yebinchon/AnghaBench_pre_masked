
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_pfn; int pfn_to_mfn_frame_list_list; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

void FUNC_2(void)
{
 FUNC_0(VAR_0 == &VAR_2);

 VAR_0->arch.pfn_to_mfn_frame_list_list =
  FUNC_1(VAR_1);
 VAR_0->arch.max_pfn = VAR_3;
}
