
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_14__ {char* value; int name; } ;
struct TYPE_12__ {TYPE_1__* io; TYPE_2__* module; } ;
struct TYPE_11__ {int * header_list; } ;
struct TYPE_10__ {char* uri; } ;
typedef TYPE_5__ RTSP_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*,char*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_4 )
{
   VC_CONTAINERS_LIST_T *VAR_5 = VAR_4->priv->module->header_list;
   RTSP_HEADER_T VAR_6;
   char *VAR_7;
   char *VAR_8;

   VAR_6.name = VAR_2;
   if (!FUNC_2(VAR_5, &VAR_6))
   {
      FUNC_0(VAR_4, "RTSP: Content missing");
      return VAR_3;
   }
   VAR_8 = VAR_6.value;







   VAR_6.name = VAR_0;
   if (FUNC_2(VAR_5, &VAR_6))
      VAR_7 = VAR_6.value;
   else {
      VAR_6.name = VAR_1;
      if (FUNC_2(VAR_5, &VAR_6))
         VAR_7 = VAR_6.value;
      else
         VAR_7 = VAR_4->priv->io->uri;
   }

   return FUNC_1(VAR_4, VAR_8, VAR_7);
}
