
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {int board_flags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static long FUNC_2(struct device_node *VAR_5, long VAR_6,
     long VAR_7)
{
 if ((VAR_4.board_flags & VAR_1) == 0)
  return -VAR_0;
 if (VAR_7 == 1) {
  if (VAR_2[1].type == VAR_3)
   FUNC_0(&VAR_2[0], 1);
  FUNC_0(&VAR_2[0], 0);
 } else if (VAR_7 == 0) {
  FUNC_1(&VAR_2[0], 0);
  if (VAR_2[1].type == VAR_3)
   FUNC_1(&VAR_2[0], 1);
 }
 return 0;
}
