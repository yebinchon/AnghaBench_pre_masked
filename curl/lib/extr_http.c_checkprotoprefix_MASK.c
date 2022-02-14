
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* handler; } ;
struct Curl_easy {int dummy; } ;
typedef int statusline ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,char const*,size_t) ;
 int FUNC_1 (struct Curl_easy*,char const*,size_t) ;

__attribute__((used)) static statusline
FUNC_2(struct Curl_easy *VAR_1, struct connectdata *VAR_2,
                 const char *VAR_3, size_t VAR_4)
{

  if(VAR_2->handler->protocol & VAR_0)
    return FUNC_1(VAR_1, VAR_3, VAR_4);




  return FUNC_0(VAR_1, VAR_3, VAR_4);
}
