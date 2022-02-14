
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {int uri_parts; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_5__ {int sock; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*,int ,int *) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_IO_T *VAR_4)
{
   VC_CONTAINER_IO_MODULE_T *VAR_5 = VAR_4->module;
   VC_CONTAINER_STATUS_T VAR_6;
   const char *VAR_7, *VAR_8;


   VAR_8 = FUNC_2(VAR_4->uri_parts);
   if (VAR_8 && !*VAR_8)
      VAR_8 = ((void*)0);


   if (!VAR_8)
   {
      VAR_6 = VAR_1;
      goto error;
   }

   VAR_7 = FUNC_1(VAR_4->uri_parts);
   if (VAR_7 && !*VAR_7)
      VAR_7 = ((void*)0);

   if (!VAR_7)
   {
      VAR_6 = VAR_1;
      goto error;
   }

   VAR_5->sock = FUNC_0(VAR_7, VAR_8, VAR_2, ((void*)0));
   if (!VAR_5->sock)
   {
      VAR_6 = VAR_0;
      goto error;
   }

   return VAR_3;

error:
   return VAR_6;
}
