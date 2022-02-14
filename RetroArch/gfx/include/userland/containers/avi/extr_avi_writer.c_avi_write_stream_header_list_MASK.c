
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_22__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_23__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_24__ {int null_io; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_21__ {scalar_t__ drmdata_size; scalar_t__ drmdata; } ;
struct TYPE_20__ {TYPE_5__* module; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int ,char*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,unsigned int,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_12(VC_CONTAINER_T *VAR_1,
   unsigned int VAR_2, uint32_t VAR_3)
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_5 = VAR_1->tracks[VAR_2];
   VC_CONTAINER_STATUS_T VAR_6;
   uint32_t VAR_7 = 0;

   FUNC_5(VAR_1, FUNC_3('L','I','S','T'), "Chunk ID");
   FUNC_6(VAR_1, VAR_3, "LIST Size");
   FUNC_5(VAR_1, FUNC_3('s','t','r','l'), "Chunk ID");

   if ((VAR_6 = FUNC_2(VAR_1)) != VAR_0) return VAR_6;


   VAR_6 = FUNC_8(VAR_1, VAR_5);
   if (VAR_6 != VAR_0) return VAR_6;


   if(!FUNC_11(VAR_1, &VAR_4->null_io))
   {
      VAR_6 = FUNC_7(VAR_1, VAR_5, 0);
      VAR_7 = FUNC_1(VAR_1) - 8;
   }
   FUNC_10(VAR_1, &VAR_4->null_io);

   VAR_6 = FUNC_7(VAR_1, VAR_5, VAR_7);
   if (VAR_6 != VAR_0) return VAR_6;



   if (VAR_5->priv->drmdata && VAR_5->priv->drmdata_size)
   {
      FUNC_5(VAR_1, FUNC_3('s','t','r','d'), "Chunk ID");
      FUNC_6(VAR_1, VAR_5->priv->drmdata_size, "Chunk Size");
      FUNC_4(VAR_1, VAR_5->priv->drmdata, VAR_5->priv->drmdata_size);
      FUNC_0(VAR_1);
      if ((VAR_6 = FUNC_2(VAR_1)) != VAR_0) return VAR_6;
   }


   if(!FUNC_11(VAR_1, &VAR_4->null_io))
   {
      VAR_6 = FUNC_9(VAR_1, VAR_2, 0);
      VAR_7 = FUNC_1(VAR_1) - 8;
   }
   FUNC_10(VAR_1, &VAR_4->null_io);

   VAR_6 = FUNC_9(VAR_1, VAR_2, VAR_7);
   if (VAR_6 != VAR_0) return VAR_6;

   FUNC_0(VAR_1);

   return FUNC_2(VAR_1);
}
