
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct si4713_device {void* tune_rnl; void* antenna_capacitor; void* power_level; } ;


 int FUNC_0 (struct si4713_device*,int,int *,void**,void**,void**) ;

__attribute__((used)) static int FUNC_1(struct si4713_device *VAR_0)
{
 int VAR_1;
 u16 VAR_2 = 0;
 u8 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

 VAR_1 = FUNC_0(VAR_0, 0x00, &VAR_2, &VAR_3, &VAR_4, &VAR_5);

 if (VAR_1 < 0)
  goto exit;

 VAR_0->power_level = VAR_3;
 VAR_0->antenna_capacitor = VAR_4;
 VAR_0->tune_rnl = VAR_5;

exit:
 return VAR_1;
}
