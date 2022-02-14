
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(int VAR_7, int VAR_8, int *VAR_9, int VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (VAR_7 < 0 || VAR_7 >= VAR_4)
  return -VAR_0;
 FUNC_1(VAR_6, VAR_11, VAR_13);
 VAR_14 = ((VAR_8 == VAR_1 ? 0 : 4) + VAR_7 % 4) * 4;
 if (((VAR_11 >> VAR_14) & 0xF) == 2)
  return -VAR_0;


 if (!*VAR_9)
  *VAR_9 = (VAR_11 >> VAR_14) & 0xF;
 if (!*VAR_9)
  *VAR_9 = VAR_2;


 if (*VAR_9 < 1 || *VAR_9 == 2 || *VAR_9 > 15)
  return -VAR_0;
 FUNC_1(VAR_5, VAR_12, VAR_13);
 if (VAR_12 & (1 << *VAR_9))
  return -VAR_0;


 if (FUNC_0(VAR_7, VAR_8, VAR_3, VAR_10))
  return -VAR_0;
 if (VAR_10) {
  VAR_11 = (VAR_11 & ~(0xF << VAR_14)) | (*VAR_9 << VAR_14);
  FUNC_2(VAR_6, VAR_11, VAR_13);
 }

 return 0;
}
