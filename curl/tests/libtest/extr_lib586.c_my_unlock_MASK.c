
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* text; int counter; } ;
typedef int curl_lock_data ;
typedef int CURL ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(CURL *VAR_1, curl_lock_data VAR_2, void *VAR_3)
{
  const char *VAR_4;
  struct userdata *VAR_5 = (struct userdata *)VAR_3;
  (void)VAR_1;
  switch(VAR_2) {
    case 129:
      VAR_4 = "share";
      break;
    case 130:
      VAR_4 = "dns";
      break;
    case 131:
      VAR_4 = "cookie";
      break;
    case 128:
      VAR_4 = "ssl_session";
      break;
    default:
      FUNC_0(VAR_0, "unlock: no such data: %d\n", (int)VAR_2);
      return;
  }
  FUNC_1("unlock: %-6s [%s]: %d\n", VAR_4, VAR_5->text, VAR_5->counter);
  VAR_5->counter++;
}
