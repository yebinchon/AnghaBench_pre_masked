
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smt_p_mac_status {int st_lost_ct; int st_error_ct; int st_frame_ct; int st_sba; int st_t_min; int st_tvx_value; int st_t_max; int st_t_neg; int st_t_req; int st_mac_index; int st_mib_index; } ;
struct TYPE_6__ {TYPE_2__* m; TYPE_1__* a; } ;
struct s_smc {TYPE_3__ mib; } ;
struct TYPE_5__ {int fddiMACLost_Ct; int fddiMACError_Ct; int fddiMACFrame_Ct; int fddiMACT_Min; int fddiMACTvxValue; int fddiMACT_Max; int fddiMACT_Neg; int fddiMACT_Req; } ;
struct TYPE_4__ {int fddiPATHSbaPayload; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct smt_p_mac_status*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct s_smc*,int) ;
 int FUNC_2 (struct s_smc*) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_4, struct smt_p_mac_status *VAR_5)
{
 FUNC_0(VAR_5,VAR_3) ;

 VAR_5->st_mib_index = VAR_0 ;
 VAR_5->st_mac_index = FUNC_1(VAR_4,1) ;

 FUNC_2(VAR_4) ;




 VAR_5->st_t_req = VAR_4->mib.m[VAR_1].fddiMACT_Req ;
 VAR_5->st_t_neg = VAR_4->mib.m[VAR_1].fddiMACT_Neg ;
 VAR_5->st_t_max = VAR_4->mib.m[VAR_1].fddiMACT_Max ;
 VAR_5->st_tvx_value = VAR_4->mib.m[VAR_1].fddiMACTvxValue ;
 VAR_5->st_t_min = VAR_4->mib.m[VAR_1].fddiMACT_Min ;

 VAR_5->st_sba = VAR_4->mib.a[VAR_2].fddiPATHSbaPayload ;
 VAR_5->st_frame_ct = VAR_4->mib.m[VAR_1].fddiMACFrame_Ct ;
 VAR_5->st_error_ct = VAR_4->mib.m[VAR_1].fddiMACError_Ct ;
 VAR_5->st_lost_ct = VAR_4->mib.m[VAR_1].fddiMACLost_Ct ;
}
