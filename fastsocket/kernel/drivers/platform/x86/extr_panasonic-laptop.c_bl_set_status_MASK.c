
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcc_acpi {int* sinf; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct pcc_acpi*,int*) ;
 int FUNC_1 (struct pcc_acpi*,int ,int) ;
 struct pcc_acpi* FUNC_2 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_7)
{
 struct pcc_acpi *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = VAR_7->props.brightness;
 int VAR_10;

 if (!FUNC_0(VAR_8, VAR_8->sinf))
  return -VAR_1;

 if (VAR_9 < VAR_8->sinf[VAR_4])
  VAR_9 = VAR_8->sinf[VAR_4];

 if (VAR_9 < VAR_8->sinf[VAR_6])
  VAR_9 = VAR_8->sinf[VAR_6];

 if (VAR_9 < VAR_8->sinf[VAR_4] ||
     VAR_9 > VAR_8->sinf[VAR_3])
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_8, VAR_2, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_1(VAR_8, VAR_5, VAR_9);
}
