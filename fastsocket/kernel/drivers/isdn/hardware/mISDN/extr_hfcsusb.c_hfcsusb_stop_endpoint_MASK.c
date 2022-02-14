
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hfcsusb {scalar_t__ cfg_used; TYPE_1__* fifos; } ;
struct TYPE_3__ {int active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct hfcsusb *VAR_12, int VAR_13)
{

 if ((VAR_13 == VAR_10) && (!VAR_12->fifos[VAR_6].active))
  return;
 if ((VAR_13 == VAR_8) && (!VAR_12->fifos[VAR_4].active))
  return;
 if ((VAR_13 == VAR_9) && (!VAR_12->fifos[VAR_5].active))
  return;
 if ((VAR_13 == VAR_11) && (!VAR_12->fifos[VAR_7].active))
  return;


 if (VAR_12->cfg_used == VAR_0 || VAR_12->cfg_used == VAR_2)
  FUNC_0(VAR_12->fifos + VAR_13*2 + 1);


 if (VAR_12->cfg_used == VAR_1 || VAR_12->cfg_used == VAR_3)
  FUNC_1(VAR_12->fifos + VAR_13*2 + 1);


 if (VAR_13 != VAR_11)
  FUNC_1(VAR_12->fifos + VAR_13*2);
}
