
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
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct asic3*,int *) ;
 int FUNC_2 (struct asic3*,int ,int ,int ) ;
 struct asic3* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6)
{
 struct asic3 *VAR_7 = FUNC_3(VAR_6->dev.parent);

 FUNC_2(VAR_7, FUNC_0(VAR_4, VAR_5),
      VAR_3, 0);

 FUNC_1(VAR_7, &VAR_7->clocks[VAR_2]);
 FUNC_1(VAR_7, &VAR_7->clocks[VAR_0]);
 FUNC_1(VAR_7, &VAR_7->clocks[VAR_1]);

 return 0;
}
