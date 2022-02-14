
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 char** VAR_11 ;
 char** VAR_12 ;

const char *FUNC_0(u8 VAR_13)
{
 const char *VAR_14;
 u8 VAR_15 = VAR_13 & 0xf;

 if (VAR_13 >= VAR_7 && VAR_13 <= VAR_8)
  VAR_14 = VAR_12[VAR_15];
 else if (VAR_13 >= VAR_0 && VAR_13 <= VAR_1)
  VAR_14 = VAR_9[VAR_15];
 else if (VAR_13 >= VAR_5 && VAR_13 <= VAR_6)
  VAR_14 = VAR_11[VAR_15];
 else if (VAR_13 >= VAR_2 && VAR_13 <= VAR_3)
  VAR_14 = VAR_10[VAR_15 & 0x7];
 else if (VAR_13 == VAR_4)
  VAR_14 = "PIO SLOW";
 else
  VAR_14 = "XFER ERROR";

 return VAR_14;
}
