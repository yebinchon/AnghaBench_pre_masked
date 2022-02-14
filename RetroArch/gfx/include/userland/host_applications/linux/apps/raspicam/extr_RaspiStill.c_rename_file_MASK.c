
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* linkname; } ;
typedef TYPE_1__ RASPISTILL_STATE ;
typedef int MMAL_STATUS_T ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char**,char**,char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_9(RASPISTILL_STATE *VAR_2, FILE *VAR_3,
                        const char *VAR_4, const char *VAR_5, int VAR_6)
{
   MMAL_STATUS_T VAR_7;

   FUNC_1(VAR_3);
   FUNC_7(VAR_5 != ((void*)0) && VAR_4 != ((void*)0));
   if (0 != FUNC_4(VAR_5, VAR_4))
   {
      FUNC_8("Could not rename temp file to: %s; %s",
                     VAR_4,FUNC_5(VAR_1));
   }
   if (VAR_2->linkname)
   {
      char *VAR_8;
      char *VAR_9;
      VAR_7 = FUNC_0(&VAR_9, &VAR_8, VAR_2->linkname, VAR_6);


      if (VAR_7 != VAR_0
            || (0 != FUNC_3(VAR_4, VAR_8)
                && 0 != FUNC_6(VAR_4, VAR_8))
            || 0 != FUNC_4(VAR_8, VAR_9))
      {
         FUNC_8("Could not link as filename: %s; %s",
                        VAR_2->linkname,FUNC_5(VAR_1));
      }
      if (VAR_8) FUNC_2(VAR_8);
      if (VAR_9) FUNC_2(VAR_9);
   }
}
