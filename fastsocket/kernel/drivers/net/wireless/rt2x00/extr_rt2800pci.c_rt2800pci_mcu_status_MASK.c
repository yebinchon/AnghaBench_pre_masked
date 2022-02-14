
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*,char*) ;
 scalar_t__ const FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_7, const u8 VAR_8)
{
 unsigned int VAR_9;
 u32 VAR_10;




 if (FUNC_2(VAR_7))
  return;

 for (VAR_9 = 0; VAR_9 < 200; VAR_9++) {
  FUNC_3(VAR_7, VAR_0, &VAR_10);

  if ((FUNC_1(VAR_10, VAR_1) == VAR_8) ||
      (FUNC_1(VAR_10, VAR_2) == VAR_8) ||
      (FUNC_1(VAR_10, VAR_3) == VAR_8) ||
      (FUNC_1(VAR_10, VAR_4) == VAR_8))
   break;

  FUNC_5(VAR_6);
 }

 if (VAR_9 == 200)
  FUNC_0(VAR_7, "MCU request failed, no response from hardware\n");

 FUNC_4(VAR_7, VAR_5, ~0);
 FUNC_4(VAR_7, VAR_0, ~0);
}
