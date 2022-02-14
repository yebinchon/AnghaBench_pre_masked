
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int fattributes_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 char* FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_2, fattributes_t VAR_3)
{
   char *VAR_4 = FUNC_5(VAR_2);
   int VAR_5 = -1;

   FUNC_0( "vc_hostfs_set_attr: '%s', %x", VAR_2, VAR_3 );

   if (VAR_4)
   {
      mode_t VAR_6 = 0;
      struct stat VAR_7;

      FUNC_1(VAR_4);

      if ( FUNC_4( VAR_2, &VAR_7 ) == 0 )
      {
         VAR_6 = VAR_7.st_mode;

         if ( VAR_3 & VAR_0 )
         {
            VAR_6 &= ~VAR_1;
         }
         else
         {
            VAR_6 |= VAR_1;
         }



         if ( FUNC_2( VAR_2, VAR_6 ) == 0 )
            VAR_5 = 0;
      }
   }

   if (VAR_4)
      FUNC_3(VAR_4);

   return VAR_5;
}
