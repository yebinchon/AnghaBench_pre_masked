
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int v4l2_std; scalar_t__ radio; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_4 ;
 struct msp_state* FUNC_1 (int ) ;
 int FUNC_2 (int,int ,struct i2c_client*,char*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_1(FUNC_0(VAR_5));

 if (VAR_6->radio) {
  FUNC_2(1, VAR_4, VAR_5, "selected radio modus\n");
  return 0x0001;
 }
 if (VAR_6->v4l2_std == VAR_1) {
  FUNC_2(1, VAR_4, VAR_5, "selected M (EIA-J) modus\n");
  return 0x4001;
 }
 if (VAR_6->v4l2_std == VAR_2) {
  FUNC_2(1, VAR_4, VAR_5, "selected M (A2) modus\n");
  return 0x0001;
 }
 if (VAR_6->v4l2_std == VAR_3) {
  FUNC_2(1, VAR_4, VAR_5, "selected SECAM-L modus\n");
  return 0x6001;
 }
 if (VAR_6->v4l2_std & VAR_0) {
  FUNC_2(1, VAR_4, VAR_5, "selected M (BTSC) modus\n");
  return 0x2001;
 }
 return 0x7001;
}
