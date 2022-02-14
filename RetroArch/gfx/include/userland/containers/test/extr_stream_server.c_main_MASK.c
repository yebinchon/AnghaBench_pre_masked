
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc_container_net_status_t ;
typedef int name ;
typedef int buffer ;
typedef int VC_CONTAINER_NET_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char*,int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,unsigned short*) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (int *,char*,int ,int*) ;
 size_t FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (int *,char*,size_t) ;

int FUNC_14(int VAR_5, char **VAR_6)
{
   VC_CONTAINER_NET_T *VAR_7, *VAR_8;
   vc_container_net_status_t VAR_9;
   char VAR_10[VAR_0];
   char VAR_11[VAR_1];
   unsigned short VAR_12;
   int VAR_13, VAR_14 = 1;
   size_t VAR_15;

   if (VAR_5 < 2)
   {
      FUNC_1("Usage:\n%s <port> [<connections>]\n", VAR_6[0]);
      return 1;
   }

   VAR_7 = FUNC_10(((void*)0), VAR_6[1], VAR_3, &VAR_9);
   if (!VAR_7)
   {
      FUNC_1("vc_container_net_open failed: %d\n", VAR_9);
      return 2;
   }

   if (VAR_5 > 2)
   {
      FUNC_3(VAR_6[2], "%d", &VAR_14);
   }

   VAR_9 = FUNC_9(VAR_7, VAR_14);
   if (VAR_9 != VAR_4)
   {
      FUNC_1("vc_container_net_listen failed: %d\n", VAR_9);
      FUNC_6(VAR_7);
      return 3;
   }

   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   {
      VAR_9 = FUNC_5(VAR_7, &VAR_8);
      if (VAR_9 != VAR_4)
      {
         FUNC_1("vc_container_net_accept failed: %d\n", VAR_9);
         FUNC_6(VAR_7);
         return 3;
      }

      FUNC_4(VAR_11, "<unknown>");
      FUNC_7(VAR_8, VAR_11, sizeof(VAR_11));
      FUNC_8(VAR_8, &VAR_12);
      FUNC_1("Connection from %s:%hu\n", VAR_11, VAR_12);

      while ((VAR_15 = FUNC_11(VAR_8, VAR_10, sizeof(VAR_10) - 1)) != 0)
      {
         char *VAR_16 = VAR_10;
         size_t VAR_17;

         FUNC_1("Rx:");


         for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++, VAR_16++)
         {
            char VAR_18 = *VAR_16;

            FUNC_2(VAR_18);
            if (FUNC_0((unsigned char)VAR_18))
               *VAR_16 ^= 0x20;
         }

         VAR_16 = VAR_10;

         FUNC_1("Tx:");
         while (VAR_15)
         {
            size_t VAR_19;

            VAR_19 = FUNC_13(VAR_8, VAR_16, VAR_15);
            if (!VAR_19)
            {
               VAR_9 = FUNC_12(VAR_8);
               FUNC_1("vc_container_net_write failed: %d\n", VAR_9);
               break;
            }


            while (VAR_19--)
            {
               VAR_15--;
               FUNC_2(*VAR_16++);
            }
         }
      }

      VAR_9 = FUNC_12(VAR_8);

      if (VAR_9 != VAR_4 && VAR_9 != VAR_2)
         break;

      FUNC_6(VAR_8);
   }

   if (VAR_9 != VAR_4)
   {
      FUNC_1("vc_container_net_read failed: %d\n", VAR_9);
   }

   FUNC_6(VAR_7);

   return 0;
}
