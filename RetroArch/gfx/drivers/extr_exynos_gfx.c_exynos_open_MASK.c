
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct exynos_data {int drmname; } ;
typedef int buf ;
struct TYPE_6__ {int connector_id; } ;
struct TYPE_5__ {int page_flip_handler; int version; } ;
struct TYPE_4__ {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int FUNC_11(struct exynos_data *VAR_8)
{
   unsigned VAR_9;
   int VAR_10 = -1;
   char VAR_11[32] = {0};
   int VAR_12 = FUNC_7();

   if (VAR_8)
      VAR_6 = -1;

   if (VAR_12 != -1)
      FUNC_9(VAR_11, sizeof(VAR_11), "/dev/dri/card%d", VAR_12);
   else
   {
      FUNC_0("[video_exynos]: no compatible DRM device found\n");
      return -1;
   }

   VAR_10 = FUNC_8(VAR_11, VAR_1);

   if (VAR_10 < 0)
   {
      FUNC_0("[video_exynos]: can't open DRM device\n");
      return -1;
   }

   if (!FUNC_6(VAR_10))
      goto fail;

   if (!FUNC_4(VAR_10))
      goto fail;

   if (!FUNC_5(VAR_10))
      goto fail;


   VAR_7.fd = VAR_10;
   VAR_7.events = VAR_2;
   VAR_5.version = VAR_0;
   VAR_5.page_flip_handler = VAR_3;

   FUNC_10(VAR_8->drmname, VAR_11, sizeof(VAR_11));
   VAR_6 = VAR_10;

   FUNC_1("[video_exynos]: using DRM device \"%s\" with connector id %u.\n",
         VAR_8->drmname, VAR_4->connector_id);

   return 0;

fail:
   FUNC_3();
   FUNC_2(VAR_6);

   return -1;
}
