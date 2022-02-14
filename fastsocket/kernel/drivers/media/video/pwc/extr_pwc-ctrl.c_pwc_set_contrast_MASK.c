
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int ,int ,char*,int) ;

int FUNC_1(struct pwc_device *VAR_2, int VAR_3)
{
 char VAR_4;

 if (VAR_3 < 0)
  VAR_3 = 0;
 if (VAR_3 > 0xffff)
  VAR_3 = 0xffff;
 VAR_4 = (VAR_3 >> 10) & 0x3f;
 return FUNC_0(VAR_2,
  VAR_1, VAR_0, &VAR_4, sizeof(VAR_4));
}
