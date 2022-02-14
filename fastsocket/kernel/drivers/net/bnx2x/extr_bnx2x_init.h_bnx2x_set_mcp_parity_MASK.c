
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = FUNC_1(VAR_2, VAR_1[VAR_4]);

  if (VAR_3)
   VAR_5 |= VAR_0;
  else
   VAR_5 &= ~VAR_0;

  FUNC_2(VAR_2, VAR_1[VAR_4], VAR_5);
 }
}
