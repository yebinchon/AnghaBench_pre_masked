
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
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_23__ {TYPE_3__* priv; TYPE_11__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_24__ {size_t tracks_num; TYPE_4__** tracks; TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_25__ {int extradata_size; } ;
typedef TYPE_6__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_22__ {TYPE_2__* module; } ;
struct TYPE_21__ {char* uri; int io; } ;
struct TYPE_20__ {int uri; } ;
struct TYPE_19__ {int codec; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,char*,char*) ;
 int FUNC_1 (TYPE_5__*,char*,char*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,scalar_t__,char*,char const*,size_t,char*) ;
 unsigned int FUNC_3 (char const*) ;
 TYPE_4__* FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_11__*,TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (char*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_4__*,int ) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_7,
   VC_CONTAINER_ES_FORMAT_T *VAR_8 )
{
   VC_CONTAINER_TRACK_T *VAR_9 = ((void*)0);
   VC_CONTAINER_STATUS_T VAR_10;
   const char *VAR_11 = FUNC_9(VAR_7->priv->uri);
   unsigned int VAR_12 = FUNC_3(VAR_11);


   if (VAR_7->tracks_num >= VAR_2)
      return VAR_4;

   VAR_7->tracks[VAR_7->tracks_num] = VAR_9 =
      FUNC_4(VAR_7, sizeof(VC_CONTAINER_TRACK_MODULE_T) +
         VAR_12 + VAR_1 + 1);
   if (!VAR_9)
      return VAR_3;

   if (VAR_8->extradata_size)
   {
      VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_8->extradata_size);
      if (VAR_10 != VAR_6)
         goto error;
   }
   FUNC_5(VAR_9->format, VAR_8, VAR_8->extradata_size);

   VAR_9->priv->module->uri = (char *)&VAR_9->priv->module[1];
   FUNC_2(VAR_9->priv->module->uri, VAR_12 + VAR_1 + 1,
      VAR_0, VAR_11, VAR_7->tracks_num, (char *)&VAR_9->format->codec);

   FUNC_0(VAR_7, "opening elementary stream: %s", VAR_9->priv->module->uri);
   VAR_9->priv->module->io = FUNC_7(VAR_9->priv->module->uri,
      VAR_5, &VAR_10);
   if (VAR_10 != VAR_6)
   {
      FUNC_1(VAR_7, "error opening elementary stream: %s",
         VAR_9->priv->module->uri);
      goto error;
   }

   VAR_7->tracks_num++;
   return VAR_6;

 error:
   if (VAR_9)
      FUNC_6(VAR_7, VAR_9);
   return VAR_10;
}
