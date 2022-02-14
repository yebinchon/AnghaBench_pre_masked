
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* userpwd; } ;
struct connectdata {int oauth_bearer; TYPE_1__ allocptr; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2)
{
  char **VAR_3;
  CURLcode VAR_4 = VAR_0;

  VAR_3 = &VAR_2->allocptr.userpwd;
  FUNC_1(*VAR_3);
  *VAR_3 = FUNC_0("Authorization: Bearer %s\r\n",
                   VAR_2->oauth_bearer);

  if(!*VAR_3) {
    VAR_4 = VAR_1;
    goto fail;
  }

  fail:
  return VAR_4;
}
