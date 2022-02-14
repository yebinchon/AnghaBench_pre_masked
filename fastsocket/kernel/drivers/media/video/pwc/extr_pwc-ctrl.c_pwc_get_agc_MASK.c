
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char*,int) ;

int FUNC_1(struct pwc_device *VAR_5, int *VAR_6)
{
 unsigned char VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5,
  VAR_1, VAR_0, &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 != 0) {
  VAR_8 = FUNC_0(VAR_5,
   VAR_1, VAR_3, &VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_7 > 0x3F)
   VAR_7 = 0x3F;
  *VAR_6 = (VAR_7 << 10);
 }
 else {
  VAR_8 = FUNC_0(VAR_5,
   VAR_2, VAR_4, &VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_7 > 0x9F)
   VAR_7 = 0x9F;
  *VAR_6 = -(48 + VAR_7 * 409);
 }

 return 0;
}
