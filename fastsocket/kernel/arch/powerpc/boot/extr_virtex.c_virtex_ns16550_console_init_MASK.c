
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int spd ;
typedef int reg_shift ;
typedef int reg_offset ;
typedef int clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*,void**,int) ;
 int FUNC_1 (void*,char*,void*,int) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_11)
{
 unsigned char *VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 int VAR_18;

 if (FUNC_0(VAR_11, (void **)&VAR_12, 1) < 1)
  return -1;

 VAR_18 = FUNC_1(VAR_11, "reg-offset", &VAR_14, sizeof(VAR_14));
 if (VAR_18 == sizeof(VAR_14))
  VAR_12 += VAR_14;

 VAR_18 = FUNC_1(VAR_11, "reg-shift", &VAR_13, sizeof(VAR_13));
 if (VAR_18 != sizeof(VAR_13))
  VAR_13 = 0;

 VAR_18 = FUNC_1(VAR_11, "current-speed", (void *)&VAR_16, sizeof(VAR_16));
 if (VAR_18 != sizeof(VAR_16))
  VAR_16 = 9600;


 VAR_18 = FUNC_1(VAR_11, "clock-frequency", (void *)&VAR_15, sizeof(VAR_15));
 if (VAR_18 != sizeof(VAR_15))
  return -1;

 VAR_17 = VAR_15 / (16 * VAR_16);


 FUNC_2(VAR_12 + (VAR_5 << VAR_13), VAR_6);


 FUNC_2(VAR_12 + (VAR_0 << VAR_13), VAR_17 & 0xFF);
 FUNC_2(VAR_12 + (VAR_1 << VAR_13), VAR_17 >> 8);


 FUNC_2(VAR_12 + (VAR_5 << VAR_13), VAR_7);


 FUNC_2(VAR_12 + (VAR_8 << VAR_13), VAR_10 | VAR_9);


 FUNC_2(VAR_12 + (VAR_2 << VAR_13),
    VAR_4 | VAR_3);
 return 0;
}
