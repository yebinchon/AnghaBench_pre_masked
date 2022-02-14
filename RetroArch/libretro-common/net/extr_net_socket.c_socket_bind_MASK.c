
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,char const*,int) ;

bool FUNC_2(int VAR_2, void *VAR_3)
{
   int VAR_4 = 1;
   struct addrinfo *VAR_5 = (struct addrinfo*)VAR_3;
   FUNC_1(VAR_2, VAR_0,
         VAR_1, (const char*)&VAR_4, sizeof(int));
   if (FUNC_0(VAR_2, VAR_5->ai_addr, VAR_5->ai_addrlen) < 0)
      return 0;
   return 1;
}
