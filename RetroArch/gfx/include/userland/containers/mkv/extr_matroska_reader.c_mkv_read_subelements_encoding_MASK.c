
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_14__ {scalar_t__ encodings_num; TYPE_3__* encodings; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_15__ {TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {TYPE_2__* parsing; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {TYPE_7__* module; } ;
struct TYPE_12__ {int type; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_5__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_6, MKV_ELEMENT_ID_T VAR_7, int64_t VAR_8 )
{
   VC_CONTAINER_MODULE_T *VAR_9 = VAR_6->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_10 = VAR_9->parsing->priv->module;
   VC_CONTAINER_STATUS_T VAR_11;
   uint64_t VAR_12;


   VAR_11 = FUNC_0(VAR_6, VAR_8, &VAR_12);
   if(VAR_11 != VAR_5) return VAR_11;

   if(VAR_10->encodings_num >= VAR_3) return VAR_4;

   switch(VAR_7)
   {
   case 128:
      if(VAR_12 == 0) VAR_10->encodings[VAR_10->encodings_num].type = VAR_0;
      if(VAR_12 == 1) VAR_10->encodings[VAR_10->encodings_num].type = VAR_1;
      else VAR_10->encodings[VAR_10->encodings_num].type = VAR_2;
      break;
   default: break;
   }

   return VAR_11;
}
