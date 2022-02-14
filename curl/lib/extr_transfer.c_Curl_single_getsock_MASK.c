
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {scalar_t__ sockfd; scalar_t__ writesockfd; TYPE_1__* handler; struct Curl_easy* data; } ;
struct TYPE_4__ {int keepon; } ;
struct Curl_easy {TYPE_2__ req; } ;
typedef scalar_t__ curl_socket_t ;
struct TYPE_3__ {int (* perform_getsock ) (struct connectdata const*,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct connectdata const*,scalar_t__*) ;

int FUNC_4(const struct connectdata *VAR_6,
                        curl_socket_t *VAR_7)
{
  const struct Curl_easy *VAR_8 = VAR_6->data;
  int VAR_9 = VAR_1;
  unsigned VAR_10 = 0;

  if(VAR_6->handler->perform_getsock)
    return VAR_6->handler->perform_getsock(VAR_6, VAR_7);


  if((VAR_8->req.keepon & VAR_3) == VAR_2) {

    FUNC_0(VAR_6->sockfd != VAR_0);

    VAR_9 |= FUNC_1(VAR_10);
    VAR_7[VAR_10] = VAR_6->sockfd;
  }


  if((VAR_8->req.keepon & VAR_5) == VAR_4) {

    if((VAR_6->sockfd != VAR_6->writesockfd) ||
       VAR_9 == VAR_1) {


      if(VAR_9 != VAR_1)
        VAR_10++;

      FUNC_0(VAR_6->writesockfd != VAR_0);

      VAR_7[VAR_10] = VAR_6->writesockfd;
    }

    VAR_9 |= FUNC_2(VAR_10);
  }

  return VAR_9;
}
