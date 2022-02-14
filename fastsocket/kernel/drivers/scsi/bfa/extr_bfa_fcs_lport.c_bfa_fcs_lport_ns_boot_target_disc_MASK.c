
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct bfa_fcs_rport_s {int dummy; } ;
struct TYPE_6__ {TYPE_1__* fcs; } ;
typedef TYPE_2__ bfa_fcs_lport_t ;
struct TYPE_5__ {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct bfa_fcs_rport_s* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int*,int *) ;

__attribute__((used)) static void
FUNC_3(bfa_fcs_lport_t *VAR_1)
{

 struct bfa_fcs_rport_s *VAR_2;
 u8 VAR_3;
 wwn_t VAR_4[VAR_0];
 int VAR_5;

 FUNC_2(VAR_1->fcs->bfa, &VAR_3, VAR_4);

 for (VAR_5 = 0 ; VAR_5 < VAR_3; ++VAR_5) {
  VAR_2 = FUNC_1(VAR_1, VAR_4[VAR_5]);
  FUNC_0(!VAR_2);
 }
}
