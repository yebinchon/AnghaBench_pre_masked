
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {int uri_parts; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
typedef scalar_t__ VC_CONTAINER_IO_MODE_T ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static FILE *FUNC_5(VC_CONTAINER_IO_T *VAR_4, VC_CONTAINER_IO_MODE_T VAR_5,
   VC_CONTAINER_STATUS_T *VAR_6)
{
   const char *VAR_7 = VAR_5 == VAR_2 ? "wb+" : "rb";
   FILE *VAR_8 = 0;
   const char *VAR_9, *VAR_10;


   VAR_9 = FUNC_3(VAR_4->uri_parts);
   if (VAR_9 && !*VAR_9)
      VAR_9 = ((void*)0);

   VAR_10 = FUNC_2(VAR_4->uri_parts);
   if (VAR_10 && !*VAR_10)
      VAR_10 = ((void*)0);


   if (VAR_9 || !VAR_10) { *VAR_6 = VAR_1; goto error; }

   if (!FUNC_1(FUNC_4(VAR_4->uri_parts)))
   { *VAR_6 = VAR_0; goto error; }

   VAR_8 = FUNC_0(VAR_10, VAR_7);
   if(!VAR_8) { *VAR_6 = VAR_0; goto error; }

   *VAR_6 = VAR_3;
   return VAR_8;

error:
   return ((void*)0);
}
