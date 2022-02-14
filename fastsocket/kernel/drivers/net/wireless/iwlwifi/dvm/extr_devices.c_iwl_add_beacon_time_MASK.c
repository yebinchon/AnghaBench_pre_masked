
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_priv {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct iwl_priv*,int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,int) ;

__attribute__((used)) static __le32 FUNC_3(struct iwl_priv *VAR_2, u32 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_3 & FUNC_2(VAR_2,
    VAR_0);
 u32 VAR_7 = VAR_4 & FUNC_2(VAR_2,
    VAR_0);
 u32 VAR_8 = VAR_5 * VAR_1;
 u32 VAR_9 = (VAR_3 & FUNC_1(VAR_2,
    VAR_0)) +
    (VAR_4 & FUNC_1(VAR_2,
    VAR_0));

 if (VAR_6 > VAR_7)
  VAR_9 += VAR_6 - VAR_7;
 else if (VAR_6 < VAR_7) {
  VAR_9 += VAR_8 + VAR_6 - VAR_7;
  VAR_9 += (1 << VAR_0);
 } else
  VAR_9 += (1 << VAR_0);

 return FUNC_0(VAR_9);
}
