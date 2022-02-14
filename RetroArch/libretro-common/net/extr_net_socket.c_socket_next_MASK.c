
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(void **VAR_0)
{
   struct addrinfo *VAR_1 = (struct addrinfo*)*VAR_0;
   if ((*VAR_0 = VAR_1 = VAR_1->ai_next))
      return FUNC_0(VAR_1->ai_family, VAR_1->ai_socktype, VAR_1->ai_protocol);
   else
      return -1;
}
