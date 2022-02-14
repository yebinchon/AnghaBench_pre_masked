
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {int wmi; } ;
typedef int reg ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(void *VAR_3, u32 VAR_4)
{
 struct ath_hw *VAR_5 = (struct ath_hw *) VAR_3;
 struct ath_common *VAR_6 = FUNC_0(VAR_5);
 struct ath9k_htc_priv *VAR_7 = (struct ath9k_htc_priv *) VAR_6->priv;
 __be32 VAR_8, VAR_9 = FUNC_4(VAR_4);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->wmi, VAR_2,
     (u8 *) &VAR_9, sizeof(VAR_9),
     (u8 *) &VAR_8, sizeof(VAR_8),
     100);
 if (FUNC_5(VAR_10)) {
  FUNC_2(VAR_6, VAR_1, "REGISTER READ FAILED: (0x%04x, %d)\n",
   VAR_4, VAR_10);
  return -VAR_0;
 }

 return FUNC_3(VAR_8);
}
