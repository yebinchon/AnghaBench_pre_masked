
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {TYPE_3__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_4__ {int sa; TYPE_2__ sa4; } ;
typedef TYPE_1__ srvr_sockaddr_union_t ;
typedef scalar_t__ curl_socket_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 (char*,char const*,unsigned short,...) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static curl_socket_t FUNC_7(unsigned short VAR_5,
                                  const char *VAR_6)
{
  int VAR_7;
  srvr_sockaddr_union_t VAR_8;
  curl_socket_t VAR_9 = FUNC_5(VAR_0, VAR_4, 0);
  if(VAR_9 == VAR_1)
    return VAR_1;
  FUNC_4(&VAR_8.sa4, 0, sizeof(VAR_8.sa4));
  VAR_8.sa4.sin_family = VAR_0;
  VAR_8.sa4.sin_port = FUNC_2(VAR_5);
  VAR_8.sa4.sin_addr.s_addr = VAR_2;
  FUNC_0(VAR_0, VAR_6, &VAR_8.sa4.sin_addr);

  VAR_7 = FUNC_1(VAR_9, &VAR_8.sa, sizeof(VAR_8.sa4));

  if(VAR_7) {
    int VAR_10 = VAR_3;
    FUNC_3("Error connecting to %s:%hu: (%d) %s",
           VAR_6, VAR_5, VAR_10, FUNC_6(VAR_10));
    return VAR_1;
  }
  FUNC_3("Connected fine to %s:%d", VAR_6, VAR_5);
  return VAR_9;
}
