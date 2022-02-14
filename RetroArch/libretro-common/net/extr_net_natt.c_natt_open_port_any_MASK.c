
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct net_ifinfo_entry {int host; } ;
struct net_ifinfo {size_t size; struct net_ifinfo_entry* entries; } ;
struct natt_status {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int member_0; } ;
typedef int port_str ;
typedef enum socket_protocol { ____Placeholder_socket_protocol } socket_protocol ;


 int FUNC_0 (struct addrinfo*) ;
 scalar_t__ FUNC_1 (int ,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_2 (struct natt_status*,int ,int ,int) ;
 int FUNC_3 (struct net_ifinfo*) ;
 int FUNC_4 (struct net_ifinfo*) ;
 int FUNC_5 (char*,int,char*,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;

bool FUNC_7(struct natt_status *VAR_0,
      uint16_t VAR_1, enum socket_protocol VAR_2)
{

   size_t VAR_3;
   char VAR_4[6];
   struct net_ifinfo VAR_5;
   struct addrinfo VAR_6 = {0}, *VAR_7;
   bool VAR_8 = 0;

   FUNC_5(VAR_4, sizeof(VAR_4), "%hu", VAR_1);


   if (!FUNC_4(&VAR_5))
      return 0;


   for (VAR_3 = 0; VAR_3 < VAR_5.size; VAR_3++)
   {
      struct net_ifinfo_entry *VAR_9 = VAR_5.entries + VAR_3;


      if ( FUNC_6(VAR_9->host, "127.0.0.1") ||
            FUNC_6(VAR_9->host, "::1"))
         continue;


      if (FUNC_1(VAR_9->host, VAR_4, &VAR_6, &VAR_7) == 0)
      {
         VAR_8 = FUNC_2(VAR_0, VAR_7->ai_addr,
               VAR_7->ai_addrlen, VAR_2) || VAR_8;
         FUNC_0(VAR_7);
      }
   }

   FUNC_3(&VAR_5);

   return VAR_8;




}
