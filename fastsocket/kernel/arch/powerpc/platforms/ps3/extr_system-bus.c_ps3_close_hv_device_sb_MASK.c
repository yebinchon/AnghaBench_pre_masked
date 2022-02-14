
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_system_bus_device {int dev_id; int bus_id; } ;
struct TYPE_2__ {int mutex; scalar_t__ sb_12; scalar_t__ sb_11; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ps3_system_bus_device*,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_5(struct ps3_system_bus_device *VAR_1)
{
 int VAR_2;

 FUNC_0(!VAR_1->bus_id);
 FUNC_2(&VAR_0.mutex);

 if (FUNC_4(VAR_1, 1, 1)) {
  VAR_0.sb_11--;
  if (VAR_0.sb_11) {
   VAR_2 = 0;
   goto done;
  }
 }

 if (FUNC_4(VAR_1, 1, 2)) {
  VAR_0.sb_12--;
  if (VAR_0.sb_12) {
   VAR_2 = 0;
   goto done;
  }
 }

 VAR_2 = FUNC_1(VAR_1->bus_id, VAR_1->dev_id);
 FUNC_0(VAR_2);

done:
 FUNC_3(&VAR_0.mutex);
 return VAR_2;
}
