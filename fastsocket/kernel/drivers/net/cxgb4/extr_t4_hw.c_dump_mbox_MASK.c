
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct adapter {int pdev_dev; } ;


 int FUNC_0 (int ,char*,int,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (struct adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, int VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0->pdev_dev,
  "mbox %d: %llx %llx %llx %llx %llx %llx %llx %llx\n", VAR_1,
  (unsigned long long)FUNC_1(VAR_0, VAR_2),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 8),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 16),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 24),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 32),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 40),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 48),
  (unsigned long long)FUNC_1(VAR_0, VAR_2 + 56));
}
