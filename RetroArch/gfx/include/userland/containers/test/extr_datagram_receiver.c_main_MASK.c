
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc_container_net_status_t ;
typedef int VC_CONTAINER_NET_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int ,int*) ;
 size_t FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int *) ;

int FUNC_8(int VAR_1, char **VAR_2)
{
   VC_CONTAINER_NET_T *VAR_3;
   vc_container_net_status_t VAR_4;
   char *VAR_5;
   size_t VAR_6;
   size_t VAR_7;

   if (VAR_1 < 2)
   {
      FUNC_1("Usage:\n%s <port>\n", VAR_2[0]);
      return 1;
   }

   VAR_3 = FUNC_5(((void*)0), VAR_2[1], 0, &VAR_4);
   if (!VAR_3)
   {
      FUNC_1("vc_container_net_open failed: %d\n", VAR_4);
      return 2;
   }

   VAR_6 = FUNC_4(VAR_3);
   VAR_5 = (char *)FUNC_0(VAR_6);
   if (!VAR_5)
   {
      FUNC_3(VAR_3);
      FUNC_1("Failure allocating buffer\n");
      return 3;
   }

   while ((VAR_7 = FUNC_6(VAR_3, VAR_5, VAR_6)) != 0)
   {
      char *VAR_8 = VAR_5;

      while (VAR_7--)
         FUNC_2(*VAR_8++);
   }

   if (FUNC_7(VAR_3) != VAR_0)
   {
      FUNC_1("vc_container_net_read failed: %d\n", FUNC_7(VAR_3));
   }

   FUNC_3(VAR_3);

   return 0;
}
