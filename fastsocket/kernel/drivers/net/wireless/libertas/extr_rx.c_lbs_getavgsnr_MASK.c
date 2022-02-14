
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct lbs_private {size_t numSNRNF; scalar_t__* rawSNR; } ;



__attribute__((used)) static u8 FUNC_0(struct lbs_private *VAR_0)
{
 u8 VAR_1;
 u16 VAR_2 = 0;
 if (VAR_0->numSNRNF == 0)
  return 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->numSNRNF; VAR_1++)
  VAR_2 += VAR_0->rawSNR[VAR_1];
 return (u8) (VAR_2 / VAR_0->numSNRNF);

}
