
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct addrinfo {int ai_protocol; int ai_socktype; int ai_family; int ai_flags; int member_0; } ;
typedef int port_buf ;
typedef enum socket_type { ____Placeholder_socket_type } socket_type ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,unsigned short) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(void **VAR_3, uint16_t VAR_4, const char *VAR_5, enum socket_type VAR_6)
{
   char VAR_7[16];
   struct addrinfo VAR_8 = {0};
   struct addrinfo **VAR_9 = (struct addrinfo**)VAR_3;
   struct addrinfo *VAR_10 = ((void*)0);

   if (!FUNC_1())
      goto error;

   switch (VAR_6)
   {
      case 130:
         VAR_8.ai_socktype = VAR_1;
         break;
      case 128:
         VAR_8.ai_socktype = VAR_2;
         break;
      case 129:

         break;
   }

   if (!VAR_5)
      VAR_8.ai_flags = VAR_0;

   VAR_7[0] = '\0';

   FUNC_2(VAR_7, sizeof(VAR_7), "%hu", (unsigned short)VAR_4);

   if (FUNC_0(VAR_5, VAR_7, &VAR_8, VAR_9) != 0)
      goto error;

   VAR_10 = (struct addrinfo*)*VAR_9;

   if (!VAR_10)
      goto error;

   return FUNC_3(VAR_10->ai_family, VAR_10->ai_socktype, VAR_10->ai_protocol);

error:
   return -1;
}
