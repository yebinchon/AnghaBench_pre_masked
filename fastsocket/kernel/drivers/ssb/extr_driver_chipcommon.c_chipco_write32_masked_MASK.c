
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_chipcommon {int dummy; } ;


 int FUNC_0 (struct ssb_chipcommon*,int ) ;
 int FUNC_1 (struct ssb_chipcommon*,int ,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct ssb_chipcommon *VAR_0, u16 VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 VAR_3 &= VAR_2;
 VAR_3 |= FUNC_0(VAR_0, VAR_1) & ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_3);

 return VAR_3;
}
