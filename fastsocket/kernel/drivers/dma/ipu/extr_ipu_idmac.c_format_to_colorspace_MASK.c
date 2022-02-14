
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pixel_fmt { ____Placeholder_pixel_fmt } pixel_fmt ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 int VAR_0 ;
 int VAR_1 ;






__attribute__((used)) static enum ipu_color_space FUNC_0(enum pixel_fmt VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 132:
 case 130:
 case 131:
 case 129:
  return VAR_0;
 default:
  return VAR_1;
 }
}
