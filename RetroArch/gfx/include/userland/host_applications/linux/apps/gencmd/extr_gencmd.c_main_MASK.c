
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ clock_t ;
typedef int buffer ;
typedef int VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;


 double VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int **,int) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 () ;
 size_t FUNC_14 (char*,char*,int,size_t) ;

int FUNC_15( int VAR_2, char **VAR_3 )
{
   int VAR_4 = 0;
   VCHI_INSTANCE_T VAR_5;
   VCHI_CONNECTION_T *VAR_6 = ((void*)0);

   if ( VAR_2 > 1 )
   {
       if (( FUNC_4( VAR_3[1], "0" ) == 0 ) || ( FUNC_4( VAR_3[1], "1" ) == 0 ))
       {
           VAR_4 = FUNC_0( VAR_3[1] );
           VAR_3++;
           VAR_2--;
       }
   }

   FUNC_13();

    if ( FUNC_12( &VAR_5 ) != 0)
    {
        FUNC_3( "VCHI initialization failed\n" );
        return -1;
    }


    if ( FUNC_10( ((void*)0), 0, VAR_5 ) != 0)
    {
        FUNC_3( "VCHI connection failed\n" );
        return -1;
    }

    FUNC_9(VAR_5, &VAR_6, 1 );

    if (VAR_2 > 1)
    {
      int VAR_7 = 1;
      char VAR_8[ 1024 ];
      size_t VAR_9 = 0;
      clock_t VAR_10=0, VAR_11=0;
      double VAR_12;
      uint32_t VAR_13 = 0;
      int VAR_14;


      VAR_8[0] = '\0';


      if( FUNC_4( VAR_3[1], "-t" ) == 0 )
      {
         VAR_13 = 1;
         VAR_7++;
      }

      for (; VAR_7 <= VAR_2-1; VAR_7++)
      {
         VAR_9 = FUNC_14( VAR_8, VAR_3[VAR_7], sizeof(VAR_8), VAR_9 );
         VAR_9 = FUNC_14( VAR_8, " ", sizeof(VAR_8), VAR_9 );
      }

      if( VAR_13 )
         VAR_10 = FUNC_1();


      if (( VAR_14 = FUNC_7( "%s", VAR_8 )) != 0 )
      {
          FUNC_3( "vc_gencmd_send returned %d\n", VAR_14 );
      }


      if (( VAR_14 = FUNC_6( VAR_8, sizeof( VAR_8 ) )) != 0 )
      {
          FUNC_3( "vc_gencmd_read_response returned %d\n", VAR_14 );
      }

      if( VAR_13 )
         VAR_11 = FUNC_1();

      if( VAR_13 )
      {
         VAR_12 = ((double) (VAR_11 - VAR_10)) / VAR_0;

         FUNC_3( "Time took %f seconds (%f msecs) (%f usecs)\n", VAR_12, VAR_12 * 1000, VAR_12 * 1000000 );
      }

      if ( VAR_8[0] != '\0' )
      {
          if ( VAR_8[ FUNC_5( VAR_8) - 1] == '\n' )
          {
              FUNC_2( VAR_8, VAR_1 );
          }
          else
          {
              FUNC_3("%s\n", VAR_8 );
          }
      }
    }

    FUNC_8();


    if ( FUNC_11( VAR_5 ) != 0)
    {
        FUNC_3( "VCHI disconnect failed\n" );
        return -1;
    }

   return 0;
}
