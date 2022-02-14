
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_4__ {int event; int sockfd; } ;
typedef TYPE_1__ curl_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static curl_context_t* FUNC_2(curl_socket_t VAR_2)
{
  curl_context_t *VAR_3;

  VAR_3 = (curl_context_t *) FUNC_1(sizeof(*VAR_3));

  VAR_3->sockfd = VAR_2;

  VAR_3->event = FUNC_0(VAR_0, VAR_2, 0, VAR_1, VAR_3);

  return VAR_3;
}
