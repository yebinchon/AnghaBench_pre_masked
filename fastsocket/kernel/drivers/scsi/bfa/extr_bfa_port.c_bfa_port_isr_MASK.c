
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int status; } ;
struct TYPE_9__ {int status; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int status; } ;
union bfi_port_i2h_msg_u {TYPE_5__ clearstats_rsp; TYPE_4__ getstats_rsp; TYPE_3__ disable_rsp; TYPE_2__ enable_rsp; } ;
struct TYPE_6__ {int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfa_port_s {int stats_busy; int endis_pending; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_port_s*,int ) ;
 int FUNC_2 (struct bfa_port_s*,int ) ;
 int FUNC_3 (struct bfa_port_s*,int ) ;
 int FUNC_4 (struct bfa_port_s*,int ) ;
 int FUNC_5 (struct bfa_port_s*,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, struct bfi_mbmsg_s *VAR_2)
{
 struct bfa_port_s *VAR_3 = (struct bfa_port_s *) VAR_1;
 union bfi_port_i2h_msg_u *VAR_4;

 VAR_4 = (union bfi_port_i2h_msg_u *) VAR_2;
 FUNC_5(VAR_3, VAR_2->mh.msg_id);

 switch (VAR_2->mh.msg_id) {
 case 129:
  if (VAR_3->endis_pending == VAR_0)
   break;
  FUNC_3(VAR_3, VAR_4->enable_rsp.status);
  break;

 case 130:
  if (VAR_3->endis_pending == VAR_0)
   break;
  FUNC_2(VAR_3, VAR_4->disable_rsp.status);
  break;

 case 128:

  if (VAR_3->stats_busy == VAR_0)
   break;
  FUNC_4(VAR_3, VAR_4->getstats_rsp.status);
  break;

 case 131:
  if (VAR_3->stats_busy == VAR_0)
   break;
  FUNC_1(VAR_3, VAR_4->clearstats_rsp.status);
  break;

 default:
  FUNC_0(1);
 }
}
