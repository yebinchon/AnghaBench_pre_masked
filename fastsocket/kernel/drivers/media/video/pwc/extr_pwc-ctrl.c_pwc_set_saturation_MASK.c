
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pwc_device*,int ,int,char*,int) ;

int FUNC_1(struct pwc_device *VAR_4, int VAR_5)
{
 char VAR_6;
 int VAR_7;

 if (VAR_4->type < 675)
  return -VAR_0;
 if (VAR_5 < -100)
  VAR_5 = -100;
 if (VAR_5 > 100)
  VAR_5 = 100;
 if (VAR_4->type < 730)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;
 return FUNC_0(VAR_4,
  VAR_3, VAR_7, &VAR_6, sizeof(VAR_6));
}
