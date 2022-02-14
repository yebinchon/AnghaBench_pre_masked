
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {size_t len; int * buf; } ;


 int FUNC_0 (int ,struct i2c_msg*) ;

__attribute__((used)) static inline void FUNC_1(struct i2c_msg *VAR_0)
{
 VAR_0->buf[VAR_0->len] = FUNC_0(0, VAR_0);
 VAR_0->len++;
}
