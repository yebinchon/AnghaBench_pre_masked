
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_4, int VAR_5)
{

 char VAR_6 = FUNC_0(VAR_3);
 VAR_6 &= 0xF0;
 if (VAR_6 == 0)
  return VAR_0;
 if (VAR_6 == 0x20)
  return VAR_1;

 return VAR_2;
}
