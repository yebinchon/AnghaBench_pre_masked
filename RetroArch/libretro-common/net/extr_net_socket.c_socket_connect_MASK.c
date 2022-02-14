
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,char*,int) ;

int FUNC_2(int VAR_2, void *VAR_3, bool VAR_4)
{
   struct addrinfo *VAR_5 = (struct addrinfo*)VAR_3;


   if (VAR_4)
   {
      struct timeval VAR_6;
      VAR_6.tv_sec = 4;
      VAR_6.tv_usec = 0;

      FUNC_1(VAR_2, VAR_0, VAR_1, (char*)&VAR_6, sizeof VAR_6);
   }


   return FUNC_0(VAR_2, VAR_5->ai_addr, VAR_5->ai_addrlen);
}
