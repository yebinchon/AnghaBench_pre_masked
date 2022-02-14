
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stu300_dev {scalar_t__ virtbase; TYPE_1__* pdev; } ;
struct i2c_msg {int flags; int addr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct stu300_dev*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stu300_dev *VAR_8,
     struct i2c_msg *VAR_9, int VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 if (VAR_9->flags & VAR_5)

  VAR_11 = (0xf0 | (((u32) VAR_9->addr & 0x300) >> 7)) &
   VAR_3;
 else
  VAR_11 = ((VAR_9->addr << 1) & VAR_3);

 if (VAR_9->flags & VAR_4) {

  VAR_11 |= 0x01;
  if (VAR_10)
   FUNC_0(&VAR_8->pdev->dev, "read resend\n");
 } else if (VAR_10)
  FUNC_0(&VAR_8->pdev->dev, "write resend\n");
 FUNC_3(VAR_11, VAR_8->virtbase + VAR_2);


 if (VAR_9->flags & VAR_5) {
  VAR_12 = FUNC_1(VAR_8, VAR_7);




  VAR_11 = VAR_9->addr & VAR_3;

  FUNC_3(VAR_11, VAR_8->virtbase + VAR_2);
  if (VAR_12 != 0)
   return VAR_12;
 }




 if (VAR_10)
  FUNC_0(&VAR_8->pdev->dev, "await event 6\n");
 VAR_12 = FUNC_1(VAR_8, VAR_6);





 VAR_11 = FUNC_2(VAR_8->virtbase + VAR_0);
 VAR_11 |= VAR_1;
 FUNC_3(VAR_11, VAR_8->virtbase + VAR_0);

 return VAR_12;
}
