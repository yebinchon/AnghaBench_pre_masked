
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct option {char* member_0; int member_1; char member_3; int * member_2; } ;
struct addrinfo {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,char*) ;
 void* VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char**,char*,struct option const*,int *) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__* FUNC_8 (int) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char const*,int,...) ;
 char* VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (char const*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ) ;
 int VAR_20 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,struct addrinfo*,int) ;
 int FUNC_15 (void**,int,char const*,int ) ;
 int FUNC_16 (int ,scalar_t__*,int) ;
 int FUNC_17 (int ,scalar_t__*,int,int) ;
 int VAR_21 ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 () ;

int FUNC_20(int VAR_22, char **VAR_23)
{
   struct addrinfo *VAR_24;
   uint32_t VAR_25 = 0;
   int VAR_26 = 0;
   const char *VAR_27 = "localhost",
      *VAR_28 = ((void*)0),
      *VAR_29 = ((void*)0);
   int VAR_30 = VAR_9;
   bool VAR_31 = 0, VAR_32 = 0,
      VAR_33 = 0, VAR_34 = 0;
   const char *VAR_35 = ((void*)0);

   const struct option VAR_36[] = {
      {"host", 1, ((void*)0), 'H'},
      {"port", 1, ((void*)0), 'P'},
      {"play", 1, ((void*)0), 'p'},
      {"record", 1, ((void*)0), 'r'},
      {"ahead", 1, ((void*)0), 'a'}
   };

   while (1)
   {
      int VAR_37;

      VAR_37 = FUNC_6(VAR_22, VAR_23, "H:P:p:r:a:", VAR_36, ((void*)0));
      if (VAR_37 == -1)
         break;

      switch (VAR_37)
      {
         case 'H':
            VAR_27 = VAR_14;
            break;

         case 'P':
            VAR_30 = FUNC_3(VAR_14);
            break;

         case 'p':
            VAR_31 = 1;
            VAR_28 = VAR_14;
            break;

         case 'r':
            VAR_33 = 1;
            VAR_29 = VAR_14;
            break;

         case 'a':
            VAR_26 = FUNC_3(VAR_14);
            break;

         default:
            FUNC_19();
            return 1;
      }
   }

   if (!VAR_31 && VAR_15 < VAR_22)
   {
      VAR_31 = 1;
      VAR_28 = VAR_23[VAR_15++];
   }
   if (!VAR_31 && !VAR_33)
   {
      FUNC_19();
      return 1;
   }


   VAR_17 = 4096;
   VAR_16 = FUNC_8(VAR_17);
   if (!VAR_16)
   {
      FUNC_11("malloc");
      return 1;
   }


   if (VAR_31)
   {
      VAR_18 = FUNC_10(VAR_28, VAR_7);
      if (VAR_18 == -1)
      {
         FUNC_11(VAR_28);
         return 1;
      }
   }


   if (VAR_33)
   {
      VAR_19 = FUNC_10(VAR_29, VAR_8|VAR_5|VAR_6, 0666);
      if (VAR_19 == -1)
      {
         FUNC_11(VAR_29);
         return 1;
      }
   }


   if ((VAR_20 = FUNC_15((void **) &VAR_24, VAR_30, VAR_27, VAR_10)) < 0)
   {
      FUNC_11("socket");
      return 1;
   }

   if (FUNC_14(VAR_20, VAR_24, 0) < 0)
   {
      FUNC_11("connect");
      return 1;
   }


   if (!FUNC_16(VAR_20, VAR_16, 6*sizeof(uint32_t)))
   {
      FUNC_4(VAR_21, "Failed to receive connection header.\n");
      return 1;
   }


   if (VAR_16[3])
   {
      FUNC_4(VAR_21, "Password required but unsupported.\n");
      return 1;
   }


   FUNC_17(VAR_20, VAR_16, 6*sizeof(uint32_t), 1);


   VAR_11 = VAR_3;
   VAR_12 = 32;
   FUNC_18((char *) VAR_16, "RANetplayer");
   FUNC_1();


   FUNC_0();


   FUNC_0();
   if (VAR_11 != VAR_0)
   {
      FUNC_4(VAR_21, "Failed to receive INFO.");
      return 1;
   }


   if (VAR_33)
      FUNC_2();


   FUNC_1();


   FUNC_0();



   if (VAR_33 && !VAR_31)
   {
      VAR_34 = 1;
      VAR_13 = FUNC_9(VAR_16[0]);
   }


   if (VAR_31)
   {
      VAR_11 = VAR_4;
      VAR_12 = sizeof(uint32_t);
      VAR_16[0] = FUNC_7(1);
      FUNC_1();
   }


   while (1)
   {
      FUNC_0();

      FUNC_5(1);


      if (VAR_33 && VAR_34)
         FUNC_2();


      switch (VAR_11)
      {
         case 129:
            if (VAR_31 && !VAR_32)
            {
               uint32_t VAR_38;

               if (VAR_12 < 2*sizeof(uint32_t)) break;


               VAR_38 = FUNC_9(VAR_16[1]);
               if ((VAR_38 & VAR_1) &&
                   (VAR_38 & VAR_2))
               {

                  VAR_32 = 1;
                  FUNC_5(0);
                  VAR_13 = FUNC_9(VAR_16[0]);

                  if (VAR_33)
                     VAR_34 = 1;


                  FUNC_12(0);
               }
            }
            break;

         case 130:
         case 128:
         {
            uint32_t VAR_39;

            if (!VAR_31 || !VAR_32) break;
            if (VAR_12 < sizeof(uint32_t)) break;

            VAR_39 = FUNC_9(VAR_16[0]);


            if (VAR_11 == 130 &&
                (VAR_12 < 2*sizeof(uint32_t) ||
                 (FUNC_9(VAR_16[1]) != 0)))
            {
               break;
            }

            if (VAR_39 > VAR_25)
            {
               VAR_25 = VAR_39;
               if (VAR_26 >= 0 || VAR_39 >= (uint32_t) -VAR_26)
               {
                  if (!FUNC_12(VAR_39 + VAR_26))
                  {
                     if (!VAR_33)
                        FUNC_13(VAR_20);
                     VAR_31 = VAR_32 = 0;
                  }
               }
            }

            break;
         }
      }
   }

   return 0;
}
