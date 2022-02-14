
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char*,int) ;

int FUNC_1(struct pwc_device *VAR_3, int VAR_4)
{
 unsigned char VAR_5;
 int VAR_6;

 if (VAR_4 < 0)
  VAR_5 = 0xff;
 else
  VAR_5 = 0x0;
 VAR_6 = FUNC_0(VAR_3,
  VAR_2, VAR_0, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4 < 0)
  return 0;
 if (VAR_4 > 0xffff)
  VAR_4 = 0xffff;

 VAR_5 = (VAR_4 >> 10);
 VAR_6 = FUNC_0(VAR_3,
  VAR_2, VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 return 0;
}
