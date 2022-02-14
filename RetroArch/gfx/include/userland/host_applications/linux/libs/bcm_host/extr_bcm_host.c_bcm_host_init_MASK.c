
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int response ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int FUNC_6 (scalar_t__,int *,int) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;

void FUNC_16(void)
{
   VCHIQ_INSTANCE_T VAR_3;
   static int VAR_4;
   int VAR_5 = -1;
   char VAR_6[ 128 ];

   if (VAR_4)
 return;
   VAR_4 = 1;
   FUNC_14();

   if (FUNC_12(&VAR_3) != VAR_0)
   {
      FUNC_1("* failed to open vchiq instance\n");
      FUNC_0(-1);
   }

   FUNC_15("vchi_initialise");
   VAR_5 = FUNC_10( &VAR_2);
   FUNC_13(VAR_5 == 0);
   VAR_3 = (VCHIQ_INSTANCE_T)VAR_2;

   VAR_1 = FUNC_9(FUNC_2(),
                                              FUNC_11());

   FUNC_15("vchi_connect");
   FUNC_8(&VAR_1, 1, VAR_2);

   FUNC_6 (VAR_2, &VAR_1, 1);
   FUNC_5 (VAR_2, &VAR_1, 1);
   FUNC_7 (VAR_2, &VAR_1, 1);
   FUNC_4 (VAR_2, &VAR_1, 1);


   if ( VAR_5 == 0 )
   {
      VAR_5 = FUNC_3( VAR_6, sizeof(VAR_6), "set_vll_dir /sd/vlls" );
      FUNC_13( VAR_5 == 0 );
   }
}
