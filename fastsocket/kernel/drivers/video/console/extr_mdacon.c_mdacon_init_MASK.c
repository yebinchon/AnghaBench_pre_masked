
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_complement_mask; int vc_rows; int vc_cols; struct vc_data** vc_display_fg; } ;


 struct vc_data* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vc_data*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_3, int VAR_4)
{
 VAR_3->vc_complement_mask = 0x0800;
 VAR_3->vc_display_fg = &VAR_0;

 if (VAR_4) {
  VAR_3->vc_cols = VAR_1;
  VAR_3->vc_rows = VAR_2;
 } else
  FUNC_0(VAR_3, VAR_1, VAR_2);



 if (VAR_0 == ((void*)0))
  VAR_0 = VAR_3;
}
