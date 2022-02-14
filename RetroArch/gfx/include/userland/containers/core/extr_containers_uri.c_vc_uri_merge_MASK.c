
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* scheme; char* host; char* port; char* userinfo; char* path; } ;
typedef TYPE_1__ VC_URI_PARTS_T ;


 int FUNC_0 (char*,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 char* FUNC_3 (char*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

bool FUNC_11( const VC_URI_PARTS_T *VAR_0, VC_URI_PARTS_T *VAR_1 )
{
   bool VAR_2 = 1;
   const char *VAR_3;


   if (VAR_1->scheme)
      return 1;


   if (!FUNC_0(VAR_0->scheme, &VAR_1->scheme))
      return 0;


   if (VAR_1->host || VAR_1->port || VAR_1->userinfo)
      return 1;


   if (!FUNC_0(VAR_0->host, &VAR_1->host) ||
         !FUNC_0(VAR_0->port, &VAR_1->port) ||
         !FUNC_0(VAR_0->userinfo, &VAR_1->userinfo))
      return 0;

   VAR_3 = VAR_1->path;

   if (!VAR_3 || !*VAR_3)
   {

      VAR_2 = FUNC_8(VAR_0, VAR_1);
   }
   else if (*VAR_3 != '/')
   {
      const char *VAR_4 = VAR_0->path;
      char *VAR_5;
      char *VAR_6;
      size_t VAR_7;


      if (!VAR_4 || !*VAR_4)
      {
         if (VAR_1->host || VAR_1->port || VAR_1->userinfo)
            VAR_4 = "/";
         else
            VAR_4 = "";
      }

      VAR_7 = FUNC_4(VAR_4) + FUNC_4(VAR_3) + 1;


      VAR_5 = (char *)FUNC_2(VAR_7);
      if (!VAR_5)
         return 0;

      FUNC_6(VAR_5, VAR_4, VAR_7);

      VAR_6 = FUNC_7(VAR_5, '/');
      if (*VAR_3 == ';')
      {
         char *VAR_8;


         if (!VAR_6)
            VAR_6 = VAR_5;
         VAR_8 = FUNC_3(VAR_6, ';');
         if (VAR_8)
            VAR_8[0] = '\0';
      } else {

         if (VAR_6)
            VAR_6[1] = '\0';
         else
            VAR_5[0] = '\0';
      }
      FUNC_5(VAR_5, VAR_3, VAR_7 - FUNC_4(VAR_5) - 1);

      FUNC_10(VAR_5);
      FUNC_9(VAR_5);

      VAR_2 = FUNC_0(VAR_5, &VAR_1->path);

      FUNC_1(VAR_5);
   }


   return VAR_2;
}
