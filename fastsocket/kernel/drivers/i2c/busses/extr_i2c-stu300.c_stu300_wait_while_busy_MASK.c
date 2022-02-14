
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stu300_dev {TYPE_1__* pdev; scalar_t__ virtbase; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stu300_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct stu300_dev *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_5 + VAR_4;

  while (!FUNC_4(VAR_5, VAR_7)) {

   if ((FUNC_3(VAR_6->virtbase + VAR_2) &
        VAR_3) == 0)
    return 0;
   FUNC_1(1);
  }

  FUNC_0(&VAR_6->pdev->dev, "transaction timed out "
   "waiting for device to be free (not busy). "
         "Attempt: %d\n", VAR_8+1);

  FUNC_0(&VAR_6->pdev->dev, "base address = "
   "0x%08x, reinit hardware\n", (u32) VAR_6->virtbase);

  (void) FUNC_2(VAR_6);
 }

 FUNC_0(&VAR_6->pdev->dev, "giving up after %d attempts "
  "to reset the bus.\n", VAR_0);

 return -VAR_1;
}
