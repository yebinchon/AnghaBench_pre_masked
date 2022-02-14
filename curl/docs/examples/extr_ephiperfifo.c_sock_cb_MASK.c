
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_4__ {size_t action; } ;
typedef TYPE_1__ SockInfo ;
typedef int GlobalInfo ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int,int *,int,int *) ;

__attribute__((used)) static int FUNC_4(CURL *VAR_2, curl_socket_t VAR_3, int VAR_4, void *VAR_5, void *VAR_6)
{
  GlobalInfo *VAR_7 = (GlobalInfo*) VAR_5;
  SockInfo *VAR_8 = (SockInfo*) VAR_6;
  const char *VAR_9[]={ "none", "IN", "OUT", "INOUT", "REMOVE" };

  FUNC_1(VAR_1,
          "socket callback: s=%d e=%p what=%s ", VAR_3, VAR_2, VAR_9[VAR_4]);
  if(VAR_4 == VAR_0) {
    FUNC_1(VAR_1, "\n");
    FUNC_2(VAR_8, VAR_7);
  }
  else {
    if(!VAR_8) {
      FUNC_1(VAR_1, "Adding data: %s\n", VAR_9[VAR_4]);
      FUNC_0(VAR_3, VAR_2, VAR_4, VAR_7);
    }
    else {
      FUNC_1(VAR_1,
              "Changing action from %s to %s\n",
              VAR_9[VAR_8->action], VAR_9[VAR_4]);
      FUNC_3(VAR_8, VAR_3, VAR_2, VAR_4, VAR_7);
    }
  }
  return 0;
}
