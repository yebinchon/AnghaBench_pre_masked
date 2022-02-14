
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* gadget; } ;
struct isp1301 {TYPE_1__ otg; } ;
struct TYPE_4__ {scalar_t__ a_alt_hnp_support; scalar_t__ a_hnp_support; scalar_t__ b_hnp_enable; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct isp1301 *VAR_0)
{
 VAR_0->otg.gadget->b_hnp_enable = 0;
 VAR_0->otg.gadget->a_hnp_support = 0;
 VAR_0->otg.gadget->a_alt_hnp_support = 0;
 return FUNC_0(VAR_0->otg.gadget);
}
