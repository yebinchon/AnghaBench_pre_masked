
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int ai_flags; int ai_addrlen; struct sockaddr* ai_addr; TYPE_1__ sin_addr; void* sin_family; int sin_port; int ai_socktype; void* ai_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {char const** h_addr_list; int h_length; int h_addr; void* h_addrtype; } ;
struct addrinfo {int ai_flags; int ai_addrlen; struct sockaddr* ai_addr; TYPE_1__ sin_addr; void* sin_family; int sin_port; int ai_socktype; void* ai_family; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct sockaddr_in*) ;
 int FUNC_2 (char const*,char const*,struct sockaddr_in*,struct sockaddr_in**) ;
 scalar_t__ FUNC_3 (char const*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (char const*,int *,int ) ;

int FUNC_9(const char *VAR_4, const char *VAR_5,
      struct addrinfo *VAR_6, struct addrinfo **VAR_7)
{
   struct sockaddr_in *VAR_8 = ((void*)0);
   struct addrinfo *VAR_9 = ((void*)0);

   (void)VAR_8;
   (void)VAR_9;

   if (!VAR_6->ai_family)
   {



      VAR_6->ai_family = VAR_1;

   }
   return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

}
