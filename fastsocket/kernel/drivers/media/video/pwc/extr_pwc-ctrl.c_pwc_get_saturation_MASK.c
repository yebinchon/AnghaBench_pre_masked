
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

int FUNC_1(struct pwc_device *VAR_4, int *VAR_5)
{
 char VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4->type < 675)
  return -VAR_0;
 if (VAR_4->type < 730)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_2;
 VAR_7 = FUNC_0(VAR_4,
  VAR_1, VAR_8, &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 *VAR_5 = (signed)VAR_6;
 return 0;
}
