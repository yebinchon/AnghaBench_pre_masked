
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pwc_device*,int ,int ,char*,int) ;

int FUNC_1(struct pwc_device *VAR_3, int VAR_4, int VAR_5)
{
 char VAR_6;
 int VAR_7;

 if (VAR_4)
  VAR_6 = 0x0;
 else
  VAR_6 = 0xff;

 VAR_7 = FUNC_0(VAR_3,
  VAR_2, VAR_0, &VAR_6, sizeof(VAR_6));

 if (!VAR_4 && VAR_7 >= 0) {
  if (VAR_5 < 0)
   VAR_5 = 0;
  if (VAR_5 > 0xffff)
   VAR_5 = 0xffff;
  VAR_6 = (VAR_5 >> 10) & 0x3F;
  VAR_7 = FUNC_0(VAR_3,
   VAR_2, VAR_1, &VAR_6, sizeof(VAR_6));
 }
 if (VAR_7 < 0)
  return VAR_7;
 return 0;
}
