
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9968cf_device {int mirror; int backlight; int lightfreq; int bandfilt; int auto_exp; int auto_brt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct w9968cf_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct w9968cf_device* VAR_6)
{
 int VAR_7 = 0;


 VAR_7 = FUNC_0(VAR_6, VAR_0,
      VAR_6->auto_brt);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_1,
      VAR_6->auto_exp);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_3,
      VAR_6->bandfilt);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_4,
      VAR_6->lightfreq);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_2,
      VAR_6->backlight);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_5,
      VAR_6->mirror);
 if (VAR_7)
  return VAR_7;

 return 0;
}
