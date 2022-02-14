
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; } ;
struct Curl_multi {TYPE_1__ msglist; } ;
struct Curl_message {int list; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct Curl_message*,int *) ;

__attribute__((used)) static CURLMcode FUNC_1(struct Curl_multi *VAR_1,
                              struct Curl_message *VAR_2)
{
  FUNC_0(&VAR_1->msglist, VAR_1->msglist.tail, VAR_2,
                         &VAR_2->list);
  return VAR_0;
}
