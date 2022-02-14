
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bfa_rport_speed_req_s {int mh; scalar_t__ speed; int fw_handle; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct bfa_rport_s {int bfa; TYPE_1__ rport_info; int fw_handle; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfa_rport_speed_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_rport_s *VAR_5)
{
 struct bfa_rport_speed_req_s *VAR_6;




 VAR_6 = FUNC_1(VAR_5->bfa, VAR_1);
 if (!VAR_6) {
  FUNC_3(VAR_5->bfa, VAR_5->rport_info.speed);
  return VAR_0;
 }

 FUNC_4(VAR_6->mh, VAR_3, VAR_4,
   FUNC_0(VAR_5->bfa));
 VAR_6->fw_handle = VAR_5->fw_handle;
 VAR_6->speed = (u8)VAR_5->rport_info.speed;




 FUNC_2(VAR_5->bfa, VAR_1, VAR_6->mh);
 return VAR_2;
}
