
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {scalar_t__ card; } ;
struct if_cs_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct if_cs_card*) ;
 int FUNC_1 (struct if_cs_card*) ;
 int FUNC_2 (struct if_cs_card*,int ) ;
 int FUNC_3 (struct if_cs_card*,int ,int) ;
 int FUNC_4 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_5 (struct if_cs_card*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct lbs_private *VAR_7, u8 *VAR_8, u16 VAR_9)
{
 struct if_cs_card *VAR_10 = (struct if_cs_card *)VAR_7->card;
 int VAR_11 = -1;
 int VAR_12 = 0;

 FUNC_6(VAR_6);
 FUNC_0(VAR_10);


 while (1) {
  u16 VAR_13 = FUNC_2(VAR_10, VAR_1);
  if (VAR_13 & VAR_0)
   break;
  if (++VAR_12 > 100) {
   FUNC_8("card not ready for commands\n");
   goto done;
  }
  FUNC_9(1);
 }

 FUNC_3(VAR_10, VAR_3, VAR_9);

 FUNC_4(VAR_10, VAR_2, VAR_8, VAR_9 / 2);

 if (VAR_9 & 1)
  FUNC_5(VAR_10, VAR_2, VAR_8[VAR_9-1]);



 FUNC_3(VAR_10, VAR_5, VAR_0);



 FUNC_3(VAR_10, VAR_4, VAR_0);
 VAR_11 = 0;

done:
 FUNC_1(VAR_10);
 FUNC_7(VAR_6, "ret %d", VAR_11);
 return VAR_11;
}
