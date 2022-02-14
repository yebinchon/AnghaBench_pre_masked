
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_2__ {int pressure; int y; int x; } ;
struct corgi_ts {scalar_t__ power_mode; scalar_t__ pendown; TYPE_1__ tc; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct corgi_ts *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->input;

 if (VAR_5->power_mode != VAR_4)
  return;

 if (!VAR_5->tc.pressure && VAR_5->pendown == 0)
  return;

 FUNC_0(VAR_6, VAR_1, VAR_5->tc.x);
 FUNC_0(VAR_6, VAR_2, VAR_5->tc.y);
 FUNC_0(VAR_6, VAR_0, VAR_5->tc.pressure);
 FUNC_1(VAR_6, VAR_3, VAR_5->pendown);
 FUNC_2(VAR_6);
}
