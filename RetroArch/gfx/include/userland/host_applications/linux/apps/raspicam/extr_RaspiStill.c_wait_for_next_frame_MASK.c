
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
typedef TYPE_2__ RASPISTILL_STATE ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int VAR_5 ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(RASPISTILL_STATE *VAR_6, int *VAR_7)
{
   static int64_t VAR_8 = -1;
   int VAR_9 = 1;

   int64_t VAR_10 = FUNC_1()/1000;

   if (VAR_8 == -1)
      VAR_8 = VAR_10 + VAR_6->timeout;



   if (VAR_10 >= VAR_8 && VAR_6->timeout != 0)
      VAR_9 = 0;

   switch (VAR_6->frameNextMethod)
   {
   case 129 :

      FUNC_8(VAR_6->timeout);
      return 0;

   case 134 :
   {
      *VAR_7+=1;


      FUNC_8(10000);


      return 1;
   }

   case 128 :
   {
      static int64_t VAR_11 = -1;


      *VAR_7 += 1;

      if (VAR_11 == -1)
      {
         FUNC_8(VAR_0);


         VAR_10 = FUNC_1()/1000;


         VAR_11 = VAR_10 + VAR_6->timelapse;
      }
      else
      {
         int64_t VAR_12 = VAR_11 - VAR_10;

         if (VAR_12 < 0)
         {

            if (-VAR_12 < VAR_6->timelapse/2)
            {

               VAR_11 += VAR_6->timelapse;
               FUNC_7("Frame %d is %d ms late", *VAR_7, (int)(-VAR_12));
            }
            else
            {
               int VAR_13 = 1 + (-VAR_12)/VAR_6->timelapse;
               FUNC_7("Skipping frame %d to restart at frame %d", *VAR_7, *VAR_7+VAR_13);
               *VAR_7 += VAR_13;
               VAR_12 += VAR_13 * VAR_6->timelapse;
               FUNC_8(VAR_12);
               VAR_11 += (VAR_13 + 1) * VAR_6->timelapse;
            }
         }
         else
         {
            FUNC_8(VAR_12);
            VAR_11 += VAR_6->timelapse;
         }
      }

      return VAR_9;
   }

   case 131 :
   {
      int VAR_14;

      if (VAR_6->common_settings.verbose)
         FUNC_0(VAR_5, "Press Enter to capture, X then ENTER to exit\n");

      VAR_14 = FUNC_2();
      *VAR_7+=1;
      if (VAR_14 == 'x' || VAR_14 == 'X')
         return 0;
      else
      {
         return VAR_9;
      }
   }

   case 132 :
   {





      if (*VAR_7 == 0)
         FUNC_8(VAR_0);
      else
         FUNC_8(30);

      *VAR_7+=1;

      return VAR_9;
   }

   case 133 :
   {

      return 0;
   }

   case 130 :
   {

      sigset_t VAR_15;
      int VAR_16;
      int VAR_17 = 0;

      FUNC_5( &VAR_15 );
      FUNC_4( &VAR_15, VAR_1 );
      FUNC_4( &VAR_15, VAR_2 );



      FUNC_3( VAR_3, &VAR_15, ((void*)0) );

      if (VAR_6->common_settings.verbose)
      {
         FUNC_0(VAR_5, "Waiting for SIGUSR1 to initiate capture and continue or SIGUSR2 to capture and exit\n");
      }

      VAR_17 = FUNC_6( &VAR_15, &VAR_16 );

      if (VAR_17 == 0)
      {
         if (VAR_16 == VAR_1)
         {
            if (VAR_6->common_settings.verbose)
               FUNC_0(VAR_5, "Received SIGUSR1\n");
         }
         else if (VAR_16 == VAR_2)
         {
            if (VAR_6->common_settings.verbose)
               FUNC_0(VAR_5, "Received SIGUSR2\n");
            VAR_9 = 0;
         }
      }
      else
      {
         if (VAR_6->common_settings.verbose)
            FUNC_0(VAR_5, "Bad signal received - error %d\n", VAR_4);
      }

      *VAR_7+=1;

      return VAR_9;
   }
   }


   return VAR_9;
}
