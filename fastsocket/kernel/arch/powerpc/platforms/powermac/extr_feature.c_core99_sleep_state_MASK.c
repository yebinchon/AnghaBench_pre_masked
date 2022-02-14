
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_2__ {int board_flags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 long FUNC_1 () ;
 long FUNC_2 () ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int) ;

__attribute__((used)) static long
FUNC_4(struct device_node *VAR_9, long VAR_10, long VAR_11)
{



 if (VAR_10 == 1) {
  if (VAR_11 == 1) {
   FUNC_0(VAR_2, VAR_4);
   FUNC_0(VAR_5, VAR_6);
  } else {
   FUNC_0(VAR_5, VAR_7);
   FUNC_3(10);
   FUNC_0(VAR_2, VAR_3);
   FUNC_3(10);
  }
  return 0;
 }
 if ((VAR_8.board_flags & VAR_1) == 0)
  return -VAR_0;
 return 0;
}
