
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w9968cf_device {int dummy; } ;


 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 scalar_t__ FUNC_0 (struct w9968cf_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct w9968cf_device* VAR_2)
{
 u16 VAR_3, VAR_4;
 int VAR_5 = 0, VAR_6, VAR_7;

 VAR_5 += FUNC_0(VAR_2, 0x0010, 0x39);

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < 32; VAR_6++, VAR_7 += 2) {
  VAR_3 = VAR_1[VAR_7] | ((unsigned)(VAR_1[VAR_7+1]) << 8);
  VAR_4 = VAR_0[VAR_7] | ((unsigned)(VAR_0[VAR_7+1]) << 8);
  VAR_5 += FUNC_0(VAR_2, VAR_3, 0x40+VAR_6);
  VAR_5 += FUNC_0(VAR_2, VAR_4, 0x60+VAR_6);
 }
 VAR_5 += FUNC_0(VAR_2, 0x0012, 0x39);

 return VAR_5;
}
