
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int ,int,int,int *) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,int ,int,int,int *,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x_phy *VAR_3,
       struct link_params *VAR_4)

{
 u8 VAR_5;
 int VAR_6;
 struct bnx2x *VAR_7 = VAR_4->bp;
 u16 VAR_8;




 for (VAR_8 = 0; VAR_8 < 60; VAR_8++) {
  if (VAR_3->type == VAR_2)
   VAR_6 = FUNC_2(
    VAR_3, VAR_4, VAR_0, 1, 1, &VAR_5,
    1);
  else
   VAR_6 = FUNC_1(VAR_3, VAR_4,
         VAR_0,
         1, 1, &VAR_5);
  if (VAR_6 == 0) {
   FUNC_0(VAR_1,
      "SFP+ module initialization took %d ms\n",
      VAR_8 * 5);
   return 0;
  }
  FUNC_3(5000, 10000);
 }
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0,
       1, 1, &VAR_5);
 return VAR_6;
}
