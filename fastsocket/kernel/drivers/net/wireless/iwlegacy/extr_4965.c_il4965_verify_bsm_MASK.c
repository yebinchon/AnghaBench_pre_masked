
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ len; int * v_addr; } ;
struct il_priv {TYPE_1__ ucode_boot; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct il_priv*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_3)
{
 __le32 *VAR_4 = VAR_3->ucode_boot.v_addr;
 u32 VAR_5 = VAR_3->ucode_boot.len;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_0("Begin verify bsm\n");


 VAR_7 = FUNC_2(VAR_3, VAR_1);
 for (VAR_6 = VAR_0; VAR_6 < VAR_0 + VAR_5;
      VAR_6 += sizeof(u32), VAR_4++) {
  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7 != FUNC_3(*VAR_4)) {
   FUNC_1("BSM uCode verification failed at "
          "addr 0x%08X+%u (of %u), is 0x%x, s/b 0x%x\n",
          VAR_0, VAR_6 - VAR_0,
          VAR_5, VAR_7, FUNC_3(*VAR_4));
   return -VAR_2;
  }
 }

 FUNC_0("BSM bootstrap uCode image OK\n");

 return 0;
}
