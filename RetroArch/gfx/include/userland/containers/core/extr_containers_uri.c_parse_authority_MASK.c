
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* port; void* host; void* userinfo; } ;
typedef TYPE_1__ VC_URI_PARTS_T ;


 void* FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static bool FUNC_2( VC_URI_PARTS_T *VAR_0, const char *VAR_1,
      uint32_t VAR_2, const char *VAR_3 )
{
   const char *VAR_4 = VAR_3;
   const char *VAR_5 = VAR_1 + VAR_2;
   char VAR_6;

   if (VAR_4)
   {
      VAR_0->userinfo = FUNC_0(VAR_1, VAR_4 - VAR_1);
      if (!VAR_0->userinfo)
         return 0;
      VAR_1 = VAR_4 + 1;
   }

   if (*VAR_1 == '[')
   {

      for (VAR_4 = VAR_1; VAR_4 < VAR_5; VAR_4++)
      {
         VAR_6 = *VAR_4;
         if (VAR_6 == ']')
            break;
      }

      if (VAR_4 < VAR_5)
         VAR_4++;
   } else {

      for (VAR_4 = VAR_1; VAR_4 < VAR_5; VAR_4++)
      {
         VAR_6 = *VAR_4;
         if (VAR_6 == ':')
            break;
      }
   }


   VAR_0->host = FUNC_0(VAR_1, VAR_4 - VAR_1);
   if (!VAR_0->host)
      return 0;
   FUNC_1(VAR_0->host);

   if (*VAR_4 == ':')
   {
      VAR_1 = VAR_4 + 1;
      VAR_0->port = FUNC_0(VAR_1, VAR_5 - VAR_1);
      if (!VAR_0->port)
         return 0;
   }

   return 1;
}
