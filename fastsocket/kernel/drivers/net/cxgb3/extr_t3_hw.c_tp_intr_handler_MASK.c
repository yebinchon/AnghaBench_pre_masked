
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct adapter*,int ,int,struct intr_info const*,int *) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2)
{
 static const struct intr_info VAR_3[] = {
  {0xffffff, "TP parity error", -1, 1},
  {0x1000000, "TP out of Rx pages", -1, 1},
  {0x2000000, "TP out of Tx pages", -1, 1},
  {0}
 };

 static const struct intr_info VAR_4[] = {
  {0x1fffffff, "TP parity error", -1, 1},
  {129, "TP out of Rx pages", -1, 1},
  {128, "TP out of Tx pages", -1, 1},
  {0}
 };

 if (FUNC_1(VAR_2, VAR_0, 0xffffffff,
      VAR_2->params.rev < VAR_1 ?
      VAR_3 : VAR_4, ((void*)0)))
  FUNC_0(VAR_2);
}
