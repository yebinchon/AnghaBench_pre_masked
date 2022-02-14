
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nouveau_mxm {int dummy; } ;
struct mxms_odev {int outp_type; int ddc_port; int conn_type; int dig_conn; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_mxm*) ;

void
FUNC_3(struct nouveau_mxm *VAR_0, u8 *VAR_1, struct mxms_odev *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_1[0]);
 if (FUNC_2(VAR_0) >= 0x0300)
  VAR_3 |= (u64)FUNC_0(VAR_1[4]) << 32;

 VAR_2->outp_type = (VAR_3 & 0x00000000000000f0ULL) >> 4;
 VAR_2->ddc_port = (VAR_3 & 0x0000000000000f00ULL) >> 8;
 VAR_2->conn_type = (VAR_3 & 0x000000000001f000ULL) >> 12;
 VAR_2->dig_conn = (VAR_3 & 0x0000000000780000ULL) >> 19;
}
