
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char**,int) ;

__attribute__((used)) static int FUNC_1(struct pwc_device *VAR_2, int *VAR_3, int *VAR_4)
{
 unsigned char VAR_5[2];
 int VAR_6;

 if (VAR_2->type < 730) {
  *VAR_3 = -1;
  *VAR_4 = -1;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_2,
  VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 *VAR_3 = VAR_5[0] * 100;
 *VAR_4 = VAR_5[1] * 100;
 return 0;
}
