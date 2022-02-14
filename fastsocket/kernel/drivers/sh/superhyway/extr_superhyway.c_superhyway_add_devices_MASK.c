
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superhyway_device {TYPE_1__* resource; } ;
struct superhyway_bus {int dummy; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ,struct superhyway_device*,struct superhyway_bus*) ;

int FUNC_1(struct superhyway_bus *VAR_0,
      struct superhyway_device **VAR_1,
      int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct superhyway_device *VAR_5 = VAR_1[VAR_3];
  VAR_4 |= FUNC_0(VAR_5->resource[0].start, VAR_5, VAR_0);
 }

 return VAR_4;
}
