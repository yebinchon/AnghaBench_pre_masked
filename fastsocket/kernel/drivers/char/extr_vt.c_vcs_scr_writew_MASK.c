
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {unsigned long vc_pos; } ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

void FUNC_2(struct vc_data *VAR_1, u16 VAR_2, u16 *VAR_3)
{
 FUNC_1(VAR_2, VAR_3);
 if ((unsigned long)VAR_3 == VAR_1->vc_pos) {
  VAR_0 = -1;
  FUNC_0(VAR_1);
 }
}
