
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (struct sa1111_dev*,int,int ) ;
 int FUNC_2 (struct sa1111_dev*,int,int ,int ) ;
 int FUNC_3 (struct sa1111_dev*,int,int ) ;
 int FUNC_4 (int *,int *,int ,int) ;

int FUNC_5(struct sa1111_dev *VAR_6)
{
 int VAR_7 = -VAR_0;

 if (FUNC_0()) {




  FUNC_2(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0, 0);
  FUNC_1(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0);
  FUNC_3(VAR_6, VAR_1|VAR_2|VAR_3|VAR_4, 0);
  VAR_7 = FUNC_4(&VAR_6->dev, &VAR_5, 0, 2);
 }

 return VAR_7;
}
