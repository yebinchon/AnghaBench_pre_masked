
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_rows; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct vc_data *VAR_0, int VAR_1)
{
 if (!VAR_1)
  VAR_1 = VAR_0->vc_rows / 2;
 FUNC_0(-VAR_1);
}
