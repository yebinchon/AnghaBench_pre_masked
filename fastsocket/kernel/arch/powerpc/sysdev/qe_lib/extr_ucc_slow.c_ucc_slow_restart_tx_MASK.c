
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ucc_slow_private {struct ucc_slow_info* us_info; } ;
struct ucc_slow_info {int ucc_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ucc_slow_private * VAR_2)
{
 struct ucc_slow_info *VAR_3 = VAR_2->us_info;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->ucc_num);
 FUNC_0(VAR_1, VAR_4, VAR_0, 0);
}
