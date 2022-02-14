
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_hw {int ctrl_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_hw*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct atl1c_hw*) ;

void FUNC_2(struct atl1c_hw *VAR_2)
{
 if (!(VAR_2->ctrl_flags & VAR_0))
  return;

 FUNC_0(VAR_2, VAR_1, 0);
 FUNC_1(VAR_2);
}
