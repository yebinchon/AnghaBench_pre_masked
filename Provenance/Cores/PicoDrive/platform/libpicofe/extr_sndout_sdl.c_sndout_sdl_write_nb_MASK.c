
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,void const*,int) ;

int FUNC_1(const void *VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_3 - VAR_4 - 2) & VAR_1;
 int VAR_8 = VAR_0 - VAR_4;
 int VAR_9;

 VAR_6 /= 2;
 if (VAR_6 > VAR_7)

  VAR_6 = VAR_7;
 if (VAR_6 == 0)

  return 0;

 VAR_9 = VAR_6;

 if (VAR_6 > VAR_8) {
  FUNC_0(VAR_2 + VAR_4, VAR_5, VAR_8 * 2);
  VAR_5 = (const short *)VAR_5 + VAR_8;
  VAR_6 -= VAR_8;
  VAR_4 = 0;
 }
 FUNC_0(VAR_2 + VAR_4, VAR_5, VAR_6 * 2);
 VAR_4 = (VAR_4 + VAR_6) & VAR_1;

 return VAR_9;
}
