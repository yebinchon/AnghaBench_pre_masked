
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_chip {int pa_type; int patch_cck_gain; int patch_cr157; int patch_6m_band_edge; int new_phy_layout; int al2230s_bit; scalar_t__ link_led; int supports_tx_led; int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct zd_chip *VAR_3, u8 *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_0(FUNC_2(&VAR_3->mutex));
 VAR_5 = FUNC_4(VAR_3, &VAR_6, VAR_0);
 if (VAR_5)
  goto error;
 FUNC_1(FUNC_3(VAR_3), "E2P_POD %#010x\n", VAR_6);


 *VAR_4 = VAR_6 & 0x0f;
 VAR_3->pa_type = (VAR_6 >> 16) & 0x0f;
 VAR_3->patch_cck_gain = (VAR_6 >> 8) & 0x1;
 VAR_3->patch_cr157 = (VAR_6 >> 13) & 0x1;
 VAR_3->patch_6m_band_edge = (VAR_6 >> 21) & 0x1;
 VAR_3->new_phy_layout = (VAR_6 >> 31) & 0x1;
 VAR_3->al2230s_bit = (VAR_6 >> 7) & 0x1;
 VAR_3->link_led = ((VAR_6 >> 4) & 1) ? VAR_1 : VAR_2;
 VAR_3->supports_tx_led = 1;
 if (VAR_6 & (1 << 24)) {
  if (VAR_6 & (1 << 29))
   VAR_3->supports_tx_led = 0;
 }

 FUNC_1(FUNC_3(VAR_3),
  "RF %s %#01x PA type %#01x patch CCK %d patch CR157 %d "
  "patch 6M %d new PHY %d link LED%d tx led %d\n",
  FUNC_5(*VAR_4), *VAR_4,
  VAR_3->pa_type, VAR_3->patch_cck_gain,
  VAR_3->patch_cr157, VAR_3->patch_6m_band_edge,
  VAR_3->new_phy_layout,
  VAR_3->link_led == VAR_1 ? 1 : 2,
  VAR_3->supports_tx_led);
 return 0;
error:
 *VAR_4 = 0;
 VAR_3->pa_type = 0;
 VAR_3->patch_cck_gain = 0;
 VAR_3->patch_cr157 = 0;
 VAR_3->patch_6m_band_edge = 0;
 VAR_3->new_phy_layout = 0;
 return VAR_5;
}
