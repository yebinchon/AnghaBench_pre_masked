
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct adapter {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct adapter*,int ,struct intr_info const*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1)
{
 static const struct intr_info VAR_2[] = {
  { 0x3fffffff, "TP parity error", -1, 1 },
  { 128, "TP out of Tx pages", -1, 1 },
  { 0 }
 };

 if (FUNC_1(VAR_1, VAR_0, VAR_2))
  FUNC_0(VAR_1);
}
