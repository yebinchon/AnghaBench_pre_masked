
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin_family; int sin6_family; int sin6_addr; void* sin6_port; int sin_addr; void* sin_port; } ;
struct TYPE_3__ {int sa; TYPE_2__ sa6; TYPE_2__ sa4; } ;
typedef TYPE_1__ srvr_sockaddr_union_t ;
typedef int flag ;
typedef int curl_socklen_t ;
typedef scalar_t__ curl_socket_t ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (int const,char const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ VAR_5 ;
 void* FUNC_2 (unsigned short) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,void*,int) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static curl_socket_t FUNC_10(const char *VAR_7, unsigned short VAR_8)
{
  srvr_sockaddr_union_t VAR_9;
  curl_socket_t VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  const char *VAR_13 = "";
  const char *VAR_14 = "";
  if(!VAR_7)
    return VAR_0;

  FUNC_3("about to connect to %s%s%s:%hu",
         VAR_13, VAR_7, VAR_14, VAR_8);


  VAR_10 = FUNC_7(VAR_6, VAR_3, 0);
  if(VAR_0 == VAR_10) {
    VAR_11 = VAR_2;
    FUNC_3("Error creating socket for server connection: (%d) %s",
           VAR_11, FUNC_9(VAR_11));
    return VAR_0;
  }
  switch(VAR_6) {
  case 130:
    FUNC_4(&VAR_9.sa4, 0, sizeof(VAR_9.sa4));
    VAR_9.sa4.sin_family = 130;
    VAR_9.sa4.sin_port = FUNC_2(VAR_8);
    if(FUNC_0(130, VAR_7, &VAR_9.sa4.sin_addr) < 1) {
      FUNC_3("Error inet_pton failed AF_INET conversion of '%s'", VAR_7);
      FUNC_5(VAR_10);
      return VAR_0;
    }

    VAR_12 = FUNC_1(VAR_10, &VAR_9.sa, sizeof(VAR_9.sa4));
    break;
  }

  if(VAR_5) {
    FUNC_5(VAR_10);
    return VAR_0;
  }

  if(VAR_12) {
    VAR_11 = VAR_2;
    FUNC_3("Error connecting to server port %hu: (%d) %s",
           VAR_8, VAR_11, FUNC_9(VAR_11));
    FUNC_5(VAR_10);
    return VAR_0;
  }

  FUNC_3("connected fine to %s%s%s:%hu, now tunnel",
         VAR_13, VAR_7, VAR_14, VAR_8);

  return VAR_10;
}
