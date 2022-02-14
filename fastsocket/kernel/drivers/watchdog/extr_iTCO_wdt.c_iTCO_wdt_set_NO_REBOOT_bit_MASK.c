
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int iTCO_version; int pdev; int gcs; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_1;


 if (VAR_0.iTCO_version == 2) {
  VAR_1 = FUNC_2(VAR_0.gcs);
  VAR_1 |= 0x00000020;
  FUNC_3(VAR_1, VAR_0.gcs);
 } else if (VAR_0.iTCO_version == 1) {
  FUNC_0(VAR_0.pdev, 0xd4, &VAR_1);
  VAR_1 |= 0x00000002;
  FUNC_1(VAR_0.pdev, 0xd4, VAR_1);
 }
}
