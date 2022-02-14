
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct asic3 {int * clocks; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct asic3*,int *) ;
 int FUNC_2 (struct asic3*,int ,int ,int) ;
 int FUNC_3 (struct asic3*,int ,int) ;
 struct asic3* FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_18)
{
 struct asic3 *VAR_19 = FUNC_4(VAR_18->dev.parent);


 FUNC_2(VAR_19, FUNC_0(VAR_15, VAR_14),
      VAR_5, 1);
 FUNC_2(VAR_19, FUNC_0(VAR_15, VAR_14),
      VAR_6, 1);
 FUNC_2(VAR_19, FUNC_0(VAR_15, VAR_14),
      VAR_9, 0);
 FUNC_2(VAR_19, FUNC_0(VAR_15, VAR_14),
      VAR_7, 0);

 FUNC_1(VAR_19, &VAR_19->clocks[VAR_0]);



 FUNC_1(VAR_19, &VAR_19->clocks[VAR_1]);
 FUNC_5(1);


 FUNC_3(VAR_19, FUNC_0(VAR_10, VAR_16),
  VAR_11 | VAR_12);

 FUNC_1(VAR_19, &VAR_19->clocks[VAR_3]);
 FUNC_1(VAR_19, &VAR_19->clocks[VAR_2]);
 FUNC_5(1);

 FUNC_2(VAR_19, FUNC_0(VAR_13, VAR_17),
      VAR_4, 1);


 FUNC_2(VAR_19, FUNC_0(VAR_15, VAR_14),
      VAR_8, 1);

 return 0;
}
