
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int keylock; } ;


 int FUNC_0 (struct rc_dev*,int,int ,int ) ;
 int FUNC_1 (struct rc_dev*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rc_dev *VAR_0, int VAR_1, u8 VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_2(&VAR_0->keylock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
 FUNC_3(&VAR_0->keylock, VAR_3);
}
