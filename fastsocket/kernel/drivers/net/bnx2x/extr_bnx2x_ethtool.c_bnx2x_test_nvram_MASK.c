
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct crc_pair {int member_0; int member_1; } ;
struct bnx2x {int dummy; } ;
typedef int magic ;
struct TYPE_3__ {int config2; } ;
struct TYPE_4__ {TYPE_1__ shared_hw_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int*,int) ;
 int FUNC_6 (struct bnx2x*,int *) ;
 int FUNC_7 (struct bnx2x*,struct crc_pair const*,int *) ;
 TYPE_2__ VAR_7 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_8)
{
 const struct crc_pair VAR_9[] = {
  { 0, 0x14 },
  { 0x14, 0xec },
  { 0x100, 0x350 },
  { 0x450, 0xf0 },
  { 0x640, 0x64 },
  { 0x708, 0x70 },
  { 0, 0 }
 };
 const struct crc_pair VAR_10[] = {
  { 0x7e8, 0x350 },
  { 0xb38, 0xf0 },
  { 0, 0 }
 };

 u8 *VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (FUNC_0(VAR_8))
  return 0;

 VAR_11 = FUNC_9(VAR_2, VAR_5);
 if (!VAR_11) {
  FUNC_3(VAR_0 | VAR_1, "kmalloc failed\n");
  VAR_12 = -VAR_4;
  goto test_nvram_exit;
 }

 VAR_12 = FUNC_5(VAR_8, 0, &VAR_13, sizeof(VAR_13));
 if (VAR_12) {
  FUNC_3(VAR_0 | VAR_1,
     "magic value read (rc %d)\n", VAR_12);
  goto test_nvram_exit;
 }

 if (VAR_13 != 0x669955aa) {
  FUNC_3(VAR_0 | VAR_1,
     "wrong magic value (0x%08x)\n", VAR_13);
  VAR_12 = -VAR_3;
  goto test_nvram_exit;
 }

 FUNC_3(VAR_0 | VAR_1, "Port 0 CRC test-set\n");
 VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_11);
 if (VAR_12)
  goto test_nvram_exit;

 if (!FUNC_2(VAR_8) && !FUNC_1(VAR_8)) {
  u32 VAR_14 = FUNC_4(VAR_8, VAR_7.shared_hw_config.config2) &
      VAR_6;

  if (!VAR_14) {
   FUNC_3(VAR_0 | VAR_1,
      "Port 1 CRC test-set\n");
   VAR_12 = FUNC_7(VAR_8, VAR_10, VAR_11);
   if (VAR_12)
    goto test_nvram_exit;
  }
 }

 VAR_12 = FUNC_6(VAR_8, VAR_11);

test_nvram_exit:
 FUNC_8(VAR_11);
 return VAR_12;
}
