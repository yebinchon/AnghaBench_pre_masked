
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int dummy ;
struct TYPE_18__ {int tracks_num; TYPE_2__* priv; int capabilities; TYPE_5__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {int index; TYPE_5__* track; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_20__ {int is_enabled; TYPE_1__* format; } ;
struct TYPE_17__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_3__*) ;TYPE_4__* module; } ;
struct TYPE_16__ {int codec; int es_type; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int ,long long,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;

VC_CONTAINER_STATUS_T FUNC_12( VC_CONTAINER_T *VAR_8 )
{
   VC_CONTAINER_MODULE_T *VAR_9 = 0;
   VC_CONTAINER_STATUS_T VAR_10 = VAR_2;
   uint8_t VAR_11[8];


   if((FUNC_2(VAR_8, VAR_11, sizeof(VAR_11)) != sizeof(VAR_11)) ||
      VAR_11[3] != 0xc5 || FUNC_0(VAR_11+4) != 0x4)
      return VAR_2;


   VAR_9 = FUNC_5(sizeof(*VAR_9));
   if(!VAR_9) { VAR_10 = VAR_3; goto error; }
   FUNC_6(VAR_9, 0, sizeof(*VAR_9));
   VAR_8->priv->module = VAR_9;
   VAR_8->tracks_num = 1;
   VAR_8->tracks = &VAR_9->track;
   VAR_8->tracks[0] = FUNC_9(VAR_8, 0);
   if(!VAR_8->tracks[0]) { VAR_10 = VAR_3; goto error; }
   VAR_8->tracks[0]->format->es_type = VAR_4;
   VAR_8->tracks[0]->format->codec = VAR_1;
   VAR_8->tracks[0]->is_enabled = 1;

   if((VAR_10 = FUNC_7(VAR_8)) != VAR_5) goto error;

   FUNC_1(VAR_8, "using rcv reader");

   if(FUNC_11(&VAR_9->index, 512) == VAR_5)
      FUNC_10(VAR_9->index, 0LL, FUNC_3(VAR_8));

   if(FUNC_4(VAR_8))
      VAR_8->capabilities |= VAR_0;

   VAR_8->priv->pf_close = FUNC_8;
   VAR_8->priv->pf_read = VAR_6;
   VAR_8->priv->pf_seek = VAR_7;
   return VAR_5;

 error:
   if(VAR_9) FUNC_8(VAR_8);
   return VAR_10;
}
