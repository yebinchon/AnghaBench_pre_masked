
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ state; int default_a; TYPE_2__* gadget; TYPE_1__* host; } ;
struct isp1301 {int last_otg_ctrl; TYPE_3__ otg; } ;
struct TYPE_5__ {int is_a_peripheral; } ;
struct TYPE_4__ {scalar_t__ is_b_host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isp1301*) ;
 int FUNC_1 (struct isp1301*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,char const*) ;
 int FUNC_5 (struct isp1301*) ;

__attribute__((used)) static void FUNC_6(struct isp1301 *VAR_3, const char *VAR_4)
{
 u32 VAR_5;

 if (VAR_3->otg.state == VAR_1)
  return;

 VAR_3->otg.default_a = 1;
 if (VAR_3->otg.host) {
  VAR_3->otg.host->is_b_host = 0;
  FUNC_1(VAR_3);
 }
 if (VAR_3->otg.gadget) {
  VAR_3->otg.gadget->is_a_peripheral = 1;
  FUNC_0(VAR_3);
 }
 VAR_3->otg.state = VAR_1;
 VAR_5 = FUNC_2(VAR_0) & VAR_2;
 FUNC_3(VAR_5, VAR_0);
 VAR_3->last_otg_ctrl = VAR_5;
 FUNC_4("  --> %s/%s\n", FUNC_5(VAR_3), VAR_4);
}
