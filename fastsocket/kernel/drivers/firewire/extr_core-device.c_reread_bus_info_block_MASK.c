
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fw_device {scalar_t__* config_rom; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fw_device*,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct fw_device *VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
  if (FUNC_0(VAR_5, VAR_6, VAR_8, &VAR_7) != VAR_0)
   return VAR_2;

  if (VAR_8 == 0 && VAR_7 == 0)
   return VAR_3;

  if (VAR_7 != VAR_5->config_rom[VAR_8])
   return VAR_1;
 }

 return VAR_4;
}
