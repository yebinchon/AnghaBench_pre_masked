
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int hw; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct rt2x00_dev*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_3)
{
 if (!FUNC_1(VAR_0, &VAR_3->flags))
  return;


 FUNC_0(
  VAR_3->hw, VAR_1,
  VAR_2, VAR_3);
}
