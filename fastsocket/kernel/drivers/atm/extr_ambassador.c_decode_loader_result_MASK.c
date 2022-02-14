
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t loader_command ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_2 (loader_command VAR_7, u32 VAR_8)
{
 int VAR_9;
 const char *VAR_10;

 if (VAR_8 == VAR_6[VAR_7])
  return 0;

 switch (VAR_8) {
  case 139:
   VAR_9 = -VAR_2;
   VAR_10 = "bad command";
   break;
  case 135:
   VAR_9 = -VAR_4;
   VAR_10 = "command in progress";
   break;
  case 134:
   VAR_9 = 0;
   VAR_10 = "command passed test";
   break;
  case 137:
   VAR_9 = -VAR_3;
   VAR_10 = "command failed test";
   break;
  case 132:
   VAR_9 = 0;
   VAR_10 = "command read data ok";
   break;
  case 133:
   VAR_9 = -VAR_2;
   VAR_10 = "command read bad address";
   break;
  case 129:
   VAR_9 = 0;
   VAR_10 = "command write data ok";
   break;
  case 131:
   VAR_9 = -VAR_2;
   VAR_10 = "command write bad address";
   break;
  case 128:
   VAR_9 = -VAR_3;
   VAR_10 = "command write flash failure";
   break;
  case 138:
   VAR_9 = 0;
   VAR_10 = "command complete";
   break;
  case 136:
   VAR_9 = -VAR_3;
   VAR_10 = "command flash erase failure";
   break;
  case 130:
   VAR_9 = -VAR_2;
   VAR_10 = "command write bad data";
   break;
  default:
   VAR_9 = -VAR_2;
   VAR_10 = "unknown error";
   FUNC_0 (VAR_1|VAR_0,
    "decode_loader_result got %d=%x !",
    VAR_8, VAR_8);
   break;
 }

 FUNC_1 (VAR_5, "%s", VAR_10);
 return VAR_9;
}
