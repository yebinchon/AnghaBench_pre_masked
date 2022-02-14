
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_2, const u_char *VAR_3, u_char *VAR_4)
{
 volatile unsigned short *VAR_5 = (volatile unsigned short *)(VAR_1 + VAR_0);
 unsigned short VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6 = *VAR_5;
  VAR_4[VAR_7] = (unsigned char)VAR_6;
  VAR_5++;
 }
 VAR_4[7] |= 0x0f;
}
