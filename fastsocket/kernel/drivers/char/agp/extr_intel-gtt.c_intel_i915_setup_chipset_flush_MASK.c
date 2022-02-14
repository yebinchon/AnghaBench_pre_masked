
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int start; scalar_t__ end; } ;
struct TYPE_4__ {int resource_valid; TYPE_1__ ifp_resource; int bridge_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_2.bridge_dev, VAR_0, &VAR_5);
 if (!(VAR_5 & 0x1)) {
  FUNC_0();
  VAR_2.resource_valid = 1;
  FUNC_2(VAR_2.bridge_dev, VAR_0, (VAR_2.ifp_resource.start & 0xffffffff) | 0x1);
 } else {
  VAR_5 &= ~1;

  VAR_2.resource_valid = 1;
  VAR_2.ifp_resource.start = VAR_5;
  VAR_2.ifp_resource.end = VAR_5 + VAR_1;
  VAR_4 = FUNC_3(&VAR_3, &VAR_2.ifp_resource);

  if (VAR_4)
   VAR_2.resource_valid = 0;
 }
}
