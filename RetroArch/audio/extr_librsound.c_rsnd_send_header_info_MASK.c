
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int socket; } ;
struct TYPE_5__ {int rate; int channels; int format; TYPE_1__ conn; } ;
typedef TYPE_2__ rsound_t ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;

 int FUNC_2 (char*) ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;


 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 char* FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,char*,scalar_t__,int) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(rsound_t *VAR_12)
{



   char *VAR_13 = FUNC_5(1, 44);
   if (VAR_13 == ((void*)0))
   {
      FUNC_2("[RSound] Could not allocate memory.");
      return -1;
   }
   uint16_t VAR_14;
   uint32_t VAR_15;
   uint32_t VAR_16 = VAR_12->rate;
   uint16_t VAR_17 = VAR_12->channels;

   uint16_t VAR_18 = 8 * FUNC_7(VAR_12->format);
   uint16_t VAR_19 = VAR_12->format;


   switch ( VAR_19 )
   {
      case 132:
         if ( FUNC_8() )
            VAR_19 = 133;
         else
            VAR_19 = VAR_5;
         break;

      case 130:
         if ( FUNC_8() )
            VAR_19 = VAR_9;
         else
            VAR_19 = VAR_8;
         break;
      case 131:
         if ( FUNC_8() )
            VAR_19 = VAR_7;
         else
            VAR_19 = VAR_6;
         break;
      case 129:
         if ( FUNC_8() )
            VAR_19 = VAR_11;
         else
            VAR_19 = VAR_10;
         break;

      default:
         break;
   }
   FUNC_10(VAR_13, "RIFF", sizeof(VAR_13));
   (*((uint32_t*)(VAR_13+4)) = 0);
   FUNC_10(VAR_13+8, "WAVE", sizeof(VAR_13));
   FUNC_10(VAR_13+12, "fmt ", sizeof(VAR_13));

   VAR_15 = 16;
   if ( !FUNC_8() ) { FUNC_0(&(VAR_15)); };
   (*((uint32_t*)(VAR_13+16)) = VAR_15);

   VAR_14 = 0;

   switch( VAR_12->format )
   {
      case 133:
      case 128:
         VAR_14 = 1;
         break;

      case 135:
         VAR_14 = 6;
         break;

      case 134:
         VAR_14 = 7;
         break;
   }

   if ( !FUNC_8() ) { FUNC_0(&(VAR_14)); };
   (*((uint16_t*)(VAR_13+20)) = VAR_14);


   if ( !FUNC_8() ) { FUNC_0(&(VAR_17)); };
   (*((uint16_t*)(VAR_13+22)) = VAR_17);

   if ( !FUNC_8() ) { FUNC_0(&(VAR_16)); };
   (*((uint32_t*)(VAR_13+24)) = VAR_16);

   VAR_15 = VAR_12->rate * VAR_12->channels * FUNC_7(VAR_12->format);
   if ( !FUNC_8() ) { FUNC_0(&(VAR_15)); };
   (*((uint32_t*)(VAR_13+28)) = VAR_15);

   VAR_14 = VAR_12->channels * FUNC_7(VAR_12->format);
   if ( !FUNC_8() ) { FUNC_0(&(VAR_14)); };
   (*((uint16_t*)(VAR_13+32)) = VAR_14);


   if ( !FUNC_8() ) { FUNC_0(&(VAR_18)); };
   (*((uint16_t*)(VAR_13+34)) = VAR_18);

   FUNC_10(VAR_13+36, "data", sizeof(VAR_13));




   if ( !FUNC_8() ) { FUNC_0(&(VAR_19)); };
   (*((uint16_t*)(VAR_13+42)) = VAR_19);



   if ( FUNC_9(VAR_12->conn.socket, VAR_13, 44, 1) != 44 )
   {
      FUNC_6(VAR_13);
      return -1;
   }

   FUNC_6(VAR_13);
   return 0;
}
