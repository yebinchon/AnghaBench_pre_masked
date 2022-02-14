
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_httppost {int dummy; } ;
typedef int curl_formget_callback ;
struct TYPE_2__ {unsigned int ccsid; void* arg; int append; } ;
typedef TYPE_1__ cfcdata ;


 int VAR_0 ;
 int FUNC_0 (struct curl_httppost*,void*,int ) ;

int
FUNC_1(struct curl_httppost *VAR_1, void *VAR_2,
                   curl_formget_callback VAR_3, unsigned int VAR_4)

{
  cfcdata VAR_5;

  VAR_5.append = VAR_3;
  VAR_5.arg = VAR_2;
  VAR_5.ccsid = VAR_4;
  return FUNC_0(VAR_1, (void *) &VAR_5, VAR_0);
}
