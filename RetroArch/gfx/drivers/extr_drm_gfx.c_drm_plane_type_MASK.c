
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int plane_id; } ;
typedef TYPE_1__ drmModePlane ;
typedef TYPE_2__* drmModeObjectPropertiesPtr ;
struct TYPE_10__ {int fd; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int count_props; int * prop_values; int * props; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__* FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static uint64_t FUNC_3(drmModePlane *VAR_2)
{
   int VAR_3,VAR_4;






   drmModeObjectPropertiesPtr VAR_5 =
      FUNC_1(VAR_1.fd, VAR_2->plane_id,
            VAR_0);

   for (VAR_4 = 0; VAR_4 < VAR_5->count_props; VAR_4++)
   {

      if (FUNC_2(
               FUNC_0(VAR_1.fd, VAR_5->props[VAR_4])->name, "type"))
         return (VAR_5->prop_values[VAR_4]);
   }

   return (0);
}
