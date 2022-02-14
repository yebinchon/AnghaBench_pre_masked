
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_ts_data {int dummy; } ;


 int FUNC_0 (struct synaptics_ts_data*,int,int,char*) ;

__attribute__((used)) static int FUNC_1(struct synaptics_ts_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0xff, 0x10, "set page select");
 if (VAR_1 == 0)
  VAR_1 = FUNC_0(VAR_0, 0x41, 0x04, "set No Clip Z");

 VAR_1 = FUNC_0(VAR_0, 0xff, 0x04, "fallback page select");
 VAR_1 = FUNC_0(VAR_0, 0xf0, 0x81, "select 80 reports per second");
 return VAR_1;
}
