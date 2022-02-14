
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7;





 FUNC_2(VAR_5, VAR_1, 0);
 FUNC_2(VAR_5, VAR_2, 0);
 FUNC_0(1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_1(VAR_5, 0, &VAR_7);
  if ((VAR_7 != 0xff) && (VAR_7 != 0x00))
   return 0;
  FUNC_4(VAR_4);
 }

 FUNC_3(VAR_5, "BBP register access failed, aborting\n");
 return -VAR_0;
}
