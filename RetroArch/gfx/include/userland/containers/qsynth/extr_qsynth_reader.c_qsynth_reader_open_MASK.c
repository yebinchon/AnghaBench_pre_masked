
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int tracks_num; TYPE_2__* priv; int capabilities; TYPE_5__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {TYPE_5__* track; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {int is_enabled; TYPE_1__* format; } ;
struct TYPE_15__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_3__*) ;TYPE_4__* module; } ;
struct TYPE_14__ {int codec; int es_type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_7 (TYPE_3__*,int ) ;

VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = 0;
   VC_CONTAINER_STATUS_T VAR_11 = VAR_3;
   uint8_t VAR_12[VAR_0];


   if((FUNC_1(VAR_9, VAR_12, VAR_0) != VAR_0) ||
      FUNC_5(VAR_12, 0, 0, 0, 0) != VAR_6)
      return VAR_3;


   VAR_10 = FUNC_2(sizeof(*VAR_10));
   if(!VAR_10) { VAR_11 = VAR_4; goto error; }
   FUNC_3(VAR_10, 0, sizeof(*VAR_10));
   VAR_9->priv->module = VAR_10;
   VAR_9->tracks_num = 1;
   VAR_9->tracks = &VAR_10->track;
   VAR_9->tracks[0] = FUNC_7(VAR_9, 0);
   if(!VAR_9->tracks[0]) { VAR_11 = VAR_4; goto error; }
   VAR_9->tracks[0]->format->es_type = VAR_5;
   VAR_9->tracks[0]->format->codec = VAR_2;
   VAR_9->tracks[0]->is_enabled = 1;

   if((VAR_11 = FUNC_4(VAR_9)) != VAR_6) goto error;

   FUNC_0(VAR_9, "using qsynth reader");

   VAR_9->capabilities = VAR_1;

   VAR_9->priv->pf_close = FUNC_6;
   VAR_9->priv->pf_read = VAR_7;
   VAR_9->priv->pf_seek = VAR_8;
   return VAR_6;

 error:
   FUNC_0(VAR_9, "qsynth: error opening stream (%i)", VAR_11);
   if(VAR_10) FUNC_6(VAR_9);
   return VAR_11;
}
