
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sigset_t ;
typedef int int64_t ;
struct TYPE_4__ {int verbose; } ;
struct TYPE_5__ {int timeout; int frameNextMethod; int timelapse; TYPE_1__ common_settings; } ;
typedef TYPE_2__ RASPISTILLYUV_STATE ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int VAR_4 ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(RASPISTILLYUV_STATE *VAR_5, int *VAR_6)
{
   static int64_t VAR_7 = -1;
   int VAR_8 = 1;

   int64_t VAR_9 = FUNC_1()/1000;

   if (VAR_7 == -1)
      VAR_7 = VAR_9 + VAR_5->timeout;



   if (VAR_9 >= VAR_7 && VAR_5->timeout != 0)
      VAR_8 = 0;

   switch (VAR_5->frameNextMethod)
   {
   case 129 :

      FUNC_8(VAR_5->timeout);
      return 0;

   case 134 :
   {
      *VAR_6+=1;


      FUNC_8(10000);


      return 1;
   }

   case 128 :
   {
      static int64_t VAR_10 = -1;


      *VAR_6 += 1;

      if (VAR_10 == -1)
      {
         FUNC_8(VAR_0);


         VAR_9 = FUNC_1()/1000;


         VAR_10 = VAR_9 + VAR_5->timelapse;
      }
      else
      {
         int64_t VAR_11 = VAR_10 - VAR_9;

         if (VAR_11 < 0)
         {

            if (-VAR_11 < -VAR_5->timelapse/2)
            {

               VAR_10 += VAR_5->timelapse;
               FUNC_7("Frame %d is %d ms late", *VAR_6, (int)(-VAR_11));
            }
            else
            {
               int VAR_12 = 1 + (-VAR_11)/VAR_5->timelapse;
               FUNC_7("Skipping frame %d to restart at frame %d", *VAR_6, *VAR_6+VAR_12);
               *VAR_6 += VAR_12;
               VAR_11 += VAR_12 * VAR_5->timelapse;
               FUNC_8(VAR_11);
               VAR_10 += (VAR_12 + 1) * VAR_5->timelapse;
            }
         }
         else
         {
            FUNC_8(VAR_11);
            VAR_10 += VAR_5->timelapse;
         }
      }

      return VAR_8;
   }

   case 131 :
   {
      int VAR_13;

      if (VAR_5->common_settings.verbose)
         FUNC_0(VAR_4, "Press Enter to capture, X then ENTER to exit\n");

      VAR_13 = FUNC_2();
      *VAR_6+=1;
      if (VAR_13 == 'x' || VAR_13 == 'X')
         return 0;
      else
      {
         return VAR_8;
      }
   }

   case 132 :
   {





      if (*VAR_6 == 0)
         FUNC_8(VAR_0);
      else
         FUNC_8(30);

      *VAR_6+=1;

      return VAR_8;
   }

   case 133 :
   {

      return 0;
   }

   case 130 :
   {

      sigset_t VAR_14;
      int VAR_15;
      int VAR_16 = 0;

      FUNC_5( &VAR_14 );
      FUNC_4( &VAR_14, VAR_1 );



      FUNC_3( VAR_2, &VAR_14, ((void*)0) );

      if (VAR_5->common_settings.verbose)
      {
         FUNC_0(VAR_4, "Waiting for SIGUSR1 to initiate capture\n");
      }

      VAR_16 = FUNC_6( &VAR_14, &VAR_15 );

      if (VAR_5->common_settings.verbose)
      {
         if( VAR_16 == 0)
         {
            FUNC_0(VAR_4, "Received SIGUSR1\n");
         }
         else
         {
            FUNC_0(VAR_4, "Bad signal received - error %d\n", VAR_3);
         }
      }

      *VAR_6+=1;

      return VAR_8;
   }
   }


   return VAR_8;
}
