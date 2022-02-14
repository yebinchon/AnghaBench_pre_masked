
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_poll_t ;
struct TYPE_5__ {int sockfd; } ;
typedef TYPE_2__ curl_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static void FUNC_2(uv_poll_t *VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8;
  int VAR_9 = 0;
  curl_context_t *VAR_10;

  if(VAR_7 & VAR_2)
    VAR_9 |= VAR_0;
  if(VAR_7 & VAR_3)
    VAR_9 |= VAR_1;

  VAR_10 = (curl_context_t *) VAR_5->data;

  FUNC_1(VAR_4, VAR_10->sockfd, VAR_9,
                           &VAR_8);

  FUNC_0();
}
