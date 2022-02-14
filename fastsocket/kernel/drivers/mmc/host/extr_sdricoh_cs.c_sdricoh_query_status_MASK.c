
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 unsigned int FUNC_1 (struct sdricoh_host*,int ) ;
 int FUNC_2 (struct sdricoh_host*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sdricoh_host *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6){
 unsigned int VAR_7;
 unsigned int VAR_8 = 0;
 struct device *VAR_9 = VAR_4->dev;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_4, VAR_3, VAR_8);
  if (VAR_8 & VAR_5)
   break;
 }

 if (VAR_7 == VAR_6) {
  FUNC_0(VAR_9, "query_status: timeout waiting for %x\n", VAR_5);
  return -VAR_1;
 }


 if (VAR_8 & 0x7F0000) {
  FUNC_0(VAR_9, "waiting for status bit %x failed\n", VAR_5);
  return -VAR_0;
 }
 return 0;

}
