
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vals ;
struct tcp_keepalive {int onoff; int keepalivetime; int keepaliveinterval; } ;
struct TYPE_2__ {int tcp_keepidle; int tcp_keepintvl; scalar_t__ tcp_keepalive; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int optval ;
typedef scalar_t__ curl_socket_t ;
typedef int LPVOID ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct Curl_easy*,char*,int,...) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,void*,int) ;

__attribute__((used)) static void
FUNC_6(struct Curl_easy *VAR_7,
             curl_socket_t VAR_8)
{
  int VAR_9 = VAR_7->set.tcp_keepalive?1:0;


  if(FUNC_5(VAR_8, VAR_2, VAR_3,
        (void *)&VAR_9, sizeof(VAR_9)) < 0) {
    FUNC_4(VAR_7, "Failed to set SO_KEEPALIVE on fd %d\n", VAR_8);
  }
  else {
  }
}
