
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct http_t {int dummy; } ;
struct http_connection_t {int dummy; } ;
typedef scalar_t__ retro_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (void*,void*,size_t) ;
 int FUNC_4 (struct http_connection_t*) ;
 int FUNC_5 (struct http_connection_t*) ;
 int FUNC_6 (struct http_connection_t*) ;
 struct http_connection_t* FUNC_7 (char const*,char*,int *) ;
 int * FUNC_8 (struct http_t*,size_t*,int) ;
 int FUNC_9 (struct http_t*) ;
 struct http_t* FUNC_10 (struct http_connection_t*) ;
 int FUNC_11 (struct http_t*,int *,int *) ;

int FUNC_12(const char **VAR_4, size_t *VAR_5, const char *VAR_6, retro_time_t *VAR_7)
{
   size_t VAR_8;
   uint8_t* VAR_9 = ((void*)0);
   char* VAR_10 = ((void*)0);
   int VAR_11 = VAR_2;
   struct http_t* VAR_12 = ((void*)0);
   retro_time_t VAR_13 = FUNC_0();
   struct http_connection_t *VAR_14 = FUNC_7(VAR_6, "GET", ((void*)0));

   *VAR_4 = ((void*)0);


   if (!VAR_14)
      goto error;


   while (!FUNC_6(VAR_14)) {}


   if (!FUNC_4(VAR_14))
   {
      VAR_11 = VAR_1;
      goto error;
   }

   VAR_12 = FUNC_10(VAR_14);


   if (!VAR_12)
   {
      VAR_11 = VAR_0;
      goto error;
   }

   while (!FUNC_11(VAR_12, ((void*)0), ((void*)0)))
   {

      if (VAR_7 && (FUNC_0() - VAR_13) > *VAR_7)
      {
         VAR_11 = VAR_3;
         goto error;
      }
   }

   VAR_9 = FUNC_8(VAR_12, &VAR_8, 0);

   if (VAR_9)
   {
      VAR_10 = (char*)FUNC_2(VAR_8 + 1);


      if (!VAR_10)
         goto error;

      FUNC_3((void*)VAR_10, (void*)VAR_9, VAR_8);
      FUNC_1(VAR_9);
      VAR_10[VAR_8] = 0;
      *VAR_4 = VAR_10;
   }
   else
   {
      VAR_8 = 0;
      *VAR_4 = ((void*)0);
   }

   if (VAR_5)
      *VAR_5 = VAR_8;

error:
   if (VAR_12)
      FUNC_9(VAR_12);

   if (VAR_14)
      FUNC_5(VAR_14);

   if (VAR_7)
   {
      VAR_13 = FUNC_0() - VAR_13;

      if (VAR_13 < *VAR_7)
         *VAR_7 -= VAR_13;
      else
         *VAR_7 = 0;
   }

   return VAR_11;
}
