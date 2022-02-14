
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct curl_slist {int dummy; } ;
struct TYPE_3__ {int flags; struct curl_slist* userheaders; } ;
typedef TYPE_1__ curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct curl_slist*) ;

CURLcode FUNC_1(curl_mimepart *VAR_3,
                           struct curl_slist *VAR_4, int VAR_5)
{
  if(!VAR_3)
    return VAR_0;

  if(VAR_3->flags & VAR_2) {
    if(VAR_3->userheaders != VAR_4)
      FUNC_0(VAR_3->userheaders);
    VAR_3->flags &= ~VAR_2;
  }
  VAR_3->userheaders = VAR_4;
  if(VAR_4 && VAR_5)
    VAR_3->flags |= VAR_2;
  return VAR_1;
}
