
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct VC_CONTAINER_IO_T {int uri_parts; int size; int pf_seek; int pf_read; } ;
struct TYPE_9__ {TYPE_2__* priv; int * drm; int size; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef char const* VC_CONTAINER_PROGRESS_REPORT_FUNC_T ;
struct TYPE_10__ {struct VC_CONTAINER_IO_T* io; int drm_filter; int uri; int verbosity; } ;
typedef TYPE_2__ VC_CONTAINER_PRIVATE_T ;
typedef int VC_CONTAINER_DRM_T ;


 int FUNC_0 (int ,char*,struct VC_CONTAINER_IO_T*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned char,char,char,char) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,char*,char const**) ;
 char* FUNC_10 (int ) ;

VC_CONTAINER_T *FUNC_11( struct VC_CONTAINER_IO_T *VAR_4,
   const char *VAR_5, VC_CONTAINER_STATUS_T *VAR_6,
   VC_CONTAINER_PROGRESS_REPORT_FUNC_T VAR_7, void *VAR_8)
{
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   VC_CONTAINER_T *VAR_10 = 0;
   const char *VAR_11;

   FUNC_1(VAR_7);
   FUNC_1(VAR_8);
   FUNC_1(VAR_5);


   if (!VAR_4 || !VAR_4->pf_read || !VAR_4->pf_seek)
   {
      FUNC_0(0, "invalid i/o instance: %p", VAR_4);
      VAR_9 = VAR_1;
      goto error;
   }


   VAR_10 = FUNC_3( sizeof(*VAR_10) + sizeof(*VAR_10->priv) + sizeof(*VAR_10->drm));
   if(!VAR_10) { VAR_9 = VAR_2; goto error; }
   FUNC_4(VAR_10, 0, sizeof(*VAR_10) + sizeof(*VAR_10->priv) + sizeof(*VAR_10->drm));
   VAR_10->priv = (VC_CONTAINER_PRIVATE_T *)(VAR_10 + 1);
   VAR_10->priv->verbosity = FUNC_8();
   VAR_10->drm = (VC_CONTAINER_DRM_T *)(VAR_10->priv + 1);
   VAR_10->size = VAR_4->size;
   VAR_10->priv->io = VAR_4;
   VAR_10->priv->uri = VAR_4->uri_parts;


   VAR_11 = FUNC_10(VAR_10->priv->uri);

   FUNC_9(VAR_10->priv->uri, 0, "container", &VAR_11);

   VAR_9 = FUNC_7(VAR_10, VAR_11);
   if (VAR_9 != VAR_3)
      goto error;

   VAR_10->priv->drm_filter = FUNC_6(FUNC_2('d','r','m',' '),
      FUNC_2('u','n','k','n'), VAR_10, &VAR_9);
   if (VAR_9 != VAR_3)
   {


      if (VAR_9 != VAR_0) goto error;


      VAR_10->drm = ((void*)0);
      VAR_9 = VAR_3;
   }

end:
   if(VAR_6) *VAR_6 = VAR_9;
   return VAR_10;

error:
   if (VAR_10)
   {
      VAR_10->priv->io = ((void*)0);
      FUNC_5(VAR_10);
      VAR_10 = ((void*)0);
   }
   goto end;
}
