
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; int capabilities; int tracks; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int track; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {int pf_control; int pf_write; int pf_close; TYPE_3__* module; int uri; } ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int ,char*,char const**) ;
 char* FUNC_5 (int ) ;

VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_8 )
{
   const char *VAR_9 = FUNC_5(VAR_8->priv->uri);
   VC_CONTAINER_MODULE_T *VAR_10 = 0;
   VC_CONTAINER_STATUS_T VAR_11 = VAR_1;


   FUNC_4(VAR_8->priv->uri, 0, "container", &VAR_9);


   if(!VAR_9)
      return VAR_2;
   if(FUNC_3(VAR_9, "dummy"))
      return VAR_2;


   VAR_10 = FUNC_1(sizeof(*VAR_10));
   if(!VAR_10) { VAR_11 = VAR_3; goto error; }
   FUNC_2(VAR_10, 0, sizeof(*VAR_10));
   VAR_8->priv->module = VAR_10;
   VAR_8->tracks = VAR_10->track;

   VAR_8->capabilities |= VAR_0;

   VAR_8->priv->pf_close = VAR_5;
   VAR_8->priv->pf_write = VAR_7;
   VAR_8->priv->pf_control = VAR_6;
   return VAR_4;

 error:
   FUNC_0(VAR_8, "dummy: error opening stream (%i)", VAR_11);
   return VAR_11;
}
