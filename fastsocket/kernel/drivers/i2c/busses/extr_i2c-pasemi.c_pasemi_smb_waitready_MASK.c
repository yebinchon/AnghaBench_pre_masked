
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasemi_smbus {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct pasemi_smbus*,int ) ;
 int FUNC_3 (struct pasemi_smbus*,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct pasemi_smbus *VAR_5)
{
 int VAR_6 = 10;
 unsigned int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_2);

 while (!(VAR_7 & VAR_4) && VAR_6--) {
  FUNC_1(1);
  VAR_7 = FUNC_2(VAR_5, VAR_2);
 }


 if (VAR_7 & VAR_3)
  return -VAR_0;

 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev->dev, "Timeout, status 0x%08x\n", VAR_7);
  FUNC_3(VAR_5, VAR_2, VAR_7);
  return -VAR_1;
 }


 FUNC_3(VAR_5, VAR_2, VAR_4);

 return 0;
}
