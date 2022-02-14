
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t uint ;
struct modeset_buf {int fb_id; int height; int width; } ;
struct TYPE_12__ {scalar_t__ connection; scalar_t__ encoder_id; int connector_id; } ;
typedef TYPE_1__ drmModeConnector ;
struct TYPE_13__ {int vdisplay; int hdisplay; } ;
struct TYPE_16__ {TYPE_2__ mode; } ;
struct TYPE_15__ {scalar_t__ encoder_id; int crtc_id; } ;
struct TYPE_14__ {int * encoders; scalar_t__ count_encoders; int * connectors; scalar_t__ count_connectors; } ;
struct TYPE_11__ {scalar_t__ fd; TYPE_2__* current_mode; int connector_id; int crtc_id; TYPE_6__* orig_crtc; TYPE_5__* encoder; TYPE_4__* resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_10__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_1__* FUNC_4 (scalar_t__,int ) ;
 TYPE_6__* FUNC_5 (scalar_t__,int ) ;
 TYPE_5__* FUNC_6 (scalar_t__,int ) ;
 TYPE_4__* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,int ,int ,int *,int,TYPE_2__*) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_10 (scalar_t__,struct modeset_buf*,int,int ) ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static bool FUNC_13(void)
{
   int VAR_8;
   drmModeConnector *VAR_9;
   uint VAR_10;

   VAR_5.fd = FUNC_11("/dev/dri/card0", VAR_4);

   if (VAR_5.fd < 0)
   {
      FUNC_1 ("DRM: could not open drm device\n");
      return 0;
   }




   VAR_8 = FUNC_9(VAR_5.fd, VAR_1, 1);
   if (VAR_8)
      FUNC_0 ("DRM: can't set UNIVERSAL PLANES cap.\n");
   else
      FUNC_1 ("DRM: UNIVERSAL PLANES cap set\n");

   VAR_8 = FUNC_9(VAR_5.fd, VAR_0, 1);
   if (VAR_8)
   {


      FUNC_0 ("DRM: can't set ATOMIC caps: %s\n", FUNC_12(VAR_6));
   }
   else
      FUNC_1 ("DRM: ATOMIC caps set\n");

   VAR_5.resources = FUNC_7(VAR_5.fd);
   if (!VAR_5.resources)
   {
      FUNC_0 ("DRM: drmModeGetResources failed\n");
      return 0;
   }


   for (VAR_10 = 0; VAR_10 < (uint)VAR_5.resources->count_connectors; VAR_10++)
   {
      VAR_9 = FUNC_4(VAR_5.fd, VAR_5.resources->connectors[VAR_10]);

      if (VAR_9->connection == VAR_3)
         break;
      FUNC_2(VAR_9);
      VAR_9 = ((void*)0);
   }

   if (!VAR_9)
   {
      FUNC_0 ("DRM: no connected connector found\n");
      return 0;
   }


   for (VAR_10 = 0; VAR_10 < (uint)VAR_5.resources->count_encoders; VAR_10++)
   {
      VAR_5.encoder = FUNC_6(VAR_5.fd, VAR_5.resources->encoders[VAR_10]);
      if (VAR_5.encoder->encoder_id == VAR_9->encoder_id)
         break;
      FUNC_3(VAR_5.encoder);
      VAR_5.encoder = ((void*)0);
   }

   if (!VAR_5.encoder)
   {
      FUNC_0 ("DRM: no encoder found.\n");
      return 0;
   }

   VAR_5.crtc_id = VAR_5.encoder->crtc_id;
   VAR_5.connector_id = VAR_9->connector_id;



   VAR_5.orig_crtc = FUNC_5(VAR_5.fd, VAR_5.encoder->crtc_id);
   VAR_5.current_mode = &(VAR_5.orig_crtc->mode);
   VAR_7 = VAR_5.current_mode;


   struct modeset_buf VAR_11;
   VAR_11.width = VAR_5.current_mode->hdisplay;
   VAR_11.height = VAR_5.current_mode->vdisplay;
   VAR_8 = FUNC_10(VAR_5.fd, &VAR_11, 4, VAR_2);
   if (VAR_8)
   {
      FUNC_0 ("DRM: can't create dumb fb\n");
   }

   if (FUNC_8(VAR_5.fd, VAR_5.crtc_id, VAR_11.fb_id, 0, 0,
            &VAR_5.connector_id, 1, VAR_5.current_mode))
   {
      FUNC_0 ("DRM: failed to set mode\n");
      return 0;
   }

   return 1;
}
