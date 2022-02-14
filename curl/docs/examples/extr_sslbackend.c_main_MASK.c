
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int curl_sslbackend ;
struct TYPE_3__ {char* name; int id; } ;
typedef TYPE_1__ curl_ssl_backend ;
typedef scalar_t__ CURLsslset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int,char const*,TYPE_1__ const***) ;
 char* FUNC_3 () ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int VAR_2 ;
 int FUNC_7 (char*,char const*) ;

int FUNC_8(int VAR_3, char **VAR_4)
{
  const char *VAR_5 = VAR_3 > 1 ? VAR_4[1] : "openssl";
  CURLsslset VAR_6;

  if(!FUNC_7("list", VAR_5)) {
    const curl_ssl_backend **VAR_7;
    int VAR_8;

    VAR_6 = FUNC_2(-1, ((void*)0), &VAR_7);
    FUNC_0(VAR_6 == VAR_1);

    for(VAR_8 = 0; VAR_7[VAR_8]; VAR_8++)
      FUNC_6("SSL backend #%d: '%s' (ID: %d)\n",
             VAR_8, VAR_7[VAR_8]->name, VAR_7[VAR_8]->id);

    return 0;
  }
  else if(FUNC_5((int)(unsigned char)*VAR_5)) {
    int VAR_9 = FUNC_1(VAR_5);

    VAR_6 = FUNC_2((curl_sslbackend)VAR_9, ((void*)0), ((void*)0));
  }
  else
    VAR_6 = FUNC_2(-1, VAR_5, ((void*)0));

  if(VAR_6 == VAR_1) {
    FUNC_4(VAR_2, "Unknown SSL backend id: %s\n", VAR_5);
    return 1;
  }

  FUNC_0(VAR_6 == VAR_0);

  FUNC_6("Version with SSL backend '%s':\n\n\t%s\n", VAR_5, FUNC_3());

  return 0;
}
