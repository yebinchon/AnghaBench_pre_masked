
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {int sock; } ;
struct TYPE_2__ {int ci_tcp_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct connection *VAR_3,
         struct sockaddr_storage *VAR_4,
         int VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 == 1)
  VAR_7 = FUNC_0(VAR_3->sock,
         (struct sockaddr *) VAR_4,
         VAR_5);
 else
  VAR_7 = FUNC_1(VAR_3->sock, VAR_1,
        VAR_0,
        (char *)VAR_4, VAR_5);

 if (VAR_7 < 0)
  FUNC_2("Can't bind to port %d addr number %d",
     VAR_2.ci_tcp_port, VAR_6);

 return VAR_7;
}
