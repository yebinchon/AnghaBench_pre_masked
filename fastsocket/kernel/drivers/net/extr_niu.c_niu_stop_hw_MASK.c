
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*,int ) ;
 int FUNC_2 (struct niu*,int ) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(struct niu *VAR_1)
{
 FUNC_7(VAR_0, "%s: Disable interrupts\n", VAR_1->dev->name);
 FUNC_1(VAR_1, 0);

 FUNC_7(VAR_0, "%s: Disable RX MAC\n", VAR_1->dev->name);
 FUNC_2(VAR_1, 0);

 FUNC_7(VAR_0, "%s: Disable IPP\n", VAR_1->dev->name);
 FUNC_0(VAR_1);

 FUNC_7(VAR_0, "%s: Stop TX channels\n", VAR_1->dev->name);
 FUNC_6(VAR_1);

 FUNC_7(VAR_0, "%s: Stop RX channels\n", VAR_1->dev->name);
 FUNC_5(VAR_1);

 FUNC_7(VAR_0, "%s: Reset TX channels\n", VAR_1->dev->name);
 FUNC_4(VAR_1);

 FUNC_7(VAR_0, "%s: Reset RX channels\n", VAR_1->dev->name);
 FUNC_3(VAR_1);
}
