
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct IR_i2c {int c; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int,int,int,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_1, u32 *VAR_2, u32 *VAR_3,
          int VAR_4, int VAR_5)
{
 unsigned char VAR_6[6];
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


 if (VAR_4 != FUNC_1(VAR_1->c, VAR_6, VAR_4))
  return -VAR_0;


 VAR_7 = (VAR_6[VAR_5] >> 7) & 1;
 VAR_8 = (VAR_6[VAR_5] >> 6) & 1;
 VAR_9 = (VAR_6[VAR_5] >> 5) & 1;
 VAR_10 = VAR_6[VAR_5] & 0x1f;
 VAR_11 = (VAR_6[VAR_5+1] >> 2) & 0x3f;





 if (!VAR_7)

  return 0;
 VAR_12= (VAR_7 << 12) | (VAR_9 << 11) | (VAR_10 << 6) | VAR_11;
 if ((VAR_12 & 0x1fff)==0x1fff)

  return 0;

 if (VAR_10!=0x1e && VAR_10!=0x1f)

  return 0;

 if (!VAR_8)
  VAR_11 += 64;

 FUNC_0(1,"ir hauppauge (rc5): s%d r%d t%d dev=%d code=%d\n",
  VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);


 *VAR_2 = VAR_11;
 *VAR_3 = VAR_12;
 return 1;
}
