
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac_txring {int clean_timer; struct pasemi_mac* mac; } ;
struct pasemi_mac {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct pasemi_mac_txring*) ;
 int FUNC_2 (struct pasemi_mac*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct pasemi_mac_txring *VAR_3 = (struct pasemi_mac_txring *)VAR_2;
 struct pasemi_mac *VAR_4 = VAR_3->mac;

 FUNC_1(VAR_3);

 FUNC_0(&VAR_3->clean_timer, VAR_1 + VAR_0);

 FUNC_2(VAR_4);
}
