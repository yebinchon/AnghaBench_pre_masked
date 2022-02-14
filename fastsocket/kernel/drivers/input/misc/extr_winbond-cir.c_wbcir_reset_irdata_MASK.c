
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ irdata_error; scalar_t__ irdata_off; scalar_t__ irdata_count; int irdata; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct wbcir_data *VAR_0)
{
 FUNC_0(VAR_0->irdata, 0, sizeof(VAR_0->irdata));
 VAR_0->irdata_count = 0;
 VAR_0->irdata_off = 0;
 VAR_0->irdata_error = 0;
}
