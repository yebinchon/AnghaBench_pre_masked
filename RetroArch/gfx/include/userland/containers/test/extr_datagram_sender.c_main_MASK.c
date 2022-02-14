
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc_container_net_status_t ;
typedef int VC_CONTAINER_NET_T ;


 scalar_t__ FUNC_0 (char*,size_t,int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;

int FUNC_9(int VAR_1, char **VAR_2)
{
   VC_CONTAINER_NET_T *VAR_3;
   vc_container_net_status_t VAR_4;
   char *VAR_5;
   size_t VAR_6;

   if (VAR_1 < 3)
   {
      FUNC_2("Usage:\n%s <address> <port>\n", VAR_2[0]);
      return 1;
   }

   VAR_3 = FUNC_6(VAR_2[1], VAR_2[2], 0, &VAR_4);
   if (!VAR_3)
   {
      FUNC_2("vc_container_net_open failed: %d\n", VAR_4);
      return 2;
   }

   VAR_6 = FUNC_5(VAR_3);
   VAR_5 = (char *)FUNC_1(VAR_6);
   if (!VAR_5)
   {
      FUNC_4(VAR_3);
      FUNC_2("Failure allocating buffer\n");
      return 3;
   }

   FUNC_2("Don't enter more than %d characters in one line!\n", (int)VAR_6);

   while (FUNC_0(VAR_5, VAR_6, VAR_0))
   {
      if (!FUNC_8(VAR_3, VAR_5, FUNC_3(VAR_5)))
      {
         FUNC_2("vc_container_net_write failed: %d\n", FUNC_7(VAR_3));
         break;
      }
   }

   FUNC_4(VAR_3);

   return 0;
}
