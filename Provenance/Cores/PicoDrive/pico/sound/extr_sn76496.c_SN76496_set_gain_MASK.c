
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN76496 {int* VolTable; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct SN76496 *VAR_1,int VAR_2)
{
 int VAR_3;
 double VAR_4;


 VAR_2 &= 0xff;


 VAR_4 = VAR_0 / 3;
 while (VAR_2-- > 0)
  VAR_4 *= 1.023292992;


 for (VAR_3 = 0;VAR_3 < 15;VAR_3++)
 {

  if (VAR_4 > VAR_0 / 3) VAR_1->VolTable[VAR_3] = VAR_0 / 3;
  else VAR_1->VolTable[VAR_3] = VAR_4;

  VAR_4 /= 1.258925412;
 }
 VAR_1->VolTable[15] = 0;
}
