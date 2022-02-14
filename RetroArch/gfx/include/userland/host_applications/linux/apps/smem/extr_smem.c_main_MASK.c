
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* int32_t ;
typedef int VCSM_STATUS_T ;
struct TYPE_5__ {scalar_t__ want_prefix; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char**,char*,int ,int *) ;
 int VAR_8 ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (void*,int ,int) ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 () ;
 TYPE_2__ VAR_12 ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*,char**,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 () ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 () ;
 void* FUNC_21 (unsigned int) ;
 unsigned int FUNC_22 (int,char*) ;
 void* FUNC_23 (unsigned int,int) ;
 void* FUNC_24 (unsigned int) ;
 void* FUNC_25 (void*) ;
 void* FUNC_26 (void*) ;
 int FUNC_27 (unsigned int) ;
 void* FUNC_28 (void*) ;

int FUNC_29( int VAR_13, char **VAR_14 )
{
   int32_t VAR_15;
   char VAR_16[VAR_0];
   int VAR_17;
   int VAR_18 = 0;
   int VAR_19 = 0;
   uint32_t VAR_20 = 0;
   int VAR_21 = -1;
   VCSM_STATUS_T VAR_22 = VAR_4;

   void *VAR_23;
   unsigned int VAR_24;






   FUNC_13();

   FUNC_16(&VAR_12, VAR_1);
   VAR_12.flags.want_prefix = 0;
   FUNC_15( "smem", &VAR_12 );


   FUNC_0( VAR_16 );


   while (( VAR_17 = FUNC_3( VAR_13, VAR_14, VAR_16, VAR_8,
                                    ((void*)0) )) != -1 )
   {
      switch ( VAR_17 )
      {
         case 0:
         {

            break;
         }
         case 131:
         {
            char *VAR_25;
            VAR_20 = (uint32_t)FUNC_10( VAR_9, &VAR_25, 10 );
            if (VAR_25 == VAR_9)
            {
               FUNC_14( "Invalid arguments '%s'", VAR_9 );
               goto err_out;
            }

            VAR_18 = 1;
            break;
         }
         case 129:
         {
            char *VAR_26;
            VAR_21 = (int)FUNC_9( VAR_9, &VAR_26, 10 );
            if (VAR_26 == VAR_9)
            {
               FUNC_14( "Invalid arguments '%s'", VAR_9 );
               goto err_out;
            }

            break;
         }
         case 128:
         {
            char VAR_27[32];


            if ( FUNC_7( VAR_9, "%31s", VAR_27 ) != 1 )
            {
               FUNC_14( "Invalid arguments '%s'", VAR_9 );
               goto err_out;
            }

            if ( FUNC_17( VAR_27, "all" ) == 0 )
            {
               VAR_22 = VAR_5;
            }
            else if ( FUNC_17( VAR_27, "vc" ) == 0 )
            {
               VAR_22 = VAR_6;
            }
            else if ( FUNC_17( VAR_27, "map" ) == 0 )
            {
               VAR_22 = VAR_2;
            }
            else if ( FUNC_17( VAR_27, "host" ) == 0 )
            {
               VAR_22 = VAR_3;
            }
            else
            {
               goto err_out;
            }

            VAR_19 = 1;
            break;
         }
         default:
         {
            FUNC_14( "Unrecognized option '%d'", VAR_17 );
            goto err_usage;
         }
         case '?':
         case 130:
         {
            goto err_usage;
         }
      }
   }

   VAR_13 -= VAR_10;
   VAR_14 += VAR_10;

   if (( VAR_10 == 1 ) || ( VAR_13 > 0 ))
   {
      if ( VAR_13 > 0 )
      {
         FUNC_14( "Unrecognized argument -- '%s'", *VAR_14 );
      }

      goto err_usage;
   }


   if ( FUNC_20() == -1 )
   {
      FUNC_14( "Cannot initialize smem device" );
      goto err_out;
   }

   if ( VAR_18 == 1 )
   {
      FUNC_14( "Allocating 2 times %u-bytes in shared memory", VAR_20 );

      VAR_24 = FUNC_22( VAR_20,
                               "smem-test-alloc" );

      FUNC_14( "Allocation 1 result: user %x, vc-hdl %x",
                     VAR_24, FUNC_27( VAR_24 ) );
      if ( VAR_24 != 0 )
      {
         VAR_23 = FUNC_21( VAR_24 );
         FUNC_14( "Allocation 1 : lock %p",
                        VAR_23 );
         if ( VAR_23 )
         {
            FUNC_5 ( VAR_23,
                     0,
                     VAR_20 );
            FUNC_4 ( VAR_23,
                     VAR_7,
                     32 );
            FUNC_14( "Allocation 1 contains: \"%s\"",
                           (char *)VAR_23 );

            FUNC_14( "Allocation 1: vc-hdl %x",
                           FUNC_28 ( VAR_23 ) );
            FUNC_14( "Allocation 1: usr-hdl %x",
                           FUNC_26 ( VAR_23 ) );
            FUNC_14( "Allocation 1 : unlock %d",
                           FUNC_25( VAR_23 ) );
         }

         VAR_23 = FUNC_21( VAR_24 );
         FUNC_14( "Allocation 1 (relock) : lock %p",
                        VAR_23 );
         if ( VAR_23 )
         {
            FUNC_14( "Allocation 1 (relock) : unlock %d",
                           FUNC_24( VAR_24 ) );
         }
      }
   }

   if ( VAR_19 == 1 )
   {
      FUNC_2( VAR_22, VAR_21 );
   }




   if ( VAR_18 == 1 )
   {
      FUNC_8();

      FUNC_12( &VAR_11 );
      FUNC_11( &VAR_11 );
   }


   FUNC_18 ();
   goto err_out;

err_usage:
   FUNC_6();

err_out:
   FUNC_1( 1 );
}
