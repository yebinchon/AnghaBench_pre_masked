
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_3)
{
 if (*VAR_3 & VAR_2) {
  FUNC_0("usbat_flash_check_media_present: no media detected\n");
  return VAR_1;
 }

 return VAR_0;
}
