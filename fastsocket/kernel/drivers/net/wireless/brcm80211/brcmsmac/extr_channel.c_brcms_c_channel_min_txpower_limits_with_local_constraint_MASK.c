
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txpwr_limits {void* mcs32; void** mcs_40_mimo; void** mcs_40_stbc; void** mcs_40_cdd; void** mcs_40_siso; void** mcs_20_mimo; void** mcs_20_stbc; void** mcs_20_cdd; void** mcs_20_siso; void** ofdm_40_cdd; void** ofdm_40_siso; void** ofdm_cdd; void** ofdm; void** cck; } ;
struct brcms_cm_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*,int ) ;

__attribute__((used)) static void
FUNC_1(
  struct brcms_cm_info *VAR_5, struct txpwr_limits *VAR_6,
  u8 VAR_7)
{
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_6->cck[VAR_8] = FUNC_0(VAR_6->cck[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_6->ofdm[VAR_8] = FUNC_0(VAR_6->ofdm[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_6->ofdm_cdd[VAR_8] =
      FUNC_0(VAR_6->ofdm_cdd[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_6->ofdm_40_siso[VAR_8] =
      FUNC_0(VAR_6->ofdm_40_siso[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_6->ofdm_40_cdd[VAR_8] =
      FUNC_0(VAR_6->ofdm_40_cdd[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_20_siso[VAR_8] =
      FUNC_0(VAR_6->mcs_20_siso[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_20_cdd[VAR_8] =
      FUNC_0(VAR_6->mcs_20_cdd[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_20_stbc[VAR_8] =
      FUNC_0(VAR_6->mcs_20_stbc[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->mcs_20_mimo[VAR_8] =
      FUNC_0(VAR_6->mcs_20_mimo[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_40_siso[VAR_8] =
      FUNC_0(VAR_6->mcs_40_siso[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_40_cdd[VAR_8] =
      FUNC_0(VAR_6->mcs_40_cdd[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mcs_40_stbc[VAR_8] =
      FUNC_0(VAR_6->mcs_40_stbc[VAR_8], VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->mcs_40_mimo[VAR_8] =
      FUNC_0(VAR_6->mcs_40_mimo[VAR_8], VAR_7);


 VAR_6->mcs32 = FUNC_0(VAR_6->mcs32, VAR_7);

}
