
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_2(struct controller *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6 = FUNC_1(VAR_4, VAR_0) & 0x000F;

 switch (VAR_6 >> 1) {
 case 0:
  VAR_5 = 0;
  break;
 case 1:
  VAR_5 = VAR_3;
  FUNC_0(VAR_4, "Switch opened!\n");
  break;
 case 2:
  VAR_5 = VAR_1;
  FUNC_0(VAR_4, "Invalid HPC command!\n");
  break;
 case 4:
  VAR_5 = VAR_2;
  FUNC_0(VAR_4, "Invalid bus speed/mode!\n");
  break;
 default:
  VAR_5 = VAR_6;
 }

 return VAR_5;
}
