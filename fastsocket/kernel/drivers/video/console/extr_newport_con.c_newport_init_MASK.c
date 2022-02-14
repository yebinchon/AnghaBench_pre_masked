
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_cols; int vc_rows; int vc_can_do_color; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_2, int VAR_3)
{
 VAR_2->vc_cols = VAR_0 / 8;
 VAR_2->vc_rows = VAR_1 / 16;
 VAR_2->vc_can_do_color = 1;
}
