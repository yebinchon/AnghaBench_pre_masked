
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stu300_dev {int speed; scalar_t__ virtbase; TYPE_1__* pdev; } ;
struct TYPE_5__ {unsigned long rate; int setting; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stu300_dev *VAR_7, unsigned long VAR_8)
{

 u32 VAR_9;
 int VAR_10 = 0;


 while (VAR_10 < FUNC_0(VAR_6) &&
        VAR_6[VAR_10].rate < VAR_8)
  VAR_10++;

 if (VAR_6[VAR_10].setting == 0xFFU) {
  FUNC_2(&VAR_7->pdev->dev, "too %s clock rate requested "
   "(%lu Hz).\n", VAR_10 ? "high" : "low", VAR_8);
  return -VAR_0;
 }

 FUNC_3(VAR_6[VAR_10].setting,
     VAR_7->virtbase + VAR_5);

 FUNC_1(&VAR_7->pdev->dev, "Clock rate %lu Hz, I2C bus speed %d Hz "
  "virtbase %p\n", VAR_8, VAR_7->speed, VAR_7->virtbase);

 if (VAR_7->speed > 100000)

  VAR_9 = ((VAR_8/VAR_7->speed) - 9)/3 + 1;
 else

  VAR_9 = ((VAR_8/VAR_7->speed) - 7)/2 + 1;


 if (VAR_9 < 0x002) {
  FUNC_2(&VAR_7->pdev->dev, "too low clock rate (%lu Hz).\n",
   VAR_8);
  return -VAR_0;
 }


 if (VAR_9 & 0xFFFFF000U) {
  FUNC_2(&VAR_7->pdev->dev, "too high clock rate (%lu Hz).\n",
   VAR_8);
  return -VAR_0;
 }

 if (VAR_7->speed > 100000) {

  FUNC_3((VAR_9 & VAR_2) | VAR_3,
      VAR_7->virtbase + VAR_1);
  FUNC_1(&VAR_7->pdev->dev, "set clock divider to 0x%08x, "
   "Fast Mode I2C\n", VAR_9);
 } else {

  FUNC_3((VAR_9 & VAR_2),
      VAR_7->virtbase + VAR_1);
  FUNC_1(&VAR_7->pdev->dev, "set clock divider to "
   "0x%08x, Standard Mode I2C\n", VAR_9);
 }


 FUNC_3(((VAR_9 >> 7) & 0x1F),
     VAR_7->virtbase + VAR_4);

 return 0;
}
