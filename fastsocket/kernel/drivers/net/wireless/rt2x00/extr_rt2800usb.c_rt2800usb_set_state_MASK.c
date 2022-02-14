
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct rt2x00_dev *VAR_3,
          enum dev_state VAR_4)
{
 if (VAR_4 == VAR_2)
  FUNC_0(VAR_3, VAR_1, 0xff, 0, 2);
 else
  FUNC_0(VAR_3, VAR_0, 0xff, 0xff, 2);

 return 0;
}
