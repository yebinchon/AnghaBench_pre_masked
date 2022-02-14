
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ofdm_phy_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ofdm_phy_hdr*,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int ,int ) ;
 int* VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(u32 VAR_3, u32 VAR_4, u8 *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7 = 0;
 int VAR_8 = FUNC_2(VAR_3);





 VAR_6 = VAR_2[VAR_8] & VAR_0;
 FUNC_1(VAR_5, 0, VAR_1);
 FUNC_0((struct ofdm_phy_hdr *) VAR_5, VAR_6);

 VAR_7 = (VAR_4 & 0xfff) << 5;
 VAR_5[2] |= (VAR_7 >> 16) & 0xff;
 VAR_5[1] |= (VAR_7 >> 8) & 0xff;
 VAR_5[0] |= VAR_7 & 0xff;
}
