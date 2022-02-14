
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cpuinfo_x86 {int x86_model; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpuinfo_x86*,int,struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int,int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct cpuinfo_x86 *VAR_1, u32 VAR_2, struct device *VAR_3)
{

 int VAR_4;
 u32 VAR_5, VAR_6;
 u32 VAR_7;





 VAR_4 = FUNC_3(VAR_2, VAR_0, &VAR_5, &VAR_6);
 if (VAR_4) {
  FUNC_2(VAR_3, "Unable to read TjMax from CPU.\n");
 } else {
  VAR_7 = (VAR_5 >> 16) & 0xff;




  if (VAR_7 > 80 && VAR_7 < 120) {
   FUNC_1(VAR_3, "TjMax is %d C.\n", VAR_7);
   return VAR_7 * 1000;
  }
 }






 switch (VAR_1->x86_model) {
 case 0xe:
 case 0xf:
 case 0x16:
 case 0x1a:
  FUNC_2(VAR_3, "TjMax is assumed as 100 C!\n");
  return 100000;
  break;
 case 0x17:
 case 0x1c:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_2(VAR_3, "CPU (model=0x%x) is not supported yet,"
   " using default TjMax of 100C.\n", VAR_1->x86_model);
  return 100000;
 }
}
