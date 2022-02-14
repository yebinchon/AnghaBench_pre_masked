
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lynx {int i2c_driven_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_lynx*,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 if (VAR_2) {
    ((struct ti_lynx *) VAR_1)->i2c_driven_state |= 0x00000040;
 } else {
    ((struct ti_lynx *) VAR_1)->i2c_driven_state &= ~0x00000040;
 }
 FUNC_0((struct ti_lynx *) VAR_1, VAR_0, ((struct ti_lynx *) VAR_1)->i2c_driven_state);
}
