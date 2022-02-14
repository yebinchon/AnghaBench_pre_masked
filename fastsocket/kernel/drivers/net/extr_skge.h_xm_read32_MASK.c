
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct skge_hw const*,int ) ;

__attribute__((used)) static inline u32 FUNC_2(const struct skge_hw *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_2));
 VAR_3 |= (u32)FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_2+2)) << 16;
 return VAR_3;
}
