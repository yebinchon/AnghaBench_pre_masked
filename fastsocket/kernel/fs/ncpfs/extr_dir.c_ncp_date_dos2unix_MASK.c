
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le16 ;


 unsigned short* VAR_0 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(__le16 VAR_1, __le16 VAR_2)
{
 unsigned short VAR_3 = FUNC_0(VAR_1), VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6, VAR_7;



 VAR_5 = ((VAR_4 >> 5) - 1) & 15;
 VAR_6 = VAR_4 >> 9;
 VAR_7 = (VAR_3 & 31) * 2 + 60 * ((VAR_3 >> 5) & 63) + (VAR_3 >> 11) * 3600 +
  86400 * ((VAR_4 & 31) - 1 + VAR_0[VAR_5] + (VAR_6 / 4) +
  VAR_6 * 365 - ((VAR_6 & 3) == 0 && VAR_5 < 2 ? 1 : 0) + 3653);

 return FUNC_1(VAR_7);
}
