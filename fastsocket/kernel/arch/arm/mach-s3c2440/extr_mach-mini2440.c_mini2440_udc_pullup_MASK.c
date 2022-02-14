
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum s3c2410_udc_cmd_e { ____Placeholder_s3c2410_udc_cmd_e } s3c2410_udc_cmd_e ;


 int FUNC_0 (int) ;



 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(enum s3c2410_udc_cmd_e VAR_0)
{
 FUNC_1("udc: pullup(%d)\n", VAR_0);

 switch (VAR_0) {
  case 129 :
   FUNC_2(FUNC_0(5), 1);
   break;
  case 130 :
   FUNC_2(FUNC_0(5), 0);
   break;
  case 128 :
   break;
  default:
   break;
 }
}
