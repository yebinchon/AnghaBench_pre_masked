
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct device {int dummy; } ;
struct ab3100 {int dummy; } ;
typedef unsigned char fat_time ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ab3100*,int ,int,int) ;
 int FUNC_1 (struct ab3100*,int ,unsigned char) ;
 struct ab3100* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8, unsigned long VAR_9)
{
 struct ab3100 *VAR_10 = FUNC_2(VAR_8);
 u8 VAR_11[] = {VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7};
 unsigned char VAR_12[6];
 u64 VAR_13 = (u64) VAR_9 * VAR_1 * 2;
 int VAR_14 = 0;
 int VAR_15;

 VAR_12[0] = (VAR_13) & 0xFF;
 VAR_12[1] = (VAR_13 >> 8) & 0xFF;
 VAR_12[2] = (VAR_13 >> 16) & 0xFF;
 VAR_12[3] = (VAR_13 >> 24) & 0xFF;
 VAR_12[4] = (VAR_13 >> 32) & 0xFF;
 VAR_12[5] = (VAR_13 >> 40) & 0xFF;

 for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
  VAR_14 = FUNC_1(VAR_10,
       VAR_11[VAR_15], VAR_12[VAR_15]);
  if (VAR_14)
   return VAR_14;
 }


 return FUNC_0(VAR_10,
         VAR_0,
         0xFE, 0x01);

}
