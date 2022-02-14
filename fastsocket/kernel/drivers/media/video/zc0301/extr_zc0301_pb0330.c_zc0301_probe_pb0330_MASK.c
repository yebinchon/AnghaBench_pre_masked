
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc0301_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct zc0301_device*,int *) ;
 int FUNC_2 (struct zc0301_device*,int,int) ;
 scalar_t__ FUNC_3 (struct zc0301_device*,int,int) ;

int FUNC_4(struct zc0301_device* VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_5 += FUNC_3(VAR_3, 0x0000, 0x01);
 VAR_5 += FUNC_3(VAR_3, 0x0010, 0x0a);
 VAR_5 += FUNC_3(VAR_3, 0x0001, 0x01);
 VAR_5 += FUNC_3(VAR_3, 0x0012, 0x03);
 VAR_5 += FUNC_3(VAR_3, 0x0012, 0x01);

 FUNC_0(10);

 VAR_4 = FUNC_2(VAR_3, 0x00, 2);

 if (VAR_4 < 0 || VAR_5)
  return -VAR_0;

 if (VAR_4 != 0x8243)
  return -VAR_1;

 FUNC_1(VAR_3, &VAR_2);

 return 0;
}
