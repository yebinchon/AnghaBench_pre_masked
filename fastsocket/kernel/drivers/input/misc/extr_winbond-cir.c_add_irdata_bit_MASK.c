
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int irdata_count; int irdata_error; int irdata; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct wbcir_data *VAR_0, int VAR_1)
{
 if (VAR_0->irdata_count >= sizeof(VAR_0->irdata) * 8) {
  VAR_0->irdata_error = 1;
  return;
 }

 if (VAR_1)
  FUNC_0(VAR_0->irdata_count, VAR_0->irdata);
 VAR_0->irdata_count++;
}
