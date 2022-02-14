
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct slope {int range; int slope; } ;
typedef int s16 ;



__attribute__((used)) static u16 FUNC_0(const struct slope *VAR_0, u8 VAR_1, s16 VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;
 u16 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2 > VAR_0[VAR_3].range)
   VAR_4 = VAR_0[VAR_3].range;
  else
   VAR_4 = VAR_2;
  VAR_5 += (VAR_4 * VAR_0[VAR_3].slope) / VAR_0[VAR_3].range;
  VAR_2 -= VAR_4;
 }
 return VAR_5;
}
