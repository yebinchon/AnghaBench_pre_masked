
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int std; int rxsubchans; scalar_t__ audmode; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_3)
{
 struct msp_state *VAR_4 = FUNC_3(FUNC_0(VAR_3));

 if (VAR_4->std == 0x20) {
        if ((VAR_4->rxsubchans & VAR_2) &&
     (VAR_4->audmode == VAR_0 ||
      VAR_4->audmode == VAR_1)) {
   FUNC_2(VAR_3, 0x20, 0x21);
        } else {
   FUNC_2(VAR_3, 0x20, 0x20);
        }
 }

 FUNC_1(VAR_3);
}
