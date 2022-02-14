
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int heartbeat; } ;
struct bfa_ioc_s {scalar_t__ hb_count; TYPE_1__ ioc_regs; } ;


 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct bfa_ioc_s *VAR_1 = VAR_0;
 u32 VAR_2;

 VAR_2 = FUNC_3(VAR_1->ioc_regs.heartbeat);
 if (VAR_1->hb_count == VAR_2) {
  FUNC_2(VAR_1);
  return;
 } else {
  VAR_1->hb_count = VAR_2;
 }

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
