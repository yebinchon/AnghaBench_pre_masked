
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int force_bit; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,char*,int ,int) ;
 struct intel_gmbus* FUNC_1 (struct i2c_adapter*) ;

void FUNC_2(struct i2c_adapter *VAR_0, bool VAR_1)
{
 struct intel_gmbus *VAR_2 = FUNC_1(VAR_0);

 VAR_2->force_bit += VAR_1 ? 1 : -1;
 FUNC_0("%sabling bit-banging on %s. force bit now %d\n",
        VAR_1 ? "en" : "dis", VAR_0->name,
        VAR_2->force_bit);
}
