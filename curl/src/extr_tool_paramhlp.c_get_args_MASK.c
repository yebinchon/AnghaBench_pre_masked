
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct OperationConfig {TYPE_1__* global; scalar_t__ useragent; int proxyuserpwd; int userpwd; int oauth_bearer; scalar_t__ next; } ;
struct TYPE_2__ {int errors; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,size_t const,int,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 () ;

CURLcode FUNC_3(struct OperationConfig *VAR_4, const size_t VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  bool VAR_7 = (VAR_4->next ? VAR_2 : VAR_3);


  if(VAR_4->userpwd && !VAR_4->oauth_bearer) {
    VAR_6 = FUNC_0("host", VAR_5, VAR_7, &VAR_4->userpwd);
    if(VAR_6)
      return VAR_6;
  }


  if(VAR_4->proxyuserpwd) {
    VAR_6 = FUNC_0("proxy", VAR_5, VAR_7, &VAR_4->proxyuserpwd);
    if(VAR_6)
      return VAR_6;
  }


  if(!VAR_4->useragent) {
    VAR_4->useragent = FUNC_2();
    if(!VAR_4->useragent) {
      FUNC_1(VAR_4->global->errors, "out of memory\n");
      VAR_6 = VAR_1;
    }
  }

  return VAR_6;
}
