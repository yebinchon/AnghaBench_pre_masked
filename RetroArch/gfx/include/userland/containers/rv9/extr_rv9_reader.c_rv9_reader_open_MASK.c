
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int tracks_num; TYPE_2__* priv; TYPE_5__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {TYPE_5__* track; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {int is_enabled; TYPE_1__* format; } ;
struct TYPE_15__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_3__*) ;TYPE_4__* module; } ;
struct TYPE_14__ {int codec; int es_type; } ;


 int FUNC_0 (TYPE_3__*,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;

VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_MODULE_T *VAR_8 = 0;
   VC_CONTAINER_STATUS_T VAR_9 = VAR_1;


   if(FUNC_3(VAR_7, 0) != VAR_4)
      return VAR_1;


   VAR_8 = FUNC_1(sizeof(*VAR_8));
   if(!VAR_8) { VAR_9 = VAR_2; goto error; }
   FUNC_2(VAR_8, 0, sizeof(*VAR_8));
   VAR_7->priv->module = VAR_8;
   VAR_7->tracks_num = 1;
   VAR_7->tracks = &VAR_8->track;
   VAR_7->tracks[0] = FUNC_5(VAR_7, 0);
   if(!VAR_7->tracks[0]) { VAR_9 = VAR_2; goto error; }
   VAR_7->tracks[0]->format->es_type = VAR_3;
   VAR_7->tracks[0]->format->codec = VAR_0;
   VAR_7->tracks[0]->is_enabled = 1;

   if((VAR_9 = FUNC_3(VAR_7, VAR_7->tracks[0])) != VAR_4) goto error;

   FUNC_0(VAR_7, "using rv9 reader");

   VAR_7->priv->pf_close = FUNC_4;
   VAR_7->priv->pf_read = VAR_5;
   VAR_7->priv->pf_seek = VAR_6;
   return VAR_4;

 error:
   FUNC_0(VAR_7, "rv9: error opening stream (%i)", VAR_9);
   if(VAR_8) FUNC_4(VAR_7);
   return VAR_9;
}
