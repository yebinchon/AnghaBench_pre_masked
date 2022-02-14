
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_11__ {size_t type; int numfrm; int nwwn; int pwwn; } ;
struct TYPE_10__ {size_t status; size_t speed; size_t* subtest_status; int frm_sz; int numbuffer; int distance; int latency; } ;
struct TYPE_12__ {TYPE_4__ teststart; TYPE_3__ testcomp; } ;
struct bfi_diag_dport_scn_s {size_t state; TYPE_5__ info; } ;
struct TYPE_14__ {size_t end_time; size_t status; size_t roundtrip_latency; size_t est_cable_distance; size_t buffer_required; size_t frmsz; size_t speed; TYPE_6__* subtest; } ;
struct TYPE_8__ {size_t state; } ;
struct TYPE_9__ {TYPE_1__ scn; } ;
struct bfa_dport_s {int bfa; TYPE_7__ result; void* lpcnt; int rp_nwwn; int rp_pwwn; TYPE_2__ i2hmsg; } ;
struct bfa_diag_dport_result_s {int dummy; } ;
struct TYPE_13__ {size_t status; size_t start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (struct bfa_dport_s*,int ) ;
 int FUNC_5 (int ,size_t) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_dport_s *VAR_6, struct bfi_diag_dport_scn_s *VAR_7)
{
 int VAR_8;
 uint8_t VAR_9;

 FUNC_5(VAR_6->bfa, VAR_7->state);
 VAR_6->i2hmsg.scn.state = VAR_7->state;

 switch (VAR_6->i2hmsg.scn.state) {
 case 130:
  VAR_6->result.end_time = FUNC_2();
  FUNC_5(VAR_6->bfa, VAR_6->result.end_time);

  VAR_6->result.status = VAR_7->info.testcomp.status;
  FUNC_5(VAR_6->bfa, VAR_6->result.status);

  VAR_6->result.roundtrip_latency =
   FUNC_6(VAR_7->info.testcomp.latency);
  VAR_6->result.est_cable_distance =
   FUNC_6(VAR_7->info.testcomp.distance);
  VAR_6->result.buffer_required =
   FUNC_0(VAR_7->info.testcomp.numbuffer);

  VAR_6->result.frmsz = FUNC_0(VAR_7->info.testcomp.frm_sz);
  VAR_6->result.speed = VAR_7->info.testcomp.speed;

  FUNC_5(VAR_6->bfa, VAR_6->result.roundtrip_latency);
  FUNC_5(VAR_6->bfa, VAR_6->result.est_cable_distance);
  FUNC_5(VAR_6->bfa, VAR_6->result.buffer_required);
  FUNC_5(VAR_6->bfa, VAR_6->result.frmsz);
  FUNC_5(VAR_6->bfa, VAR_6->result.speed);

  for (VAR_8 = VAR_2; VAR_8 < VAR_3; VAR_8++) {
   VAR_6->result.subtest[VAR_8].status =
    VAR_7->info.testcomp.subtest_status[VAR_8];
   FUNC_5(VAR_6->bfa, VAR_6->result.subtest[VAR_8].status);
  }
  break;

 case 129:
 case 134:
  FUNC_7(&VAR_6->result, 0,
    sizeof(struct bfa_diag_dport_result_s));
  break;

 case 128:
  FUNC_7(&VAR_6->result, 0,
    sizeof(struct bfa_diag_dport_result_s));
  VAR_6->rp_pwwn = VAR_7->info.teststart.pwwn;
  VAR_6->rp_nwwn = VAR_7->info.teststart.nwwn;
  VAR_6->lpcnt = FUNC_6(VAR_7->info.teststart.numfrm);
  FUNC_1(VAR_6, VAR_0);
  break;

 case 131:
  VAR_9 = VAR_7->info.teststart.type;
  VAR_6->result.subtest[VAR_9].start_time =
   FUNC_2();
  VAR_6->result.subtest[VAR_9].status =
   VAR_5;

  FUNC_5(VAR_6->bfa, VAR_9);
  FUNC_5(VAR_6->bfa,
   VAR_6->result.subtest[VAR_9].start_time);
  break;

 case 132:
 case 135:
 case 136:
 case 133:
  VAR_6->result.status = VAR_4;
  break;

 default:
  FUNC_3(VAR_6->bfa, VAR_7->state);
 }

 FUNC_4(VAR_6, VAR_1);
}
