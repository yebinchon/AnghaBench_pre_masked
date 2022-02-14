
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_2(int VAR_7)
{
 int VAR_8;
 if (!FUNC_0())
  return -1;
 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8 > 9 || VAR_8 == 0 || VAR_8 == 5) {
  VAR_1 = 160;
  VAR_0;
  return -1;
 }
 if (VAR_8 < 5) {
  if (VAR_7)
   VAR_6[VAR_5] = VAR_3;
  return VAR_8 - 1;
 }
 if (VAR_7)
  VAR_6[VAR_5] = VAR_4;
 return VAR_8 - 6;
}
