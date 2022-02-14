
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int iTCO_version; int pdev; int gcs; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2 = 0;
 u32 VAR_3;


 if (VAR_1.iTCO_version == 2) {
  VAR_3 = FUNC_2(VAR_1.gcs);
  VAR_3 &= 0xffffffdf;
  FUNC_3(VAR_3, VAR_1.gcs);

  VAR_3 = FUNC_2(VAR_1.gcs);
  if (VAR_3 & 0x00000020)
   VAR_2 = -VAR_0;
 } else if (VAR_1.iTCO_version == 1) {
  FUNC_0(VAR_1.pdev, 0xd4, &VAR_3);
  VAR_3 &= 0xfffffffd;
  FUNC_1(VAR_1.pdev, 0xd4, VAR_3);

  FUNC_0(VAR_1.pdev, 0xd4, &VAR_3);
  if (VAR_3 & 0x00000002)
   VAR_2 = -VAR_0;
 }

 return VAR_2;
}
