
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTBLOB_T ;


 int FUNC_0 (int *,char*,void const*,int,char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 () ;

int FUNC_14(int VAR_0, char **VAR_1)
{
   const char *VAR_2;
   const char *VAR_3;
   const char *VAR_4;
   DTBLOB_T *VAR_5;
   DTBLOB_T *VAR_6;
   int VAR_7;
   int VAR_8 = 1;
   int VAR_9 = 100000;

   while ((VAR_8 < VAR_0) && (VAR_1[VAR_8][0] == '-'))
   {
      const char *VAR_10 = VAR_1[VAR_8++];
      if ((FUNC_11(VAR_10, "-d") == 0) ||
          (FUNC_11(VAR_10, "--debug") == 0))
         FUNC_1(1);
      else if ((FUNC_11(VAR_10, "-h") == 0) ||
          (FUNC_11(VAR_10, "--help") == 0))
         FUNC_13();
      else
      {
         FUNC_10("* Unknown option '%s'\n", VAR_10);
         FUNC_13();
      }
   }

   if (VAR_0 < (VAR_8 + 3))
   {
      FUNC_13();
   }

   VAR_2 = VAR_1[VAR_8++];
   VAR_3 = VAR_1[VAR_8++];
   VAR_4 = VAR_1[VAR_8++];

   VAR_5 = FUNC_5(VAR_2, VAR_9);
   if (!VAR_5)
   {
       FUNC_10("* failed to load '%s'\n", VAR_2);
       return -1;
   }

   VAR_7 = FUNC_9(VAR_5, "i2c", "i2c0");
   VAR_7 = FUNC_9(VAR_5, "i2c_arm", "i2c0");
   VAR_7 = FUNC_9(VAR_5, "i2c_vc", "i2c1");
   VAR_7 = FUNC_9(VAR_5, "i2c_baudrate", "i2c0_baudrate");
   VAR_7 = FUNC_9(VAR_5, "i2c_arm_baudrate", "i2c0_baudrate");
   VAR_7 = FUNC_9(VAR_5, "i2c_vc_baudrate", "i2c1_baudrate");

   if (FUNC_11(VAR_4, "-") == 0)
   {
      VAR_6 = VAR_5;
   }
   else
   {
      VAR_6 = FUNC_5(VAR_4, VAR_9);
      if (VAR_6)
   VAR_7 = FUNC_3(VAR_5, VAR_6);
      else
   VAR_7 = -1;
   }

   while (!VAR_7 && (VAR_8 < VAR_0))
   {
      char *VAR_11 = VAR_1[VAR_8++];
      char *VAR_12 = VAR_11 + FUNC_12(VAR_11, "=");
      const void *VAR_13;
      int VAR_14;

      if (*VAR_12 == '=')
      {
         *(VAR_12++) = '\0';
      }
      else
      {


         VAR_12 = "true";
      }

      VAR_13 = FUNC_2(VAR_6, VAR_11,
                                              &VAR_14);
      if (VAR_13)
      {
         VAR_7 = FUNC_0(VAR_6, VAR_11,
                                        VAR_13, VAR_14,
                                        VAR_12);
      }
      else
      {
         VAR_13 = FUNC_2(VAR_5, VAR_11, &VAR_14);
         if (VAR_13)
         {
            VAR_7 = FUNC_0(VAR_5, VAR_11,
                                           VAR_13, VAR_14,
                                           VAR_12);
         }
         else
         {
            FUNC_10("* unknown param '%s'\n", VAR_11);
            VAR_7 = VAR_14;
         }
      }
   }

   if (!VAR_7 && (VAR_6 != VAR_5))
   {
      VAR_7 = FUNC_6(VAR_5, VAR_6);

      FUNC_4(VAR_6);
   }

   if (!VAR_7)
   {
      FUNC_7(VAR_5);
      VAR_7 = FUNC_8(VAR_5, VAR_3);
   }

   FUNC_4(VAR_5);

   if (VAR_7 != 0)
      FUNC_10("* Exiting with error code %d\n", VAR_7);

   return VAR_7;
}
