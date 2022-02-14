
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int tcp_fastopen; int reuse; } ;
struct connectdata {scalar_t__ transport; int local_port; int local_ip; int primary_ip; int ip_addr_str; int primary_port; struct Curl_easy* data; TYPE_1__ bits; } ;
struct Curl_sockaddr_storage {int dummy; } ;
struct Curl_easy {int dummy; } ;
typedef int ssloc ;
typedef int curl_socklen_t ;
typedef int curl_socket_t ;
typedef int buffer ;


 int FUNC_0 (struct sockaddr*,int,int ,int *) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct Curl_easy*,char*,int,int ) ;
 scalar_t__ FUNC_4 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct Curl_sockaddr_storage*,int ,int) ;

void FUNC_8(struct connectdata *VAR_5, curl_socket_t VAR_6)
{
  if(VAR_5->transport != VAR_3)

    return;
  (void)VAR_6;



  FUNC_1(VAR_5);
}
