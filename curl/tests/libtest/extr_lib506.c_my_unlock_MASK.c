
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* text; int counter; } ;
typedef int curl_lock_data ;
typedef int CURL ;





 int FUNC_0 (int ,char*,int) ;
 int * VAR_0 ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(CURL *VAR_2, curl_lock_data VAR_3, void *VAR_4)
{
  const char *VAR_5;
  struct userdata *VAR_6 = (struct userdata *)VAR_4;
  int VAR_7;
  (void)VAR_2;
  switch(VAR_3) {
    case 128:
      VAR_5 = "share";
      VAR_7 = 0;
      break;
    case 129:
      VAR_5 = "dns";
      VAR_7 = 1;
      break;
    case 130:
      VAR_5 = "cookie";
      VAR_7 = 2;
      break;
    default:
      FUNC_0(VAR_1, "unlock: no such data: %d\n", (int)VAR_3);
      return;
  }


  if(!VAR_0[VAR_7]) {
    FUNC_1("unlock: double unlocked %s\n", VAR_5);
    return;
  }
  VAR_0[VAR_7]--;

  FUNC_1("unlock: %-6s [%s]: %d\n", VAR_5, VAR_6->text, VAR_6->counter);
  VAR_6->counter++;
}
