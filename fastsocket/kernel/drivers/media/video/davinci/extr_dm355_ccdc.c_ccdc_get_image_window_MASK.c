
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct TYPE_4__ {struct v4l2_rect win; } ;
struct TYPE_3__ {struct v4l2_rect win; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct v4l2_rect *VAR_4)
{
 if (VAR_3 == VAR_0)
  *VAR_4 = VAR_1.win;
 else
  *VAR_4 = VAR_2.win;
}
