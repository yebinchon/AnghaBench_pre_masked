
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef size_t u8 ;
struct radeon_hdmi_acr {scalar_t__ clock; int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;


 int FUNC_0 (scalar_t__,int *,int ,int) ;
 struct radeon_hdmi_acr* VAR_0 ;

struct radeon_hdmi_acr FUNC_1(uint32_t VAR_1)
{
 struct radeon_hdmi_acr VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].clock != VAR_1 &&
      VAR_0[VAR_3].clock != 0; VAR_3++)
  ;
 VAR_2 = VAR_0[VAR_3];


 FUNC_0(VAR_1, &VAR_2.cts_32khz, VAR_2.n_32khz, 32000);
 FUNC_0(VAR_1, &VAR_2.cts_44_1khz, VAR_2.n_44_1khz, 44100);
 FUNC_0(VAR_1, &VAR_2.cts_48khz, VAR_2.n_48khz, 48000);

 return VAR_2;
}
