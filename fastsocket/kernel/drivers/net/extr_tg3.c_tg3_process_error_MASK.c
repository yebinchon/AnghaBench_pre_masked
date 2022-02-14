
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tg3*) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_7)
{
 u32 VAR_8;
 bool VAR_9 = 0;

 if (FUNC_2(VAR_7, VAR_0))
  return;


 VAR_8 = FUNC_5(VAR_1);
 if (VAR_8 & ~VAR_2) {
  FUNC_0(VAR_7->dev, "FLOW Attention error.  Resetting chip.\n");
  VAR_9 = 1;
 }

 if (FUNC_5(VAR_3) & ~VAR_4) {
  FUNC_0(VAR_7->dev, "MSI Status error.  Resetting chip.\n");
  VAR_9 = 1;
 }

 if (FUNC_5(VAR_5) || FUNC_5(VAR_6)) {
  FUNC_0(VAR_7->dev, "DMA Status error.  Resetting chip.\n");
  VAR_9 = 1;
 }

 if (!VAR_9)
  return;

 FUNC_1(VAR_7);

 FUNC_3(VAR_7, VAR_0);
 FUNC_4(VAR_7);
}
