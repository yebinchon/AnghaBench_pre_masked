
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfa_s {int dummy; } ;
struct TYPE_2__ {int faa_state; } ;
struct bfa_fcport_s {TYPE_1__ cfg; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*,int ) ;

void
FUNC_2(struct bfa_s *VAR_0, u8 VAR_1)
{
 struct bfa_fcport_s *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1);
 VAR_2->cfg.faa_state = VAR_1;
}
