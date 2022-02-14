
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clcd_panel {int dummy; } ;
struct clcd_board {int dummy; } ;
struct TYPE_4__ {struct clcd_board* platform_data; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 struct clcd_panel* VAR_2 ;

int FUNC_1(struct clcd_board *VAR_3, struct clcd_panel *VAR_4)
{
 VAR_2 = VAR_4;
 VAR_0.dev.platform_data = VAR_3;
 return FUNC_0(&VAR_0, &VAR_1);
}
