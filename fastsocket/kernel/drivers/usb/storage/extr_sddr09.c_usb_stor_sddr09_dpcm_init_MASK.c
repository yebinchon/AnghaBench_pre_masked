
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct us_data*) ;
 int FUNC_3 (struct us_data*,unsigned char*,int) ;
 int FUNC_4 (struct us_data*,int,int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_5(struct us_data *VAR_1) {
 int VAR_2;
 unsigned char *VAR_3 = VAR_1->iobuf;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_1, 0x01, VAR_0, VAR_3, 2);
 if (VAR_2) {
  FUNC_0("sddr09_init: send_command fails\n");
  return VAR_2;
 }

 FUNC_0("SDDR09init: %02X %02X\n", VAR_3[0], VAR_3[1]);


 VAR_2 = FUNC_4(VAR_1, 0x08, VAR_0, VAR_3, 2);
 if (VAR_2) {
  FUNC_0("sddr09_init: 2nd send_command fails\n");
  return VAR_2;
 }

 FUNC_0("SDDR09init: %02X %02X\n", VAR_3[0], VAR_3[1]);


 VAR_2 = FUNC_3(VAR_1, VAR_3, 18);
 if (VAR_2 == 0 && VAR_3[2] != 0) {
  int VAR_4;
  for (VAR_4=0; VAR_4<18; VAR_4++)
   FUNC_1(" %02X", VAR_3[VAR_4]);
  FUNC_1("\n");







 }



 return 0;
}
