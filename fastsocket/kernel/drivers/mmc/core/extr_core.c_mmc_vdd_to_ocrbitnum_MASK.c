
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int VAR_3, bool VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_3 < 1650 || VAR_3 > 3600)
  return -VAR_0;

 if (VAR_3 >= 1650 && VAR_3 <= 1950)
  return FUNC_0(VAR_1);

 if (VAR_4)
  VAR_3 -= 1;


 VAR_6 = (VAR_3 - 2000) / 100 + 8;
 if (VAR_6 > VAR_5)
  return VAR_5;
 return VAR_6;
}
