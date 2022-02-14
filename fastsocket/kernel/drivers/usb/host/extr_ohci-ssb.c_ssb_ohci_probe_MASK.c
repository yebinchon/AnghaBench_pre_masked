
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ssb_device_id {int dummy; } ;
struct ssb_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int chip_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssb_device*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct ssb_device *VAR_1,
  const struct ssb_device_id *VAR_2)
{
 int VAR_3;
 u16 VAR_4;


 VAR_4 = (VAR_1->bus->chip_id & 0xFF00);
 if (VAR_4 != 0x4700 && VAR_4 != 0x5300)
  return -VAR_0;



 if (FUNC_1())
  return -VAR_0;






 VAR_3 = FUNC_0(VAR_1);

 return VAR_3;
}
