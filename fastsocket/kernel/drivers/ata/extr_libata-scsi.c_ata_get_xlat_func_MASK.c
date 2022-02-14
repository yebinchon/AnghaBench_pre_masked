
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_device {int dummy; } ;
typedef int * ata_xlat_func_t ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (struct ata_device*) ;

__attribute__((used)) static inline ata_xlat_func_t FUNC_1(struct ata_device *VAR_6, u8 VAR_7)
{
 switch (VAR_7) {
 case 135:
 case 137:
 case 136:

 case 128:
 case 130:
 case 129:
  return VAR_2;

 case 0x93 :
  return VAR_5;

 case 133:
  if (FUNC_0(VAR_6))
   return VAR_0;
  break;

 case 132:
 case 131:
  return VAR_4;

 case 139:
 case 138:
  return VAR_1;

 case 134:
  return VAR_3;
 }

 return ((void*)0);
}
