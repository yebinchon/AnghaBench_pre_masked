
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httprequest {int testno; int partno; scalar_t__ open; scalar_t__ upgrade_request; int connect_port; scalar_t__ connect_request; int done_processing; } ;
typedef int curl_socket_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct httprequest*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct httprequest*) ;
 int FUNC_2 (int *,int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,struct httprequest*) ;

__attribute__((used)) static int FUNC_5(curl_socket_t VAR_6, struct httprequest *VAR_7,
                              curl_socket_t VAR_8,
                              const char *VAR_9)
{
  if(VAR_1)
    return -1;

  while(!VAR_7->done_processing) {
    int VAR_10 = FUNC_0(VAR_6, VAR_7);
    if(VAR_10 <= 0) {

      return VAR_10;
    }
  }

  if(VAR_3) {

    if((VAR_7->testno == VAR_5) &&
       (VAR_7->partno == VAR_4)) {
      VAR_7->partno++;
      FUNC_3("BOUNCE part number to %ld", VAR_7->partno);
    }
    else {
      VAR_3 = VAR_0;
      VAR_5 = -1;
      VAR_4 = -1;
    }
  }

  FUNC_4(VAR_6, VAR_7);
  if(VAR_1)
    return -1;

  if(VAR_7->testno < 0) {
    FUNC_3("special request received, no persistency");
    return -1;
  }
  if(!VAR_7->open) {
    FUNC_3("instructed to close connection after server-reply");
    return -1;
  }

  if(VAR_7->connect_request) {

    if(!VAR_2) {
      FUNC_3("received CONNECT but isn't running as proxy!");
      return 1;
    }
    else {
      FUNC_2(&VAR_6, VAR_8, VAR_9, VAR_7->connect_port);
      return -1;
    }
  }

  if(VAR_7->upgrade_request) {

    FUNC_1(VAR_7);
    return -1;
  }



  if(VAR_7->open) {
    FUNC_3("=> persistent connection request ended, awaits new request\n");
    return 1;
  }

  return -1;
}
