
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* priv; int tracks; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {scalar_t__ io; } ;
struct TYPE_20__ {TYPE_5__ null; void* data_offset; void* mdat_offset; int temp; int brand; int tracks; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {int pf_control; int pf_write; int pf_close; TYPE_3__* module; int uri; } ;
typedef int MP4_BRAND_T ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_13 (int ,int ,char*,char const**) ;
 char* FUNC_14 (int ) ;

VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_11 )
{
   VC_CONTAINER_STATUS_T VAR_12 = VAR_5;
   const char *VAR_13 = FUNC_14(VAR_11->priv->uri);
   VC_CONTAINER_MODULE_T *VAR_14 = 0;
   MP4_BRAND_T VAR_15;


   FUNC_13(VAR_11->priv->uri, 0, "container", &VAR_13);


   if(!VAR_13)
      return VAR_5;
   if(FUNC_9(VAR_13, "3gp") && FUNC_9(VAR_13, "skm") &&
      FUNC_9(VAR_13, "mov") && FUNC_9(VAR_13, "mp4") &&
      FUNC_9(VAR_13, "m4v") && FUNC_9(VAR_13, "m4a"))
      return VAR_5;


   VAR_14 = FUNC_6(sizeof(*VAR_14));
   if(!VAR_14) { VAR_12 = VAR_6; goto error; }
   FUNC_7(VAR_14, 0, sizeof(*VAR_14));
   VAR_11->priv->module = VAR_14;
   VAR_11->tracks = VAR_14->tracks;


   if(!FUNC_9(VAR_13, "3gp")) VAR_15 = VAR_1;
   else if(!FUNC_9(VAR_13, "skm")) VAR_15 = VAR_4;
   else if(!FUNC_9(VAR_13, "mov")) VAR_15 = VAR_3;
   else VAR_15 = VAR_2;
   VAR_14->brand = VAR_15;


   VAR_12 = FUNC_10(VAR_11, &VAR_14->null);
   if(VAR_12 != VAR_7) goto error;


   VAR_12 = FUNC_11(VAR_11, &VAR_14->temp);
   if(VAR_12 != VAR_7) goto error;

   VAR_12 = FUNC_8(VAR_11, VAR_0);
   if(VAR_12 != VAR_7) goto error;


   VAR_14->mdat_offset = FUNC_1(VAR_11);
   FUNC_4(VAR_11, 0, "size");
   FUNC_3(VAR_11, FUNC_2('m','d','a','t'), "type");
   VAR_14->data_offset = FUNC_1(VAR_11);

   VAR_11->priv->pf_close = VAR_8;
   VAR_11->priv->pf_write = VAR_10;
   VAR_11->priv->pf_control = VAR_9;
   return VAR_7;

 error:
   FUNC_0(VAR_11, "mp4: error opening stream");
   if(VAR_14)
   {
      if(VAR_14->null.io) FUNC_12(VAR_11, &VAR_14->null);
      FUNC_5(VAR_14);
   }
   return VAR_12;
}
