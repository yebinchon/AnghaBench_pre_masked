
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(int VAR_5, char **VAR_6)
{
   int VAR_7, VAR_8, VAR_9;
   int32_t *VAR_10;


   for(VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
   {
      if(!VAR_6[VAR_7]) continue;

      if(VAR_6[VAR_7][0] != '-')
      {

         VAR_3 = VAR_6[VAR_7];
         continue;
      }


      switch(VAR_6[VAR_7][1])
      {
      case 'v':
         VAR_8 = 2;
         VAR_10 = &VAR_4;
         *VAR_10 = VAR_0|VAR_1;
         for(VAR_9 = 0; VAR_9 < 2 && VAR_6[VAR_7][VAR_8+VAR_9] == 'v'; VAR_9++)
            *VAR_10 = (*VAR_10 << 1) | 1 ;
         break;
      case 'f':
         if(VAR_7+1 == VAR_5 || !VAR_6[VAR_7+1]) goto invalid_option;
         VAR_2 = FUNC_3(VAR_6[++VAR_7], 0, 0);
         break;
      case 'h': goto usage;
      default: goto invalid_option;
      }
      continue;
   }


   if(!VAR_3)
   {
     FUNC_0(0, "missing uri argument");
     goto usage;
   }

   return 0;

 invalid_option:
   FUNC_0(0, "invalid command line option (%s)", VAR_6[VAR_7]);

 usage:
   VAR_3 = FUNC_2(VAR_6[0], '\\'); if(VAR_3) VAR_3++;
   if(!VAR_3) {VAR_3 = FUNC_2(VAR_6[0], '/'); if(VAR_3) VAR_3++;}
   if(!VAR_3) VAR_3 = VAR_6[0];
   FUNC_1(0, "");
   FUNC_1(0, "usage: %s [options] uri", VAR_3);
   FUNC_1(0, "options list:");
   FUNC_1(0, " -vxx  : general verbosity level (replace xx with a number of \'v\')");
   FUNC_1(0, " -f    : required frame rate/second (frame interval must not exceed 1/f)");
   FUNC_1(0, " -h    : help");
   return 1;
}
