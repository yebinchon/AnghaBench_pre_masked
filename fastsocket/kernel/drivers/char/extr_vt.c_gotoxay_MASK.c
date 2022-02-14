
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_top; scalar_t__ vc_decom; } ;


 int FUNC_0 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_0->vc_decom ? (VAR_0->vc_top + VAR_2) : VAR_2);
}
