
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w9968cf_device {int dummy; } ;


 int FUNC_0 (struct w9968cf_device*) ;
 scalar_t__ FUNC_1 (struct w9968cf_device*,int) ;

__attribute__((used)) static int FUNC_2(struct w9968cf_device* VAR_0, u8* VAR_1)
{
 u8 VAR_2;
 int VAR_3 = 0;

 *VAR_1 = 0;
 for (VAR_2 = 0 ; VAR_2 < 8 ; VAR_2++) {
  *VAR_1 <<= 1;
  VAR_3 += FUNC_1(VAR_0, 0x0013);
  *VAR_1 |= (FUNC_0(VAR_0) & 0x0008) ? 1 : 0;
  VAR_3 += FUNC_1(VAR_0, 0x0012);
 }

 return VAR_3;
}
