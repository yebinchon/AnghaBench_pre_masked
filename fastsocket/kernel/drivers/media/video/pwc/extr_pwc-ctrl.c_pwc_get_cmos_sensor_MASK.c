
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pwc_device*,int ,int,unsigned char*,int) ;

int FUNC_1(struct pwc_device *VAR_3, int *VAR_4)
{
 unsigned char VAR_5;
 int VAR_6 = -1, VAR_7;

 if (VAR_3->type < 675)
  VAR_7 = VAR_1;
 else if (VAR_3->type < 730)
  return -1;
 else
  VAR_7 = VAR_2;

 VAR_6 = FUNC_0(VAR_3,
  VAR_0, VAR_7, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_3->type < 675)
  *VAR_4 = VAR_5 | 0x100;
 else
  *VAR_4 = VAR_5;
 return 0;
}
