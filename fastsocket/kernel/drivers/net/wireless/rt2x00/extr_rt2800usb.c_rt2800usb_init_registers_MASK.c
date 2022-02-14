
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_9)
{
 u32 VAR_10;




 if (FUNC_0(VAR_9))
  return -VAR_0;

 FUNC_2(VAR_9, VAR_4, &VAR_10);
 FUNC_3(VAR_9, VAR_4, VAR_10 & ~0x00002000);

 VAR_10 = 0;
 FUNC_1(&VAR_10, VAR_3, 1);
 FUNC_1(&VAR_10, VAR_2, 1);
 FUNC_3(VAR_9, VAR_1, VAR_10);

 FUNC_3(VAR_9, VAR_7, 0x00000000);

 FUNC_4(VAR_9, VAR_6, 0,
        VAR_8, VAR_5);

 FUNC_3(VAR_9, VAR_1, 0x00000000);

 return 0;
}
