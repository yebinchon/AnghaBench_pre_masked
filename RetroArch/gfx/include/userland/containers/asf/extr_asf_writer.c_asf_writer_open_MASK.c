
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* tracks; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {int null; scalar_t__* tracks; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {int pf_control; int pf_write; int pf_close; TYPE_3__* module; int uri; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int ,int ,char*,char const**) ;
 char* FUNC_8 (int ) ;

VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_1;
   const char *VAR_9 = FUNC_8(VAR_7->priv->uri);
   VC_CONTAINER_MODULE_T *VAR_10 = 0;
   unsigned int VAR_11;


   FUNC_7(VAR_7->priv->uri, 0, "container", &VAR_9);


   if(!VAR_9)
      return VAR_1;
   if(FUNC_4(VAR_9, "asf") && FUNC_4(VAR_9, "wmv") &&
      FUNC_4(VAR_9, "wma"))
      return VAR_1;


   VAR_10 = FUNC_2(sizeof(*VAR_10));
   if(!VAR_10) { VAR_8 = VAR_2; goto error; }
   FUNC_3(VAR_10, 0, sizeof(*VAR_10));
   VAR_7->priv->module = VAR_10;
   VAR_7->tracks = VAR_10->tracks;


   VAR_8 = FUNC_6(VAR_7, &VAR_10->null);
   if(VAR_8 != VAR_3) goto error;



   VAR_7->priv->pf_close = VAR_4;
   VAR_7->priv->pf_write = VAR_6;
   VAR_7->priv->pf_control = VAR_5;
   return VAR_3;

 error:
   FUNC_0(VAR_7, "asf: error opening stream");
   for(VAR_11 = 0; VAR_11 < VAR_0 && VAR_7->tracks && VAR_7->tracks[VAR_11]; VAR_11++)
      FUNC_5(VAR_7, VAR_7->tracks[VAR_11]);
   FUNC_1(VAR_10);
   return VAR_8;
}
