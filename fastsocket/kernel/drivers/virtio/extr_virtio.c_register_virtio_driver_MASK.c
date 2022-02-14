
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct virtio_driver {TYPE_1__ driver; int feature_table; scalar_t__ feature_table_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_2(struct virtio_driver *VAR_1)
{

 FUNC_0(VAR_1->feature_table_size && !VAR_1->feature_table);
 VAR_1->driver.bus = &VAR_0;
 return FUNC_1(&VAR_1->driver);
}
