
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = FUNC_2(VAR_1);

  if (VAR_8 & 1 << VAR_7)
   break;
  FUNC_1(VAR_5);
 }
 if (VAR_9 == VAR_4) {
  if (VAR_7 == VAR_3)
   FUNC_0(VAR_6->dev, "Timeout in wait(STAT_XFE)\n");
  if (VAR_7 == VAR_2)
   FUNC_0(VAR_6->dev, "Timeout in wait(STAT_RDA)\n");
  return -VAR_0;
 }
 return 0;
}
