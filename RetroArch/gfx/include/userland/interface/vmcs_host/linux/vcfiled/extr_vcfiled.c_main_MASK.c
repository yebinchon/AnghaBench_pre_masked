
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lockfile ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char* const*) ;
 char const* VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (char*,int (*) (int ,char*,char* const)) ;
 int FUNC_9 (int *,int,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (scalar_t__*) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int,int ,char*,int ,...) ;

int FUNC_18(int VAR_14, char *const *VAR_15)
{
   VCHIQ_INSTANCE_T VAR_16;
   int VAR_17;
   char VAR_18[128];

   VAR_12 = VAR_15[0];
   const char *VAR_19 = FUNC_6(VAR_12, '/');
   if (VAR_19)
      VAR_12 = VAR_19+1;

   FUNC_3(VAR_14, VAR_15);

   if (!VAR_6)
   {
      if ( FUNC_0( 0, 1 ) != 0 )
      {
         FUNC_1( VAR_13, "Failed to daemonize: errno = %d", VAR_5 );
         return -1;
      }
      VAR_11 = 0;
   }
   if ( VAR_10 )
   {
      FUNC_17( VAR_18, sizeof(VAR_18), 0, "%s/%s", VAR_9, VAR_3 );
   }
   else
   {
      FUNC_17( VAR_18, sizeof(VAR_18), 0, "%s", VAR_3 );
   }
   VAR_17 = FUNC_8(VAR_18, FUNC_2);
   if (VAR_17 != 0)
   {
      return -1;
   }

   FUNC_2( VAR_2, "vcfiled started" );

   FUNC_16();

   if (FUNC_13(&VAR_16) != VAR_4)
   {
      FUNC_2(VAR_1, "%s: failed to open vchiq instance\n", VAR_15[0]);
      return -1;
   }

   VAR_17 = FUNC_11( &VAR_8);
   FUNC_14(VAR_17 == 0);
   VAR_16 = (VCHIQ_INSTANCE_T)VAR_8;

   VAR_7 = FUNC_10(FUNC_4(),
                                              FUNC_12());

   FUNC_9(&VAR_7, 1, VAR_8);

   FUNC_7 (VAR_8, &VAR_7, 1);

   for (;;)
   {
      FUNC_5(VAR_0);
   }

   FUNC_15 ();

   return 0;
}
