
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef void* VC_CONTAINER_PROGRESS_REPORT_FUNC_T ;
struct TYPE_13__ {int uri; TYPE_3__* io; int verbosity; } ;
typedef TYPE_2__ VC_CONTAINER_PRIVATE_T ;
struct TYPE_14__ {scalar_t__ max_size; int uri_parts; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,char*,char const**) ;
 char* FUNC_10 (int ) ;

VC_CONTAINER_T *FUNC_11( const char *VAR_5, VC_CONTAINER_STATUS_T *VAR_6,
   VC_CONTAINER_PROGRESS_REPORT_FUNC_T VAR_7, void *VAR_8)
{
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   VC_CONTAINER_T *VAR_10 = 0;
   VC_CONTAINER_IO_T *VAR_11;
   const char *VAR_12;
   FUNC_1(VAR_7);
   FUNC_1(VAR_8);


   VAR_11 = FUNC_6( VAR_5, VAR_2, &VAR_9 );
   if(!VAR_11) goto error;


   if(VAR_11->max_size && VAR_11->max_size < VAR_4)
   {
      FUNC_0(VAR_10, "not enough space available to open a writer");
      VAR_9 = VAR_1;
      goto error;
   }


   VAR_10 = FUNC_2( sizeof(*VAR_10) + sizeof(*VAR_10->priv));
   if(!VAR_10) { VAR_9 = VAR_0; goto error; }
   FUNC_3(VAR_10, 0, sizeof(*VAR_10) + sizeof(*VAR_10->priv));
   VAR_10->priv = (VC_CONTAINER_PRIVATE_T *)(VAR_10 + 1);
   VAR_10->priv->verbosity = FUNC_8();
   VAR_10->priv->io = VAR_11;
   VAR_10->priv->uri = VAR_11->uri_parts;
   VAR_11 = ((void*)0);


   VAR_12 = FUNC_10(VAR_10->priv->uri);

   FUNC_9(VAR_10->priv->uri, 0, "container", &VAR_12);

   VAR_9 = FUNC_7(VAR_10, VAR_12);
   if(VAR_9 != VAR_3) goto error;

 end:
   if(VAR_6) *VAR_6 = VAR_9;
   return VAR_10;

error:
   if(VAR_11) FUNC_5(VAR_11);
   if (VAR_10) FUNC_4(VAR_10);
   VAR_10 = ((void*)0);
   goto end;
}
