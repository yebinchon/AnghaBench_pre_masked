
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; int tracks; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int tracks; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {int pf_control; int pf_write; int pf_close; TYPE_3__* module; int uri; } ;


 int FUNC_0 (TYPE_2__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int ,char*,char const**) ;
 char* FUNC_5 (int ) ;

VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_0;
   const char *VAR_9 = FUNC_5(VAR_7->priv->uri);
   VC_CONTAINER_MODULE_T *VAR_10;


   FUNC_4(VAR_7->priv->uri, 0, "container", &VAR_9);


   if(!VAR_9)
      return VAR_1;
   if(FUNC_3(VAR_9, "smpl") && FUNC_3(VAR_9, "simple"))
      return VAR_1;

   FUNC_0(VAR_7, "using simple writer");


   VAR_10 = FUNC_1(sizeof(*VAR_10));
   if (!VAR_10) { VAR_8 = VAR_2; goto error; }
   FUNC_2(VAR_10, 0, sizeof(*VAR_10));
   VAR_7->priv->module = VAR_10;
   VAR_7->tracks = VAR_10->tracks;

   VAR_7->priv->pf_close = VAR_4;
   VAR_7->priv->pf_write = VAR_6;
   VAR_7->priv->pf_control = VAR_5;
   return VAR_3;

 error:
   FUNC_0(VAR_7, "simple: error opening stream (%i)", VAR_8);
   return VAR_8;
}
