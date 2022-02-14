
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13783 {int revision; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (struct mc13783*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct mc13783 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_2, VAR_1, &VAR_3);

 VAR_4 = (VAR_3 & 0x018) >> 3;
 VAR_5 = (VAR_3 & 0x007);
 VAR_7 = (VAR_3 & 0x01C0) >> 6;
 VAR_6 = (VAR_3 & 0x01E00) >> 9;


 if ((VAR_4 == 0) && (VAR_5 == 2))
  VAR_4 = 3;

 if (VAR_4 == 0 || VAR_7 != 2) {
  FUNC_0(VAR_2->dev, "No MC13783 detected.\n");
  return -VAR_0;
 }

 VAR_2->revision = ((VAR_4 * 10) + VAR_5);
 FUNC_1(VAR_2->dev, "MC13783 Rev %d.%d FinVer %x detected\n", VAR_4,
        VAR_5, VAR_6);

 return 0;
}
