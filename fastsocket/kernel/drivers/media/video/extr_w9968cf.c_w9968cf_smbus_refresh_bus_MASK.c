
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9968cf_device {int dummy; } ;


 int FUNC_0 (struct w9968cf_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct w9968cf_device* VAR_0)
{
 int VAR_1 = 0, VAR_2;

 for (VAR_2 = 1; VAR_2 <= 10; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, 0x0020, 0x01);
  VAR_1 += FUNC_0(VAR_0, 0x0000, 0x01);
  if (VAR_1)
   break;
 }

 return VAR_1;
}
