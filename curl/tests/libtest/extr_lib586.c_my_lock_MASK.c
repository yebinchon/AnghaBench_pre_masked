
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* text; int counter; } ;
typedef int curl_lock_data ;
typedef int curl_lock_access ;
typedef int CURL ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(CURL *VAR_1, curl_lock_data VAR_2,
                    curl_lock_access VAR_3, void *VAR_4)
{
  const char *VAR_5;
  struct userdata *VAR_6 = (struct userdata *)VAR_4;

  (void)VAR_1;
  (void)VAR_3;

  switch(VAR_2) {
    case 129:
      VAR_5 = "share";
      break;
    case 130:
      VAR_5 = "dns";
      break;
    case 131:
      VAR_5 = "cookie";
      break;
    case 128:
      VAR_5 = "ssl_session";
      break;
    default:
      FUNC_0(VAR_0, "lock: no such data: %d\n", (int)VAR_2);
      return;
  }
  FUNC_1("lock:   %-6s [%s]: %d\n", VAR_5, VAR_6->text, VAR_6->counter);
  VAR_6->counter++;
}
