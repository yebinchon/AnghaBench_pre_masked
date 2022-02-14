
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* text; int counter; } ;
typedef int curl_lock_data ;
typedef int curl_lock_access ;
typedef int CURL ;





 int FUNC_0 (int ,char*,int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(CURL *VAR_2, curl_lock_data VAR_3,
                    curl_lock_access VAR_4, void *VAR_5)
{
  const char *VAR_6;
  struct userdata *VAR_7 = (struct userdata *)VAR_5;
  int VAR_8;

  (void)VAR_2;
  (void)VAR_4;

  switch(VAR_3) {
    case 128:
      VAR_6 = "share";
      VAR_8 = 0;
      break;
    case 129:
      VAR_6 = "dns";
      VAR_8 = 1;
      break;
    case 130:
      VAR_6 = "cookie";
      VAR_8 = 2;
      break;
    default:
      FUNC_0(VAR_1, "lock: no such data: %d\n", (int)VAR_3);
      return;
  }


  if(VAR_0[VAR_8]) {
    FUNC_1("lock: double locked %s\n", VAR_6);
    return;
  }
  VAR_0[VAR_8]++;

  FUNC_1("lock:   %-6s [%s]: %d\n", VAR_6, VAR_7->text, VAR_7->counter);
  VAR_7->counter++;
}
