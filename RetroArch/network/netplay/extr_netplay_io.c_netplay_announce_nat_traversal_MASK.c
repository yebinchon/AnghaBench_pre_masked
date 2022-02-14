
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int ext_inet6_addr; scalar_t__ have_inet6; int ext_inet4_addr; scalar_t__ have_inet4; } ;
struct TYPE_5__ {TYPE_1__ nat_traversal_state; } ;
typedef TYPE_2__ netplay_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct sockaddr const*,int,char*,int,char*,int,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_4 (char*,int,char*,char*,...) ;

void FUNC_5(netplay_t *VAR_7)
{

   char VAR_8[4200], VAR_9[VAR_6], VAR_10[6];

   if (VAR_7->nat_traversal_state.have_inet4)
   {
      if (FUNC_1((const struct sockaddr *) &VAR_7->nat_traversal_state.ext_inet4_addr,
               sizeof(struct sockaddr_in),
               VAR_9, VAR_6, VAR_10, 6, VAR_4|VAR_5) != 0)
         return;

   }
   else
   {
      FUNC_4(VAR_8, sizeof(VAR_8), "%s\n",
            FUNC_2(VAR_3));
      FUNC_3(VAR_8, 1, 180, 0, ((void*)0), VAR_1, VAR_0);
      FUNC_0("[netplay] %s\n", VAR_8);
      return;
   }

   FUNC_4(VAR_8, sizeof(VAR_8), "%s: %s:%s\n",
         FUNC_2(VAR_2),
         VAR_9, VAR_10);
   FUNC_3(VAR_8, 1, 180, 0, ((void*)0), VAR_1, VAR_0);
   FUNC_0("[netplay] %s\n", VAR_8);

}
