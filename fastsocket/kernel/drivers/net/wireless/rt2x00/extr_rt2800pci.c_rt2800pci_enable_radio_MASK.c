
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ,int,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_7)
{
 int VAR_8;


 FUNC_2(VAR_7);

 if (FUNC_6(FUNC_3(VAR_7)))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_5(VAR_7, VAR_2, ~0);
 FUNC_5(VAR_7, VAR_1, ~0);

 FUNC_1(VAR_7, VAR_3, VAR_5, 0xff, 0x02);
 FUNC_4(VAR_7, VAR_5);

 FUNC_1(VAR_7, VAR_4, VAR_6, 0, 0);
 FUNC_4(VAR_7, VAR_6);

 return VAR_8;
}
