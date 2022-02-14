
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abituguru_data {int uguru_ready; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct abituguru_data*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct abituguru_data *VAR_6)
{
 int VAR_7 = VAR_2;

 if (VAR_6->uguru_ready)
  return 0;


 FUNC_4(0x00, VAR_6->addr + VAR_1);


 if (FUNC_1(VAR_6, VAR_4)) {
  FUNC_0(1,
   "timeout exceeded waiting for ready state\n");
  return -VAR_5;
 }


 while (FUNC_2(VAR_6->addr + VAR_0) != 0xAC) {
  VAR_7--;
  if (VAR_7 == 0) {
   FUNC_0(1,
      "CMD reg does not hold 0xAC after ready command\n");
   return -VAR_5;
  }
  FUNC_3(0);
 }



 VAR_7 = VAR_2;
 while (FUNC_2(VAR_6->addr + VAR_1) != VAR_3) {
  VAR_7--;
  if (VAR_7 == 0) {
   FUNC_0(1,
    "state != more input after ready command\n");
   return -VAR_5;
  }
  FUNC_3(0);
 }

 VAR_6->uguru_ready = 1;
 return 0;
}
