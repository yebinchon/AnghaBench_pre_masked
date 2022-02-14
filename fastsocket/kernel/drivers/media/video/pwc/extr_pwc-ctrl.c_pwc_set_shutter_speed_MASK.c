
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
 int VAR_2 ;
 int FUNC_2 (struct pwc_device*,int ,int ,char**,int) ;

int FUNC_3(struct pwc_device *VAR_3, int VAR_4, int VAR_5)
{
 char VAR_6[2];
 int VAR_7, VAR_8;


 if (VAR_4)
  VAR_6[0] = 0x0;
 else
  VAR_6[0] = 0xff;

 VAR_8 = FUNC_2(VAR_3,
  VAR_1, VAR_2, &VAR_6, 1);

 if (!VAR_4 && VAR_8 >= 0) {
  if (VAR_5 < 0)
   VAR_5 = 0;
  if (VAR_5 > 0xffff)
   VAR_5 = 0xffff;

  if (FUNC_0(VAR_3->type)) {

   VAR_7 = (VAR_5 / 100);
   VAR_6[1] = VAR_7 >> 8;
   VAR_6[0] = VAR_7 & 0xff;
  } else if (FUNC_1(VAR_3->type)) {

   VAR_6[1] = 0;
   VAR_6[0] = VAR_5 >> 8;
  }

  VAR_8 = FUNC_2(VAR_3,
   VAR_1, VAR_0,
   &VAR_6, sizeof(VAR_6));
 }
 return VAR_8;
}
