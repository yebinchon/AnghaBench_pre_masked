
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct addrinfo {struct addrinfo* ai_next; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; int member_0; } ;
typedef scalar_t__ ssize_t ;
typedef int port_buf ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 scalar_t__ FUNC_1 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_2 (int,char const*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,unsigned short) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*) ;

bool FUNC_7(const char *VAR_1,
      uint16_t VAR_2, const char *VAR_3)
{
   char VAR_4[16] = {0};
   struct addrinfo VAR_5 = {0};
   struct addrinfo *VAR_6 = ((void*)0);
   const struct addrinfo *VAR_7 = ((void*)0);
   int VAR_8 = -1;
   bool VAR_9 = 1;

   VAR_5.ai_socktype = VAR_0;

   FUNC_3(VAR_4, sizeof(VAR_4), "%hu", (unsigned short)VAR_2);

   if (FUNC_1(VAR_1, VAR_4, &VAR_5, &VAR_6) != 0)
      return 0;



   VAR_7 = (const struct addrinfo*)VAR_6;
   while (VAR_7)
   {
      ssize_t VAR_10, VAR_11;

      VAR_8 = FUNC_4(VAR_7->ai_family, VAR_7->ai_socktype, VAR_7->ai_protocol);
      if (VAR_8 < 0)
      {
         VAR_9 = 0;
         goto end;
      }

      VAR_10 = FUNC_6(VAR_3);
      VAR_11 = FUNC_2(VAR_8, VAR_3, VAR_10, 0, VAR_7->ai_addr, VAR_7->ai_addrlen);

      if (VAR_11 < VAR_10)
      {
         VAR_9 = 0;
         goto end;
      }

      FUNC_5(VAR_8);
      VAR_8 = -1;
      VAR_7 = VAR_7->ai_next;
   }

end:
   FUNC_0(VAR_6);
   if (VAR_8 >= 0)
      FUNC_5(VAR_8);
   return VAR_9;
}
