
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_2,
        int VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;





 FUNC_1(VAR_2, VAR_5, &VAR_6);
 FUNC_3(&VAR_6, VAR_0, (VAR_4 & 0x7));
 FUNC_3(&VAR_6, VAR_1,
      (VAR_4 & 0x8) >> 3);
 FUNC_2(VAR_2, VAR_5, VAR_6);
}
