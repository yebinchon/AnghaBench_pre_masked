
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct il_priv {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct il_priv*,int ) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_4, __le32 * VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = VAR_6;
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_0("ucode inst image size is %u\n", VAR_6);

 FUNC_3(VAR_4, VAR_1, VAR_3);

 VAR_10 = 0;
 for (; VAR_6 > 0; VAR_6 -= sizeof(u32), VAR_5++) {



  VAR_7 = FUNC_2(VAR_4, VAR_2);
  if (VAR_7 != FUNC_4(*VAR_5)) {
   FUNC_1("uCode INST section is invalid at "
          "offset 0x%x, is 0x%x, s/b 0x%x\n",
          VAR_8 - VAR_6, VAR_7, FUNC_4(*VAR_5));
   VAR_9 = -VAR_0;
   VAR_10++;
   if (VAR_10 >= 20)
    break;
  }
 }

 if (!VAR_10)
  FUNC_0("ucode image in INSTRUCTION memory is good\n");

 return VAR_9;
}
