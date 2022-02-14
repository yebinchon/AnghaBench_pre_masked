
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_2->tp, 1);
 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_2->tp, 1);
 FUNC_1(VAR_2->tp, 1);
}
