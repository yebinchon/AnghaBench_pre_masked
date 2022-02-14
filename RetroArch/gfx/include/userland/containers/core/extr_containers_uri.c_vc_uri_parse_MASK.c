
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {void* fragment; void* path; void* scheme; } ;
typedef TYPE_1__ VC_URI_PARTS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,void**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char const*,int,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (char const*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

bool FUNC_10( VC_URI_PARTS_T *VAR_5, const char *VAR_6 )
{
   const char *VAR_7;
   uint32_t VAR_8;

   if (!VAR_5 || !VAR_6)
      return 0;

   FUNC_7(VAR_5);




   VAR_7 = FUNC_8(VAR_6, VAR_4);

   if (*VAR_7 == ':')
   {
      VAR_8 = (VAR_7 - VAR_6);
      if (FUNC_2((int)*VAR_6) && VAR_8 == 1 && VAR_7[1] == '\\')
      {


         bool VAR_9 = FUNC_1(VAR_6, &VAR_5->path);
         FUNC_9(VAR_5);
         return VAR_9;
      }

      VAR_5->scheme = FUNC_0(VAR_6, VAR_8);
      if (!VAR_5->scheme)
         goto error;

      FUNC_6(VAR_5->scheme);
      VAR_6 = VAR_7 + 1;
   }

   if (VAR_6[0] == '/' && VAR_6[1] == '/')
   {
      const char *VAR_10 = ((void*)0);


      VAR_6 += 2;

      VAR_7 = FUNC_8(VAR_6, VAR_1);
      if (*VAR_7 == '@')
      {
         VAR_10 = VAR_7;
         VAR_7 = FUNC_8(VAR_7 + 1, VAR_0);
      }

      if (!FUNC_3(VAR_5, VAR_6, VAR_7 - VAR_6, VAR_10))
         goto error;
      VAR_6 = VAR_7;
   }


   VAR_7 = FUNC_8(VAR_6, VAR_2);
   VAR_8 = VAR_7 - VAR_6;
   if (VAR_8)
   {
      VAR_5->path = FUNC_0(VAR_6, VAR_8);
      FUNC_9(VAR_5);
      if (!VAR_5->path)
         goto error;
   }


   if (*VAR_7 == '?')
   {
      VAR_6 = VAR_7 + 1;
      VAR_7 = FUNC_8(VAR_6, VAR_3);
      if (!FUNC_4(VAR_5, VAR_6, VAR_7 - VAR_6))
         goto error;
   }


   if (*VAR_7 == '#')
   {
      VAR_6 = VAR_7 + 1;
      VAR_5->fragment = FUNC_0(VAR_6, FUNC_5(VAR_6));
      if (!VAR_5->fragment)
         goto error;
   }

   return 1;

error:
   FUNC_7(VAR_5);
   return 0;
}
