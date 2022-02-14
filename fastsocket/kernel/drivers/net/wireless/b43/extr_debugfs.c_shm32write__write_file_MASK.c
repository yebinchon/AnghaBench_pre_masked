
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct b43_wldev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct b43_wldev*,unsigned int,unsigned int) ;
 int FUNC_1 (struct b43_wldev*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_7, "0x%X 0x%X 0x%X 0x%X",
       &VAR_9, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_14 != 4)
  return -VAR_5;
 if (VAR_9 > VAR_1)
  return -VAR_4;
 if (VAR_10 > VAR_0)
  return -VAR_4;
 if (VAR_9 == VAR_2) {
  if ((VAR_10 % 2) != 0)
   return -VAR_4;
 }
 if ((VAR_11 > 0xFFFFFFFF) || (VAR_12 > 0xFFFFFFFF))
  return -VAR_3;

 if (VAR_11 == 0)
  VAR_13 = 0;
 else
  VAR_13 = FUNC_0(VAR_6, VAR_9, VAR_10);
 VAR_13 &= VAR_11;
 VAR_13 |= VAR_12;
 FUNC_1(VAR_6, VAR_9, VAR_10, VAR_13);

 return 0;
}
