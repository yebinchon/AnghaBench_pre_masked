
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct natt_status {int have_inet4; int have_inet6; struct sockaddr_in6 ext_inet6_addr; struct sockaddr_in ext_inet4_addr; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; int member_0; } ;
typedef int socklen_t ;
typedef enum socket_protocol { ____Placeholder_socket_protocol } socket_protocol ;
struct TYPE_4__ {int servicetype; } ;
struct TYPE_6__ {TYPE_1__ first; } ;
struct TYPE_5__ {int * controlURL; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,char*,char*,char*,char const*,int *,char*,char*) ;
 int FUNC_1 (int *,int ,char*,char*,char*,char*,char const*,int *,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (struct addrinfo*) ;
 scalar_t__ FUNC_4 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_5 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 int FUNC_6 (char*,char*,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static bool FUNC_7(struct natt_status *VAR_8,
      struct sockaddr *VAR_9, socklen_t VAR_10, enum socket_protocol VAR_11)
{
   return 0;




}
