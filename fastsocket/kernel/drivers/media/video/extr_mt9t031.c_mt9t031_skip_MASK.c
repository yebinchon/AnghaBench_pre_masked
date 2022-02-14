
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u16 FUNC_1(s32 *VAR_0, s32 VAR_1, s32 VAR_2)
{
 unsigned int VAR_3;

 if (*VAR_0 < VAR_1 + VAR_1 / 2) {
  *VAR_0 = VAR_1;
  return 1;
 }

 VAR_3 = FUNC_0(VAR_2, *VAR_0 + VAR_1 / 2) / VAR_1;
 if (VAR_3 > 8)
  VAR_3 = 8;
 *VAR_0 = VAR_1 * VAR_3;

 return VAR_3;
}
