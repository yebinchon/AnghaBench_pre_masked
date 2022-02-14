
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vci_t ;
struct lanai_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long const*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lanai_dev *VAR_1,
 const unsigned long *VAR_2,
 void (*VAR_3)(struct lanai_dev *,vci_t VAR_4))
{
 vci_t VAR_5 = FUNC_0(VAR_2, VAR_0);
 while (VAR_5 < VAR_0) {
  VAR_3(VAR_1, VAR_5);
  VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_5 + 1);
 }
}
