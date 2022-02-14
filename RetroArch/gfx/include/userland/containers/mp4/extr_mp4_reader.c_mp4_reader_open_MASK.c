
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_24__ {unsigned int tracks_num; int capabilities; TYPE_4__* priv; TYPE_3__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_25__ {int found_moov; scalar_t__ data_offset; int data_size; TYPE_3__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_23__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_5__*) ;TYPE_6__* module; } ;
struct TYPE_22__ {TYPE_2__* priv; } ;
struct TYPE_21__ {TYPE_1__* module; } ;
struct TYPE_20__ {int state; } ;
typedef int const MP4_BOX_TYPE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,char*) ;






 int VAR_0 ;




 int FUNC_2 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 TYPE_6__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int const,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int ,int const*,int *) ;
 scalar_t__ FUNC_12 (TYPE_5__*,unsigned int,int *) ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;

VC_CONTAINER_STATUS_T FUNC_14( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_2;
   VC_CONTAINER_MODULE_T *VAR_9 = 0;
   unsigned int VAR_10;
   uint8_t VAR_11[8];


   if( FUNC_2(VAR_7, VAR_11, 8) != 8 )
      return VAR_2;
   switch(FUNC_7(VAR_11[4],VAR_11[5],VAR_11[6],VAR_11[7]))
   {
   case 136:
   case 135:
   case 134:
   case 137:
   case 131:
   case 128:
   case 132:
   case 133:
   case 130:
   case 129:
      break;
   default:

      return VAR_2;
   }





   FUNC_1(VAR_7, "using mp4 reader");


   VAR_9 = FUNC_8(sizeof(*VAR_9));
   if(!VAR_9) { VAR_8 = VAR_3; goto error; }
   FUNC_9(VAR_9, 0, sizeof(*VAR_9));
   VAR_7->priv->module = VAR_9;
   VAR_7->tracks = VAR_9->tracks;

   while(FUNC_6(VAR_7) == VAR_4)
   {
      MP4_BOX_TYPE_T VAR_12;
      int64_t VAR_13;

      VAR_8 = FUNC_11( VAR_7, FUNC_0(-1), &VAR_12, &VAR_13 );
      if(VAR_8 != VAR_4) goto error;

      if(VAR_12 == 135)
      {
         VAR_9->data_offset = FUNC_4(VAR_7);
         VAR_9->data_size = VAR_13;
         if(VAR_9->found_moov) break;
      }
      else if(VAR_12 == 134)
         VAR_9->found_moov = 1;

      VAR_8 = FUNC_10( VAR_7, VAR_12, VAR_13, VAR_0 );
      if(VAR_8 != VAR_4) goto error;

      if(VAR_9->found_moov && VAR_9->data_offset) break;
   }


   for(VAR_10 = 0; VAR_10 < VAR_7->tracks_num; VAR_10++)
   {

      VAR_8 = FUNC_12(VAR_7, VAR_10, &VAR_7->tracks[VAR_10]->priv->module->state);
   }

   VAR_8 = FUNC_3(VAR_7, VAR_9->data_offset);
   if(VAR_8 != VAR_4) goto error;

   VAR_7->priv->pf_close = FUNC_13;
   VAR_7->priv->pf_read = VAR_5;
   VAR_7->priv->pf_seek = VAR_6;

   if(FUNC_5(VAR_7))
      VAR_7->capabilities |= VAR_1;

   return VAR_4;

 error:
   FUNC_1(VAR_7, "mp4: error opening stream");
   if(VAR_9) FUNC_13(VAR_7);
   return VAR_8;
}
