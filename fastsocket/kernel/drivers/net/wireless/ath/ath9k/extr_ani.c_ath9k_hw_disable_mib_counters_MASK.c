
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int ah_mibStats; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int *) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;

void FUNC_4(struct ath_hw *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_1(VAR_6);

 FUNC_3(VAR_7, VAR_0, "Disable MIB counters\n");

 FUNC_0(VAR_6, VAR_3, VAR_5);
 FUNC_2(VAR_6, &VAR_6->ah_mibStats);
 FUNC_0(VAR_6, VAR_3, VAR_4);
 FUNC_0(VAR_6, VAR_2, 0);
 FUNC_0(VAR_6, VAR_1, 0);
}
