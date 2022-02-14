
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hints ;
typedef int YabSock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,char*,int) ;

int FUNC_8(const char *VAR_3, int VAR_4, YabSock *VAR_5)
{
   struct addrinfo *VAR_6 = ((void*)0), VAR_7;
   char VAR_8[256];

   FUNC_4(&VAR_7, 0, sizeof(VAR_7));

   VAR_7.ai_family = VAR_0;
   VAR_7.ai_socktype = VAR_2;
   VAR_7.ai_protocol = VAR_1;

   FUNC_7(VAR_8, "%d", VAR_4);
   if (FUNC_3(VAR_3, VAR_8, &VAR_7, &VAR_6) != 0)
   {
      FUNC_5("getaddrinfo");
      return -1;
   }


   if ((VAR_5[0] = FUNC_6(VAR_6->ai_family, VAR_6->ai_socktype,
      VAR_6->ai_protocol)) == -1)
   {
      FUNC_2(VAR_6);
      FUNC_5("socket");
      return -1;
   }


   if (FUNC_1(VAR_5[0], VAR_6->ai_addr, (int)VAR_6->ai_addrlen) == -1)
   {
      FUNC_5("connect");
      FUNC_2(VAR_6);
      FUNC_0(VAR_5[0]);
      return -1;
   }

   FUNC_2(VAR_6);
   return 0;
}
