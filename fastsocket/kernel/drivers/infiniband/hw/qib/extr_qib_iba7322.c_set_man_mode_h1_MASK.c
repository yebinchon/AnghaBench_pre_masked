
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_pportdata {int hw_pidx; int dd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_0, int VAR_1,
 int VAR_2, u32 VAR_3)
{
 if (VAR_2)
  FUNC_1(VAR_0->dd, FUNC_0(VAR_0->hw_pidx), (VAR_1 + (VAR_1 >> 1)),
   1, 3 << 10, 0x1f << 10);
 else
  FUNC_1(VAR_0->dd, FUNC_0(VAR_0->hw_pidx), (VAR_1 + (VAR_1 >> 1)),
   1, 0, 0x1f << 10);
}
