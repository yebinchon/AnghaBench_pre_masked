
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; } ;
struct TYPE_4__ {TYPE_1__ si; } ;
struct radeon_device {struct radeon_ring* ring; TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_7 (struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_12)
{
 struct radeon_ring *VAR_13 = &VAR_12->ring[VAR_9];
 int VAR_14, VAR_15;

 VAR_14 = FUNC_5(VAR_12, VAR_13, 7 + 4);
 if (VAR_14) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_14);
  return VAR_14;
 }

 FUNC_7(VAR_13, FUNC_1(VAR_3, 5));
 FUNC_7(VAR_13, 0x1);
 FUNC_7(VAR_13, 0x0);
 FUNC_7(VAR_13, VAR_12->config.si.max_hw_contexts - 1);
 FUNC_7(VAR_13, FUNC_4(1));
 FUNC_7(VAR_13, 0);
 FUNC_7(VAR_13, 0);


 FUNC_7(VAR_13, FUNC_1(VAR_7, 2));
 FUNC_7(VAR_13, FUNC_2(VAR_1));
 FUNC_7(VAR_13, 0xc000);
 FUNC_7(VAR_13, 0xe000);
 FUNC_6(VAR_12, VAR_13);

 FUNC_8(VAR_12, 1);

 VAR_14 = FUNC_5(VAR_12, VAR_13, VAR_10 + 10);
 if (VAR_14) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_14);
  return VAR_14;
 }


 FUNC_7(VAR_13, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_13, VAR_4);

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  FUNC_7(VAR_13, VAR_11[VAR_15]);

 FUNC_7(VAR_13, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_13, VAR_6);


 FUNC_7(VAR_13, FUNC_1(VAR_2, 0));
 FUNC_7(VAR_13, 0);

 FUNC_7(VAR_13, FUNC_1(VAR_8, 2));
 FUNC_7(VAR_13, 0x00000316);
 FUNC_7(VAR_13, 0x0000000e);
 FUNC_7(VAR_13, 0x00000010);

 FUNC_6(VAR_12, VAR_13);

 for (VAR_15 = VAR_9; VAR_15 <= VAR_0; ++VAR_15) {
  VAR_13 = &VAR_12->ring[VAR_15];
  VAR_14 = FUNC_5(VAR_12, VAR_13, 2);


  FUNC_7(VAR_13, FUNC_3(VAR_2, 0));
  FUNC_7(VAR_13, 0);

  FUNC_6(VAR_12, VAR_13);
 }

 return 0;
}
