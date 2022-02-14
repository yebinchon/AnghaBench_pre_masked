
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc_container_net_status_t ;
typedef int send_buffer ;
typedef int recv_buffer ;
typedef int VC_CONTAINER_NET_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 char FUNC_2 () ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*,int ,int*) ;
 size_t FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int) ;

int FUNC_11(int VAR_6, char **VAR_7)
{
   VC_CONTAINER_NET_T *VAR_8;
   vc_container_net_status_t VAR_9;
   char VAR_10[VAR_0];
   char VAR_11[VAR_0];
   int VAR_12 = 1;
   int VAR_13 = 0;
   size_t VAR_14;

   if (VAR_6 < 3)
   {
      FUNC_5("Usage:\n%s <address> <port>\n", VAR_7[0]);
      return 1;
   }

   VAR_8 = FUNC_7(VAR_7[1], VAR_7[2], VAR_3, &VAR_9);
   if (!VAR_8)
   {
      FUNC_5("vc_container_net_open failed: %d\n", VAR_9);
      return 2;
   }


   FUNC_0(VAR_8, VAR_1, VAR_5);
   FUNC_4(1);

   while (VAR_12)
   {
      if (FUNC_1())
      {
         char VAR_15 = FUNC_2();

         if (VAR_15 == 26)
            break;

         VAR_10[VAR_13++] = VAR_15;

         if (VAR_15 == '\r')
         {
            VAR_15 = '\n';
            FUNC_3(VAR_15);
            VAR_10[VAR_13++] = VAR_15;
         }

         if (VAR_15 == '\n' || VAR_13 == sizeof(VAR_10) - 1)
         {
            int VAR_16 = 0, VAR_17;


            while (VAR_13)
            {
               VAR_17 = FUNC_10(VAR_8, VAR_10 + VAR_16, VAR_13);
               if (!VAR_17)
               {
                  FUNC_5("vc_container_net_write failed: %d\n", FUNC_9(VAR_8));
                  VAR_13 = 0;
                  VAR_12 = 0;
                  break;
               }
               VAR_13 -= VAR_17;
               VAR_16 += VAR_17;
            }
         }
      }


      VAR_14 = FUNC_8(VAR_8, VAR_11, sizeof(VAR_11) - 1);
      if (VAR_14)
      {
         char *VAR_18 = VAR_11;

         while (VAR_14--)
            FUNC_3(*VAR_18++);
      } else {
         vc_container_net_status_t VAR_19 = FUNC_9(VAR_8);

         if (VAR_19 != VAR_2 && VAR_19 != VAR_4)
         {
            FUNC_5("vc_container_net_read failed: %d\n", VAR_19);
            VAR_12 = 0;
         }
      }
   }

   FUNC_4(0);

   FUNC_6(VAR_8);

   return 0;
}
