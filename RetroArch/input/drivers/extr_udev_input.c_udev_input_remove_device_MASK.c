
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_devices; TYPE_3__** devices; } ;
typedef TYPE_1__ udev_input_t ;
struct TYPE_7__ {int fd; int devnode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**,TYPE_3__**,unsigned int) ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static void FUNC_4(udev_input_t *VAR_0, const char *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->num_devices; VAR_2++)
   {
      if (!FUNC_3(VAR_1, VAR_0->devices[VAR_2]->devnode))
         continue;

      FUNC_0(VAR_0->devices[VAR_2]->fd);
      FUNC_1(VAR_0->devices[VAR_2]);
      FUNC_2(VAR_0->devices + VAR_2, VAR_0->devices + VAR_2 + 1,
            (VAR_0->num_devices - (VAR_2 + 1)) * sizeof(*VAR_0->devices));
      VAR_0->num_devices--;
   }
}
