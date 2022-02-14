
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct il_priv {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct il_priv*,int ) ;
 int FUNC_2 (struct il_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_4, __le32 * VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10;

 FUNC_0("ucode inst image size is %u\n", VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 100, VAR_5 += 100 / sizeof(u32)) {



  FUNC_2(VAR_4, VAR_1, VAR_10 + VAR_3);
  VAR_7 = FUNC_1(VAR_4, VAR_2);
  if (VAR_7 != FUNC_3(*VAR_5)) {
   VAR_8 = -VAR_0;
   VAR_9++;
   if (VAR_9 >= 3)
    break;
  }
 }

 return VAR_8;
}
