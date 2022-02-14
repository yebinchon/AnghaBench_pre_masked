
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct airo_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int) ;

__attribute__((used)) static u16 FUNC_2(struct airo_info *VAR_3, u16 VAR_4,
       u16 VAR_5, u16 *VAR_6)
{
 u16 VAR_7;

 FUNC_1(VAR_3, VAR_2, VAR_4);
 FUNC_1(VAR_3, VAR_1, 0);
 VAR_7 = FUNC_0(VAR_3, VAR_0);
 *VAR_6 = FUNC_0(VAR_3, VAR_0)&0xff;
 if (VAR_5 != 4) FUNC_1(VAR_3, VAR_1, VAR_5);
 return VAR_7;
}
