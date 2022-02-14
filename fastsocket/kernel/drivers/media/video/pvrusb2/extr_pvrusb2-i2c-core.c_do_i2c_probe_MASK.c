
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int i2c_adap; } ;
struct i2c_msg {int addr; int * buf; scalar_t__ len; int flags; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct i2c_msg*,int ) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_1, int VAR_2)
{
 struct i2c_msg VAR_3[1];
 int VAR_4;
 VAR_3[0].addr = 0;
 VAR_3[0].flags = VAR_0;
 VAR_3[0].len = 0;
 VAR_3[0].buf = ((void*)0);
 VAR_3[0].addr = VAR_2;
 VAR_4 = FUNC_1(&VAR_1->i2c_adap, VAR_3, FUNC_0(VAR_3));
 return VAR_4 == 1;
}
