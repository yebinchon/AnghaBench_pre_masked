
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * bus; int release; } ;
struct hid_device {TYPE_2__ dev; int debug_list; int debug_wait; TYPE_1__* report_enum; int collection_size; int * collection; } ;
struct hid_collection {int dummy; } ;
struct TYPE_4__ {int report_list; } ;


 int VAR_0 ;
 struct hid_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int,int ) ;
 struct hid_device* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;

struct hid_device *FUNC_7(void)
{
 struct hid_device *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return FUNC_0(VAR_8);

 FUNC_2(&VAR_6->dev);
 VAR_6->dev.release = VAR_5;
 VAR_6->dev.bus = &VAR_4;

 VAR_6->collection = FUNC_4(VAR_2,
   sizeof(struct hid_collection), VAR_1);
 if (VAR_6->collection == ((void*)0))
  goto err;
 VAR_6->collection_size = VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_1(&VAR_6->report_enum[VAR_7].report_list);

 FUNC_3(&VAR_6->debug_wait);
 FUNC_1(&VAR_6->debug_list);

 return VAR_6;
err:
 FUNC_6(&VAR_6->dev);
 return FUNC_0(VAR_8);
}
