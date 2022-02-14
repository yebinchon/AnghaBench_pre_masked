
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int verbose; int gps; int sensor_mode; int cameraNum; int filename; int height; int width; } ;
typedef TYPE_1__ RASPICOMMONSETTINGS_PARAMETERS ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void (*) (char*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,char const*,int*) ;
 int FUNC_8 (char const*,char*,int *) ;
 int VAR_2 ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (int ) ;

int FUNC_13(RASPICOMMONSETTINGS_PARAMETERS *VAR_3, const char *VAR_4, const char *VAR_5, void (*VAR_6)(char*))
{
   int VAR_7, VAR_8 = 0, VAR_9;

   if (!VAR_4)
      return 0;

   VAR_7 = FUNC_7(VAR_0, VAR_1, VAR_4, &VAR_9);


   if (VAR_7==-1 || (VAR_7 != -1 && VAR_9 > 0 && VAR_5 == ((void*)0)))
      return 0;

   switch (VAR_7)
   {
   case 132:
   {
      FUNC_1(FUNC_0(FUNC_4()), VAR_6);
      FUNC_2(0);
      break;
   }
   case 128:
      if (FUNC_8(VAR_5, "%u", &VAR_3->width) == 1)
         VAR_8 = 2;
      break;

   case 133:
      if (FUNC_8(VAR_5, "%u", &VAR_3->height) == 1)
         VAR_8 = 2;
      break;

   case 131:
   {
      int VAR_10 = FUNC_10(VAR_5);
      if (VAR_10)
      {

         const char *VAR_11 = VAR_5;

         while(*VAR_11 && (VAR_11=FUNC_9(VAR_11, '%')) != ((void*)0))
         {
            int VAR_12=0;
            VAR_11++;
            while(FUNC_5(*VAR_11))
            {
               VAR_11++;
               VAR_12++;
            }
            if(!((*VAR_11 == '%' && !VAR_12) || *VAR_11 == 'd'))
            {
               VAR_8 = 0;
               FUNC_3(VAR_2, "Filename contains %% characters, but not %%d or %%%% - sorry, will fail\n");
               break;
            }
            VAR_11++;
         }

         VAR_3->filename = FUNC_6(VAR_10 + 10);
         FUNC_12(VAR_3->filename);
         if (VAR_3->filename)
            FUNC_11(VAR_3->filename, VAR_5, VAR_10+1);
         VAR_8 = 2;
      }
      else
         VAR_8 = 0;
      break;
   }

   case 129:
      VAR_3->verbose = 1;
      VAR_8 = 1;
      break;

   case 135:
   {
      if (FUNC_8(VAR_5, "%u", &VAR_3->cameraNum) == 1)
         VAR_8 = 2;
      break;
   }

   case 130:
   {
      if (FUNC_8(VAR_5, "%u", &VAR_3->sensor_mode) == 1)
         VAR_8 = 2;
      break;
   }

   case 134:
      VAR_3->gps = 1;
      VAR_8 = 1;
      break;
   }

   return VAR_8;
}
