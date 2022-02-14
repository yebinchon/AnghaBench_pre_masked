
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {int uri_parts; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_5__ {void* write_capture_file; void* read_capture_file; int sock; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_IO_MODE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char const*,char const*,int,scalar_t__) ;
 int FUNC_1 (char const*,char const*,int ,int *) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4(VC_CONTAINER_IO_T *VAR_6,
   VC_CONTAINER_IO_MODE_T VAR_7, bool VAR_8)
{
   VC_CONTAINER_IO_MODULE_T *VAR_9 = VAR_6->module;
   VC_CONTAINER_STATUS_T VAR_10 = VAR_5;
   const char *VAR_11, *VAR_12;


   VAR_12 = FUNC_3(VAR_6->uri_parts);
   if (VAR_12 && !*VAR_12)
      VAR_12 = ((void*)0);


   if (!VAR_12) { VAR_10 = VAR_1; goto error; }

   VAR_11 = FUNC_2(VAR_6->uri_parts);
   if (VAR_11 && !*VAR_11)
      VAR_11 = ((void*)0);

   if (!VAR_11)
   {

      if (!VAR_8 || VAR_7 == VAR_3)
      {
         VAR_10 = VAR_1;
         goto error;
      }
   }

   VAR_9->sock = FUNC_1(VAR_11, VAR_12, VAR_8 ? 0 : VAR_4, ((void*)0));
   if (!VAR_9->sock) { VAR_10 = VAR_0; goto error; }
error:
   return VAR_10;
}
