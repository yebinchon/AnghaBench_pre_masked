
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct bfa_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_bbcredit; } ;
struct bfa_fcport_s {TYPE_1__ cfg; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;

void
FUNC_1(struct bfa_s *VAR_0, u16 VAR_1)
{
 struct bfa_fcport_s *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cfg.tx_bbcredit = (u8)VAR_1;
}
