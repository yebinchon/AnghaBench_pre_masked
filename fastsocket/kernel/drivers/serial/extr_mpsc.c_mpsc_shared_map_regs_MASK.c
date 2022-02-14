
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int mpsc_routing_base_p; void* mpsc_routing_base; int sdma_intr_base_p; void* sdma_intr_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_6 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct resource *VAR_8;

 if ((VAR_8 = FUNC_3(VAR_7, VAR_1,
     VAR_2))
   && FUNC_5(VAR_8->start,
    VAR_3,
    "mpsc_routing_regs")) {
  VAR_6.mpsc_routing_base = FUNC_0(VAR_8->start,
    VAR_3);
  VAR_6.mpsc_routing_base_p = VAR_8->start;
 } else {
  FUNC_2("MPSC routing base");
  return -VAR_0;
 }

 if ((VAR_8 = FUNC_3(VAR_7, VAR_1,
     VAR_4))
   && FUNC_5(VAR_8->start,
    VAR_5,
    "sdma_intr_regs")) {
  VAR_6.sdma_intr_base = FUNC_0(VAR_8->start,
   VAR_5);
  VAR_6.sdma_intr_base_p = VAR_8->start;
 } else {
  FUNC_1(VAR_6.mpsc_routing_base);
  FUNC_4(VAR_6.mpsc_routing_base_p,
    VAR_3);
  FUNC_2("SDMA intr base");
  return -VAR_0;
 }

 return 0;
}
