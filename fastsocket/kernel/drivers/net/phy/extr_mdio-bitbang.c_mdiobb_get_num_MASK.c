
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mdiobb_ctrl {int dummy; } ;


 int FUNC_0 (struct mdiobb_ctrl*) ;

__attribute__((used)) static u16 FUNC_1(struct mdiobb_ctrl *VAR_0, int VAR_1)
{
 int VAR_2;
 u16 VAR_3 = 0;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
  VAR_3 <<= 1;
  VAR_3 |= FUNC_0(VAR_0);
 }

 return VAR_3;
}
