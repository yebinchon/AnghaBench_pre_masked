
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct rt2x00_dev *VAR_4 = (struct rt2x00_dev *)VAR_3;
 FUNC_2(VAR_4);
 FUNC_0(VAR_4,
      VAR_1, 0xffffffff);
 if (FUNC_3(VAR_0, &VAR_4->flags))
  FUNC_1(VAR_4, VAR_2);
}
