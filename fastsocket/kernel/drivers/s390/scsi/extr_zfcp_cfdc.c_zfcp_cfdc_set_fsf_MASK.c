
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_cfdc {int option; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;






__attribute__((used)) static int FUNC_0(struct zfcp_fsf_cfdc *VAR_7, int VAR_8)
{
 switch (VAR_8) {
 case 131:
  VAR_7->command = VAR_5;
  VAR_7->option = VAR_3;
  break;
 case 132:
  VAR_7->command = VAR_5;
  VAR_7->option = VAR_1;
  break;
 case 130:
  VAR_7->command = VAR_5;
  VAR_7->option = VAR_2;
  break;
 case 129:
  VAR_7->command = VAR_5;
  VAR_7->option = VAR_4;
  break;
 case 128:
  VAR_7->command = VAR_6;
  VAR_7->option = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
