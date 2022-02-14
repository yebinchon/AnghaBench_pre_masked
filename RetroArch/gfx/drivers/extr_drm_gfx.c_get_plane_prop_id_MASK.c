
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {scalar_t__ prop_id; int name; } ;
typedef TYPE_1__ drmModePropertyRes ;
struct TYPE_13__ {int count_planes; int * planes; } ;
typedef TYPE_2__ drmModePlaneRes ;
struct TYPE_14__ {scalar_t__ plane_id; } ;
typedef TYPE_3__ drmModePlane ;
struct TYPE_15__ {int count_props; int * props; } ;
typedef TYPE_4__ drmModeObjectProperties ;
struct TYPE_11__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char const*) ;
 TYPE_10__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (int ,scalar_t__,int ) ;
 TYPE_1__** FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,char const*) ;

__attribute__((used)) static uint32_t FUNC_7(uint32_t VAR_2, const char *VAR_3)
{
   int VAR_4,VAR_5;
   drmModePlaneRes *VAR_6;
   drmModePlane *VAR_7;
   drmModeObjectProperties *VAR_8;
   drmModePropertyRes **VAR_9;

   char VAR_10[5];

   VAR_6 = FUNC_2(VAR_1.fd);
   for (VAR_4 = 0; VAR_4 < VAR_6->count_planes; VAR_4++)
   {
      VAR_7 = FUNC_1(VAR_1.fd, VAR_6->planes[VAR_4]);
      if (VAR_7->plane_id != VAR_2)
         continue;





      VAR_8 = FUNC_4(VAR_1.fd,
            VAR_7->plane_id, VAR_0);
      VAR_9 = FUNC_5(VAR_8->count_props * sizeof *VAR_9);

      for (VAR_5 = 0; VAR_5 < VAR_8->count_props; ++VAR_5)
         VAR_9[VAR_5] = FUNC_3(VAR_1.fd, VAR_8->props[VAR_5]);


      for (VAR_5 = 0; VAR_5 < VAR_8->count_props; VAR_5++)
      {
         if (FUNC_6(VAR_9[VAR_5]->name, VAR_3))
            return VAR_9[VAR_5]->prop_id;
      }
      FUNC_0 ("DRM: plane %d fb property ID with name %s not found\n",
            VAR_7->plane_id, VAR_3);
   }
   return (0);
}
