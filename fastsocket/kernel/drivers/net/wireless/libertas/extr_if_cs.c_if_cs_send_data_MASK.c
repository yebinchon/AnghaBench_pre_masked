
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {scalar_t__ card; } ;
struct if_cs_card {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct if_cs_card*) ;
 int FUNC_2 (struct if_cs_card*) ;
 int FUNC_3 (struct if_cs_card*,int ) ;
 int FUNC_4 (struct if_cs_card*,int ,int) ;
 int FUNC_5 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_6 (struct if_cs_card*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct lbs_private *VAR_7, u8 *VAR_8, u16 VAR_9)
{
 struct if_cs_card *VAR_10 = (struct if_cs_card *)VAR_7->card;
 u16 VAR_11;

 FUNC_7(VAR_6);
 FUNC_1(VAR_10);

 VAR_11 = FUNC_3(VAR_10, VAR_1);
 FUNC_0((VAR_11 & VAR_0) == 0);

 FUNC_4(VAR_10, VAR_5, VAR_9);


 FUNC_5(VAR_10, VAR_4, VAR_8, VAR_9 / 2);
 if (VAR_9 & 1)
  FUNC_6(VAR_10, VAR_4, VAR_8[VAR_9-1]);

 FUNC_4(VAR_10, VAR_3, VAR_0);
 FUNC_4(VAR_10, VAR_2, VAR_0);
 FUNC_2(VAR_10);

 FUNC_8(VAR_6);
}
