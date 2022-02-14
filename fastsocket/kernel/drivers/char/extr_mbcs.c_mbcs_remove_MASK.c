
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx_dev {int dev; scalar_t__ soft; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cx_dev*) ;

__attribute__((used)) static int FUNC_3(struct cx_dev *VAR_1)
{
 if (VAR_1->soft) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1->soft);
 }

 FUNC_0(&VAR_1->dev, &VAR_0);

 return 0;
}
