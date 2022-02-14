
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {scalar_t__ display_type; int touch; int touch_y; int touch_x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4)
{
 struct imon_context *VAR_5 = (struct imon_context *)VAR_4;

 if (VAR_5->display_type != VAR_3)
  return;

 FUNC_0(VAR_5->touch, VAR_0, VAR_5->touch_x);
 FUNC_0(VAR_5->touch, VAR_1, VAR_5->touch_y);
 FUNC_1(VAR_5->touch, VAR_2, 0x00);
 FUNC_2(VAR_5->touch);
}
