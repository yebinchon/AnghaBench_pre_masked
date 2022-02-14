
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * platform_data; } ;
struct sa1111_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct sa1111_dev*,int,int ) ;
 int FUNC_4 (struct sa1111_dev*,int,int ,int ) ;
 int FUNC_5 (struct sa1111_dev*,int,int ) ;

int FUNC_6(struct sa1111_dev *VAR_6)
{
 int VAR_7 = -VAR_0;

 if (FUNC_2()) {




  FUNC_4(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0, 0);
  FUNC_3(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0);
  FUNC_5(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0);


  FUNC_1((1 << 15) | (1 << 14), 0);

  VAR_6->dev.platform_data = &VAR_5;
  VAR_7 = FUNC_0(&VAR_6->dev);
 }

 return VAR_7;
}
