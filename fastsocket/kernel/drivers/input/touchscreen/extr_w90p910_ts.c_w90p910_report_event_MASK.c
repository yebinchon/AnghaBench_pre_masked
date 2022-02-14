
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {scalar_t__ ts_reg; struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct w90p910_ts *VAR_3, bool VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->input;

 if (VAR_4) {
  FUNC_1(VAR_5, VAR_0,
     FUNC_0(VAR_3->ts_reg + 0x0c));
  FUNC_1(VAR_5, VAR_1,
     FUNC_0(VAR_3->ts_reg + 0x10));
 }

 FUNC_2(VAR_5, VAR_2, VAR_4);
 FUNC_3(VAR_5);
}
