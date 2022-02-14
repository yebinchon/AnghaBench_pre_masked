
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int len; scalar_t__ v_addr; } ;
struct TYPE_5__ {int len; scalar_t__ v_addr; } ;
struct TYPE_4__ {int len; scalar_t__ v_addr; } ;
struct il_priv {TYPE_3__ ucode_boot; TYPE_2__ ucode_code; TYPE_1__ ucode_init; } ;
typedef int __le32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,int *,int ) ;
 int FUNC_3 (struct il_priv*,int *,int ) ;

int
FUNC_4(struct il_priv *VAR_0)
{
 __le32 *VAR_1;
 u32 VAR_2;
 int VAR_3;


 VAR_1 = (__le32 *) VAR_0->ucode_boot.v_addr;
 VAR_2 = VAR_0->ucode_boot.len;
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_0("Bootstrap uCode is good in inst SRAM\n");
  return 0;
 }


 VAR_1 = (__le32 *) VAR_0->ucode_init.v_addr;
 VAR_2 = VAR_0->ucode_init.len;
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_0("Initialize uCode is good in inst SRAM\n");
  return 0;
 }


 VAR_1 = (__le32 *) VAR_0->ucode_code.v_addr;
 VAR_2 = VAR_0->ucode_code.len;
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_0("Runtime uCode is good in inst SRAM\n");
  return 0;
 }

 FUNC_1("NO VALID UCODE IMAGE IN INSTRUCTION SRAM!!\n");




 VAR_1 = (__le32 *) VAR_0->ucode_boot.v_addr;
 VAR_2 = VAR_0->ucode_boot.len;
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
