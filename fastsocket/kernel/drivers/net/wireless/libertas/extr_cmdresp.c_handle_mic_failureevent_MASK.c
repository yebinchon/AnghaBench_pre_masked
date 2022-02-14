
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lbs_private {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbs_private*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(struct lbs_private *VAR_2, u32 VAR_3)
{
 char VAR_4[50];

 FUNC_0(VAR_0);
 FUNC_3(VAR_4, 0, sizeof(VAR_4));

 FUNC_4(VAR_4, "%s", "MLME-MICHAELMICFAILURE.indication ");

 if (VAR_3 == VAR_1) {
  FUNC_5(VAR_4, "unicast ");
 } else {
  FUNC_5(VAR_4, "multicast ");
 }

 FUNC_2(VAR_2, VAR_4);
 FUNC_1(VAR_0);
}
