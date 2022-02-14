
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pwc_device*,int ,int ,unsigned char**,int) ;

int FUNC_3(struct pwc_device *VAR_2, int *VAR_3)
{
 unsigned char VAR_4[2];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2,
  VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;
 *VAR_3 = VAR_4[0] + (VAR_4[1] << 8);
 if (FUNC_0(VAR_2->type)) {

  *VAR_3 *= 256/656;
 } else if (FUNC_1(VAR_2->type)) {

 }
 return 0;
}
