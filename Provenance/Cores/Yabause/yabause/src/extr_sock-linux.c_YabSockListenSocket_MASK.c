
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef int YabSock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,char*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_6 ;
 char* FUNC_8 (int ) ;

int FUNC_9(int VAR_7, YabSock *VAR_8)
{
   struct sockaddr_in VAR_9;
   char VAR_10 = 1;

   VAR_8[0] = FUNC_7(VAR_0, VAR_2, 0);

   if (FUNC_6(VAR_8[0], VAR_3, VAR_4, &VAR_10, sizeof(int)) == -1)
   {
      FUNC_5("setsockopt");
      return -1;
   }

   FUNC_4(&VAR_9, 0, sizeof(struct sockaddr_in));
   VAR_9.sin_family = VAR_0;
   VAR_9.sin_addr.s_addr = VAR_1;
   VAR_9.sin_port = FUNC_2(VAR_7);
   if (FUNC_0(VAR_8[0], (struct sockaddr *) &VAR_9, sizeof(VAR_9)) == -1)
   {
      FUNC_1(VAR_6, "Can't bind to port %d: %s\n", VAR_7, FUNC_8(VAR_5));
      return -1;
   }

   if (FUNC_3(VAR_8[0], 3) == -1)
   {
      FUNC_5("listen");
      return -1;
   }

   return 0;
}
