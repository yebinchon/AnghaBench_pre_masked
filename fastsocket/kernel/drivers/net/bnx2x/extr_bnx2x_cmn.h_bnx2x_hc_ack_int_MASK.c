
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static inline u16 FUNC_3(struct bnx2x *VAR_2)
{
 u32 VAR_3 = (VAR_1 + FUNC_0(VAR_2)*32 +
         VAR_0);
 u32 VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_2();
 return VAR_4;
}
